// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SETUPSCHEMAPROVISIONALSIRISETUPEVENTMETADATA_H
#define SETUPSCHEMAPROVISIONALSIRISETUPEVENTMETADATA_H

@class SISchemaInstrumentationMessage, NSData, SISchemaUUID;



@interface SetupSchemaProvisionalSiriSetupEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSetupId; // ivar: _hasSetupId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *setupId; // ivar: _setupId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)deleteSetupId;
-(void)writeTo:(id)arg0 ;


@end


#endif