// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MHSCHEMAMHRTSFALSEREJECTDETECTED_H
#define MHSCHEMAMHRTSFALSEREJECTDETECTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHRTSFalseRejectDetected : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int assetVersion; // ivar: _assetVersion
@property (copy, nonatomic) NSString *audioModelVersion; // ivar: _audioModelVersion
@property (copy, nonatomic) NSString *gestureModelVersion; // ivar: _gestureModelVersion
@property (nonatomic) BOOL hasAssetVersion;
@property (nonatomic) BOOL hasAudioModelVersion; // ivar: _hasAudioModelVersion
@property (nonatomic) BOOL hasGestureModelVersion; // ivar: _hasGestureModelVersion
@property (nonatomic) BOOL hasPolicyModelVersion; // ivar: _hasPolicyModelVersion
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *policyModelVersion; // ivar: _policyModelVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAssetVersion;
-(void)deleteAudioModelVersion;
-(void)deleteGestureModelVersion;
-(void)deletePolicyModelVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif