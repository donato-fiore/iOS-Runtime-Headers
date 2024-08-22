// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSOFTWAREUPDATEASSETMATCHER_H
#define SUSOFTWAREUPDATEASSETMATCHER_H

@class NSString, NSDictionary;


#import "SUAssetStateMatcher.h"
#import "SUPreferences.h"

@interface SUSoftwareUpdateAssetMatcher : SUAssetStateMatcher

@property (nonatomic) BOOL compareWithTatsuForEligibility; // ivar: _checkTatsu
@property (readonly, nonatomic) NSString *fromBuild; // ivar: _fromBuild
@property (readonly, nonatomic) NSString *fromProductType; // ivar: _fromProductType
@property (readonly, nonatomic) NSString *fromReleaseType; // ivar: _fromReleaseType
@property (readonly, nonatomic) NSString *fromVersion; // ivar: _fromVersion
@property (readonly, nonatomic) NSDictionary *matcherInfo; // ivar: _matcherInfo
@property (retain, nonatomic) SUPreferences *preferences; // ivar: _preferences


+(id)matcherForCurrentDevice;
+(id)matcherForCurrentDeviceWithInfo:(id)arg0 ;
+(id)matcherForCurrentDeviceWithInterestedStates:(int)arg0 ;
-(BOOL)_isDeviceEligibleForUpdate:(id)arg0 ;
-(BOOL)_isPossibleSoftwareUpdate:(id)arg0 ;
-(NSUInteger)_getIndexOfHighestVersionedAsset:(id)arg0 usingFirstKey:(id)arg1 secondKey:(id)arg2 ;
-(id)_copyMatchingAssetsAfterSortingAndFiltering:(id)arg0 ;
-(id)_createCleanOSVersionString:(id)arg0 ;
-(id)_createSortedAndFilteredAssetResults:(id)arg0 usingFirstKey:(id)arg1 secondKey:(id)arg2 ;
-(id)_filterPatchesIfNecessary:(id)arg0 ;
-(id)_findMatchFromCandidates:(id)arg0 error:(*id)arg1 ;
-(id)initWithVersion:(id)arg0 build:(id)arg1 productType:(id)arg2 releaseType:(id)arg3 interestedStates:(int)arg4 matcherInfo:(id)arg5 ;
-(void)_modifyMADownloadOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif