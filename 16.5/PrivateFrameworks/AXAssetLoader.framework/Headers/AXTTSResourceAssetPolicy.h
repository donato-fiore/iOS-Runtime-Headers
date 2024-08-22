// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXTTSRESOURCEASSETPOLICY_H
#define AXTTSRESOURCEASSETPOLICY_H



#import "AXAssetPolicy.h"

@interface AXTTSResourceAssetPolicy : AXAssetPolicy



-(BOOL)daemonShouldDownloadInBackgroundIfNeeded;
-(BOOL)shouldDownloadAsset:(id)arg0 withInstalledAssets:(id)arg1 ;
-(id)_voiceIdentifierForAsset:(id)arg0 ;
-(id)assetType;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 withRefreshedAssets:(id)arg1 ;
-(id)compatibilityVersion;
-(id)downloadOptionsForOperation:(NSUInteger)arg0 userInitiated:(BOOL)arg1 ;
-(id)launchActivityIdentifier;


@end


#endif