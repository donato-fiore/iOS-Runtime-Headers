// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXIMAGECAPTIONMODELASSETPOLICY_H
#define AXIMAGECAPTIONMODELASSETPOLICY_H



#import "AXAssetPolicy.h"

@interface AXImageCaptionModelAssetPolicy : AXAssetPolicy



+(NSInteger)maximumCompatibilityVersion;
+(NSInteger)minimumCompatibilityVersion;
+(id)assertionForNewsestCompatibleImageCaptionModelAssetWithStage:(id)arg0 language:(id)arg1 clientIdentifier:(id)arg2 ;
-(BOOL)daemonShouldDownloadInBackgroundIfNeeded;
-(id)assetType;
-(id)assetsToDownloadFromRefreshedAssets:(id)arg0 ;
-(id)assetsToPurgeFromInstalledAssets:(id)arg0 ;
-(id)launchActivityIdentifier;
-(void)_partitionAssets:(id)arg0 intoValidAssets:(id)arg1 invalidAssets:(id)arg2 ;


@end


#endif