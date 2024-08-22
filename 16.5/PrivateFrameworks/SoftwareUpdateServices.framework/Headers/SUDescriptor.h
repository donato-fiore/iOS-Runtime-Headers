// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUDESCRIPTOR_H
#define SUDESCRIPTOR_H

@class NSString, NSDate, NSData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SUDocumentation.h"

@interface SUDescriptor : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _downloadAllowableForCellular;
}


@property (retain, nonatomic) NSString *assetID; // ivar: _assetID
@property (nonatomic) NSUInteger audienceType; // ivar: _audienceType
@property (nonatomic) BOOL autoDownloadAllowableForCellular; // ivar: _autoDownloadAllowableForCellular
@property (nonatomic) BOOL autoUpdateEnabled; // ivar: _autoUpdateEnabled
@property (retain, nonatomic) NSString *criticalDownloadPolicy; // ivar: _criticalDownloadPolicy
@property (nonatomic) BOOL criticalOutOfBoxOnly; // ivar: _criticalOutOfBoxOnly
@property (nonatomic, getter=appDemotionDisabled, setter=_setDisableAppDemotion:) BOOL disableAppDemotion; // ivar: _disableAppDemotion
@property (nonatomic, getter=cdLevel4Disabled, setter=_setDisableCDLevel4:) BOOL disableCDLevel4; // ivar: _disableCDLevel4
@property (nonatomic, getter=installTonightDisabled, setter=_setDisableInstallTonight:) BOOL disableInstallTonight; // ivar: _disableIntallTonight
@property (nonatomic, getter=siriVoiceDeletionDisabled, setter=_setDisableSiriVoiceDeletion:) BOOL disableSiriVoiceDeletion; // ivar: _disableSiriVoiceDeletion
@property (retain, nonatomic) SUDocumentation *documentation; // ivar: _documentation
@property (nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (nonatomic, getter=isDownloadable) BOOL downloadable; // ivar: _downloadable
@property (nonatomic, getter=isDownloadableOverCellular) BOOL downloadableOverCellular; // ivar: _downloadableOverCellular
@property (nonatomic) BOOL forcePasscodeRequired; // ivar: _forcePasscodeRequired
@property (nonatomic) BOOL hideInstallAlert; // ivar: _hideInstallAlert
@property (retain, nonatomic) NSString *humanReadableUpdateName; // ivar: _humanReadableUpdateName
@property (nonatomic) NSUInteger installationSize; // ivar: _installationSize
@property (nonatomic) BOOL isSplatOnly; // ivar: _isSplatOnly
@property (nonatomic) BOOL mandatoryUpdateEligible; // ivar: _mandatoryUpdateEligible
@property (nonatomic) BOOL mandatoryUpdateOptional; // ivar: _mandatoryUpdateOptional
@property (nonatomic) BOOL mandatoryUpdateRestrictedToOutOfTheBox; // ivar: _mandatoryUpdateRestrictedToOutOfTheBox
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMax; // ivar: _mandatoryUpdateVersionMax
@property (retain, nonatomic) NSString *mandatoryUpdateVersionMin; // ivar: _mandatoryUpdateVersionMin
@property (nonatomic) NSUInteger mdmDelayInterval; // ivar: _mdmDelayInterval
@property (nonatomic) NSUInteger minimumSystemPartitionSize; // ivar: _minimumSystemPartitionSize
@property (nonatomic, getter=_msuPrepareSize, setter=_setMsuPrepareSize:) NSUInteger msuPrepareSize; // ivar: _msuPrepareSize
@property (nonatomic) NSUInteger preferenceType; // ivar: _preferenceType
@property (retain, nonatomic) NSString *prerequisiteBuild; // ivar: _prerequisiteBuild
@property (retain, nonatomic) NSString *prerequisiteOS; // ivar: _prerequisiteOS
@property (retain, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (retain, nonatomic) NSString *productSystemName; // ivar: _productSystemName
@property (retain, nonatomic) NSString *productVersion; // ivar: _productVersion
@property (retain, nonatomic) NSString *productVersionExtra; // ivar: _productVersionExtra
@property (nonatomic) BOOL promoteAlternateUpdate; // ivar: _promoteAlternateUpdate
@property (retain, nonatomic) NSString *publisher; // ivar: _publisher
@property (nonatomic) BOOL rampEnabled; // ivar: _rampEnabled
@property (retain, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (retain, nonatomic) NSString *releaseType; // ivar: _releaseType
@property (retain, nonatomic, setter=setRSEPDigest:) NSData *rsepDigest; // ivar: _rsepDigest
@property (retain, nonatomic, setter=setRSEPTBMDigest:) NSData *rsepTBMDigest; // ivar: _rsepTBMDigest
@property (retain, nonatomic, setter=setSEPDigest:) NSData *sepDigest; // ivar: _sepDigest
@property (retain, nonatomic, setter=setSEPTBMDigest:) NSData *sepTBMDigest; // ivar: _sepTBMDigest
@property (retain, nonatomic) NSString *setupCritical; // ivar: _setupCritical
@property (nonatomic, getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:) BOOL streamingZipCapable; // ivar: _streamingZipCapable
@property (retain, nonatomic) NSDictionary *systemPartitionPadding; // ivar: _systemPartitionPadding
@property (nonatomic, getter=_unarchiveSize, setter=_setUnarchiveSize:) NSUInteger unarchiveSize; // ivar: _unarchiveSize
@property (nonatomic) int updateType; // ivar: _updateType
@property (nonatomic) NSUInteger upgradeType; // ivar: _upgradeType


+(BOOL)supportsSecureCoding;
-(BOOL)_hasValue:(id)arg0 ;
-(BOOL)isEmergencyOrCritical;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidDescriptor;
-(NSUInteger)hash;
-(NSUInteger)preparationSize;
-(NSUInteger)totalRequiredFreeSpace;
-(id)_buildCompareKey;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif