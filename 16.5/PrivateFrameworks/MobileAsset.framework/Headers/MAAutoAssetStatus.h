// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETSTATUS_H
#define MAAUTOASSETSTATUS_H

@class NSDictionary, NSError, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MAAutoAssetSelector.h"
#import "MAAutoAssetProgress.h"
#import "MAAutoAssetNotifications.h"

@interface MAAutoAssetStatus : NSObject <NSSecureCoding>



@property (retain, nonatomic) MAAutoAssetSelector *assetSelector; // ivar: _assetSelector
@property (retain, nonatomic) NSDictionary *availableForUseAttributes; // ivar: _availableForUseAttributes
@property (retain, nonatomic) NSError *availableForUseError; // ivar: _availableForUseError
@property (retain, nonatomic) NSDictionary *currentLockUsage; // ivar: _currentLockUsage
@property (retain, nonatomic) MAAutoAssetProgress *downloadProgress; // ivar: _downloadProgress
@property (nonatomic) BOOL downloadUserInitiated; // ivar: _downloadUserInitiated
@property (nonatomic) BOOL downloadedAsPatch; // ivar: _downloadedAsPatch
@property (nonatomic) NSInteger downloadedFilesystemBytes; // ivar: _downloadedFilesystemBytes
@property (nonatomic) NSInteger downloadedNetworkBytes; // ivar: _downloadedNetworkBytes
@property (nonatomic) BOOL neverBeenLocked; // ivar: _neverBeenLocked
@property (retain, nonatomic) NSDictionary *newerVersionAttributes; // ivar: _newerVersionAttributes
@property (retain, nonatomic) NSError *newerVersionError; // ivar: _newerVersionError
@property (retain, nonatomic) MAAutoAssetNotifications *notifications; // ivar: _notifications
@property (nonatomic) NSInteger patchedFromBaseFilesystemBytes; // ivar: _patchedFromBaseFilesystemBytes
@property (retain, nonatomic) MAAutoAssetSelector *patchedFromBaseSelector; // ivar: _patchedFromBaseSelector
@property (retain, nonatomic) NSError *patchingAttemptError; // ivar: _patchingAttemptError
@property (nonatomic) BOOL patchingAttempted; // ivar: _patchingAttempted
@property (retain, nonatomic) NSString *stagedFromBuildVersion; // ivar: _stagedFromBuildVersion
@property (retain, nonatomic) NSString *stagedFromOSVersion; // ivar: _stagedFromOSVersion
@property (nonatomic) BOOL stagedPriorToAvailable; // ivar: _stagedPriorToAvailable


+(BOOL)supportsSecureCoding;
+(id)newCurrentLockUsageSummary:(id)arg0 ;
-(id)copy;
-(id)description;
-(id)initWithAssetSelector:(id)arg0 withNotifications:(id)arg1 withAvailableForUseAttributes:(id)arg2 withNewerVersionAttributes:(id)arg3 withDownloadUserInitiated:(BOOL)arg4 withDownloadProgress:(id)arg5 withDownloadedNetworkBytes:(NSInteger)arg6 withDownloadedFilesystemBytes:(NSInteger)arg7 withDownloadedAsPatch:(BOOL)arg8 withPatchedFromBaseSelector:(id)arg9 withPatchedFromBaseFilesystemBytes:(NSInteger)arg10 withPatchingAttempted:(BOOL)arg11 withStagedPriorToAvailable:(BOOL)arg12 withStagedFromOSVersion:(id)arg13 withStagedFromBuildVersion:(id)arg14 withCurrentLockUsage:(id)arg15 withAvailableForUseError:(id)arg16 withPatchingAttemptError:(id)arg17 withNewerVersionError:(id)arg18 ;
-(id)initWithAssetSelector:(id)arg0 withNotifications:(id)arg1 withAvailableForUseAttributes:(id)arg2 withNewerVersionAttributes:(id)arg3 withNeverBeenLocked:(BOOL)arg4 withDownloadUserInitiated:(BOOL)arg5 withDownloadProgress:(id)arg6 withDownloadedNetworkBytes:(NSInteger)arg7 withDownloadedFilesystemBytes:(NSInteger)arg8 withDownloadedAsPatch:(BOOL)arg9 withPatchedFromBaseSelector:(id)arg10 withPatchedFromBaseFilesystemBytes:(NSInteger)arg11 withPatchingAttempted:(BOOL)arg12 withStagedPriorToAvailable:(BOOL)arg13 withStagedFromOSVersion:(id)arg14 withStagedFromBuildVersion:(id)arg15 withCurrentLockUsage:(id)arg16 withAvailableForUseError:(id)arg17 withPatchingAttemptError:(id)arg18 withNewerVersionError:(id)arg19 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAvailableForUseAttributesAssetFormat:(*id)arg0 assetBuild:(*id)arg1 minOSVersion:(*id)arg2 maxOSVersion:(*id)arg3 prerequisiteBuilds:(*id)arg4 ;


@end


#endif