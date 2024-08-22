// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXVOICETRIGGERASSETPOLICY_H
#define AXVOICETRIGGERASSETPOLICY_H



#import "AXAssetPolicy.h"

@interface AXVoiceTriggerAssetPolicy : AXAssetPolicy



+(BOOL)_assetsUsedInLastSixMonths;
+(BOOL)_soundSwitchesEnabled;
-(BOOL)daemonShouldDownloadInBackgroundIfNeeded;
-(BOOL)shouldCopyLocally;
-(id)assetType;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 ;
-(id)launchActivityIdentifier;
-(id)maxSupportedFormatVersion;
-(id)minSupportedFormatVersion;


@end


#endif