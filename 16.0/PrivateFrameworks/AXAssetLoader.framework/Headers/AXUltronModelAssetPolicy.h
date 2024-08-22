// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXULTRONMODELASSETPOLICY_H
#define AXULTRONMODELASSETPOLICY_H



#import "AXAssetPolicy.h"

@interface AXUltronModelAssetPolicy : AXAssetPolicy



+(BOOL)_isUltronAssetCompatible:(id)arg0 ;
+(NSInteger)maximumCompatibilityVersion;
+(NSInteger)minimumCompatibilityVersion;
+(id)assetsToDownloadFromAssets:(id)arg0 ;
+(id)compatibleAssetsFromRefreshedAssets:(id)arg0 ;
+(id)newestCompatiableAssetsFromAssets:(id)arg0 ;
+(id)ultronAssetType;
-(BOOL)daemonShouldDownloadInBackgroundIfNeeded;
-(BOOL)shouldCopyLocally;
-(id)assetType;
-(id)assetsToDownloadFromRefreshedAssets:(id)arg0 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 ;
-(id)launchActivityIdentifier;


@end


#endif