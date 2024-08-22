// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HOMEKITSCHEMAHOMEKITEVENTMETADATA_H
#define HOMEKITSCHEMAHOMEKITEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface HomeKitSchemaHomeKitEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasHkId; // ivar: _hasHkId
@property (retain, nonatomic) SISchemaUUID *hkId; // ivar: _hkId
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHkId;
-(void)writeTo:(id)arg0 ;


@end


#endif