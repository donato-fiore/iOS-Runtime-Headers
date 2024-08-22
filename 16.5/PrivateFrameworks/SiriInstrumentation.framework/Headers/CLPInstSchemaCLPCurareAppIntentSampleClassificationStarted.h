// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPINSTSCHEMACLPCURAREAPPINTENTSAMPLECLASSIFICATIONSTARTED_H
#define CLPINSTSCHEMACLPCURAREAPPINTENTSAMPLECLASSIFICATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface CLPInstSchemaCLPCurareAppIntentSampleClassificationStarted : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasOriginalRequestId; // ivar: _hasOriginalRequestId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *originalRequestId; // ivar: _originalRequestId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteOriginalRequestId;
-(void)writeTo:(id)arg0 ;


@end


#endif