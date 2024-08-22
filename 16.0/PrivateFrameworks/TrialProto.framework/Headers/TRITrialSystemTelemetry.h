// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITRIALSYSTEMTELEMETRY_H
#define TRITRIALSYSTEMTELEMETRY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "TRITrialAssetPurgeFields.h"
#import "TRITrialCloudKitContainerOriginFields.h"
#import "TRITrialDownloadSettingsFields.h"
#import "TRITrialDownloadStatusFields.h"
#import "TRITrialExperimentFields.h"
#import "TRITrialFactorFields.h"
#import "TRITrialMobileAssetOriginFields.h"
#import "TRITrialOnDemandFactorFields.h"
#import "TRITrialRolloutFields.h"

@interface TRITrialSystemTelemetry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) TRITrialAssetPurgeFields *assetPurgeFields; // ivar: _assetPurgeFields
@property (retain, nonatomic) NSString *clientDeploymentEnv; // ivar: _clientDeploymentEnv
@property (retain, nonatomic) NSString *clientDeploymentId; // ivar: _clientDeploymentId
@property (retain, nonatomic) NSString *clientProjectId; // ivar: _clientProjectId
@property (retain, nonatomic) NSString *clientTeamId; // ivar: _clientTeamId
@property (retain, nonatomic) TRITrialCloudKitContainerOriginFields *containerOriginFields; // ivar: _containerOriginFields
@property (retain, nonatomic) TRITrialDownloadSettingsFields *downloadSettingsFields; // ivar: _downloadSettingsFields
@property (retain, nonatomic) TRITrialDownloadStatusFields *downloadStatusFields; // ivar: _downloadStatusFields
@property (retain, nonatomic) TRITrialExperimentFields *experimentFields; // ivar: _experimentFields
@property (retain, nonatomic) TRITrialFactorFields *factorFields; // ivar: _factorFields
@property (readonly, nonatomic) BOOL hasAssetPurgeFields;
@property (readonly, nonatomic) BOOL hasClientDeploymentEnv;
@property (readonly, nonatomic) BOOL hasClientDeploymentId;
@property (readonly, nonatomic) BOOL hasClientProjectId;
@property (readonly, nonatomic) BOOL hasClientTeamId;
@property (readonly, nonatomic) BOOL hasContainerOriginFields;
@property (readonly, nonatomic) BOOL hasDownloadSettingsFields;
@property (readonly, nonatomic) BOOL hasDownloadStatusFields;
@property (readonly, nonatomic) BOOL hasExperimentFields;
@property (readonly, nonatomic) BOOL hasFactorFields;
@property (readonly, nonatomic) BOOL hasMobileAssetOriginFields;
@property (readonly, nonatomic) BOOL hasOnDemandFactorFields;
@property (readonly, nonatomic) BOOL hasPrevBcp47DeviceLocale;
@property (readonly, nonatomic) BOOL hasPrevCarrierBundleIdentifier;
@property (readonly, nonatomic) BOOL hasPrevCarrierCountryIsoCode;
@property (nonatomic) BOOL hasPrevExperimentOptOutStatus;
@property (readonly, nonatomic) BOOL hasPrevLanguageCode;
@property (readonly, nonatomic) BOOL hasPrevOsBuild;
@property (readonly, nonatomic) BOOL hasPrevRegionCode;
@property (readonly, nonatomic) BOOL hasRolloutFields;
@property (readonly, nonatomic) BOOL hasTrialdTaskName;
@property (retain, nonatomic) TRITrialMobileAssetOriginFields *mobileAssetOriginFields; // ivar: _mobileAssetOriginFields
@property (retain, nonatomic) TRITrialOnDemandFactorFields *onDemandFactorFields; // ivar: _onDemandFactorFields
@property (retain, nonatomic) NSString *prevBcp47DeviceLocale; // ivar: _prevBcp47DeviceLocale
@property (retain, nonatomic) NSString *prevCarrierBundleIdentifier; // ivar: _prevCarrierBundleIdentifier
@property (retain, nonatomic) NSString *prevCarrierCountryIsoCode; // ivar: _prevCarrierCountryIsoCode
@property (nonatomic) BOOL prevExperimentOptOutStatus; // ivar: _prevExperimentOptOutStatus
@property (retain, nonatomic) NSString *prevLanguageCode; // ivar: _prevLanguageCode
@property (retain, nonatomic) NSString *prevOsBuild; // ivar: _prevOsBuild
@property (retain, nonatomic) NSString *prevRegionCode; // ivar: _prevRegionCode
@property (retain, nonatomic) TRITrialRolloutFields *rolloutFields; // ivar: _rolloutFields
@property (retain, nonatomic) NSString *trialdTaskName; // ivar: _trialdTaskName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ensureAssetPurgeFields;
-(id)ensureExperimentFields;
-(id)ensureFactorFields;
-(id)ensureMobileAssetOriginFields;
-(id)ensureOnDemandFactorFields;
-(id)ensureRolloutFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setFieldsForDownloadOptions:(id)arg0 ;
-(void)setFieldsForRolloutDeployment:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif