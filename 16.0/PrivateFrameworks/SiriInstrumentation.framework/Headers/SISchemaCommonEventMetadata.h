// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMACOMMONEVENTMETADATA_H
#define SISCHEMACOMMONEVENTMETADATA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"
#import "SISchemaLogicalTimestamp.h"

@interface SISchemaCommonEventMetadata : SISchemaInstrumentationMessage

@property (nonatomic) BOOL hasTestFingerprint; // ivar: _hasTestFingerprint
@property (nonatomic) BOOL hasTimestamp; // ivar: _hasTimestamp
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaUUID *testFingerprint; // ivar: _testFingerprint
@property (retain, nonatomic) SISchemaLogicalTimestamp *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteTestFingerprint;
-(void)deleteTimestamp;
-(void)writeTo:(id)arg0 ;


@end


#endif