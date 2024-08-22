// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSCHEMAPROVISIONALSIRISTATESEVENTMETADATA_H
#define SSSCHEMAPROVISIONALSIRISTATESEVENTMETADATA_H

@class SISchemaInstrumentationMessage, NSData, SISchemaUUID;



@interface SSSchemaProvisionalSIRISTATESEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasSessionId; // ivar: _hasSessionId
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *sessionId; // ivar: _sessionId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif