// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCSCHEMASCCORRECTIONCHECKED_H
#define SCSCHEMASCCORRECTIONCHECKED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SCSchemaSCCheckCorrectionResponse.h"

@interface SCSchemaSCCorrectionChecked : SISchemaInstrumentationMessage

@property (retain, nonatomic) SCSchemaSCCheckCorrectionResponse *checkCorrectionResponse; // ivar: _checkCorrectionResponse
@property (nonatomic) BOOL hasCheckCorrectionResponse; // ivar: _hasCheckCorrectionResponse
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCheckCorrectionResponse;
-(void)writeTo:(id)arg0 ;


@end


#endif