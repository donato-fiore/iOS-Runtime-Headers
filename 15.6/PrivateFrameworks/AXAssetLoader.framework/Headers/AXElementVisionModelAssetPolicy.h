// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXELEMENTVISIONMODELASSETPOLICY_H
#define AXELEMENTVISIONMODELASSETPOLICY_H



#import "AXAssetPolicy.h"

@interface AXElementVisionModelAssetPolicy : AXAssetPolicy



-(BOOL)shouldDownloadAsset:(id)arg0 withInstalledAssets:(id)arg1 ;
-(id)assetType;
-(id)launchActivityIdentifier;
-(id)maxSupportedFormatVersion;
-(id)minSupportedFormatVersion;


@end


#endif