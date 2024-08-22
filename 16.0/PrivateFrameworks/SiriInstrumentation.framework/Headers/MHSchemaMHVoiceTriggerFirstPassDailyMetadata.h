// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHVOICETRIGGERFIRSTPASSDAILYMETADATA_H
#define MHSCHEMAMHVOICETRIGGERFIRSTPASSDAILYMETADATA_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHVoiceTriggerFirstPassDailyMetadata : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (nonatomic) int hardwareSampleRate; // ivar: _hardwareSampleRate
@property (nonatomic) BOOL hasConfigVersion; // ivar: _hasConfigVersion
@property (nonatomic) BOOL hasHardwareSampleRate;
@property (nonatomic) BOOL hasMitigationAssetVersion; // ivar: _hasMitigationAssetVersion
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *mitigationAssetVersion; // ivar: _mitigationAssetVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteConfigVersion;
-(void)deleteHardwareSampleRate;
-(void)deleteMitigationAssetVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif