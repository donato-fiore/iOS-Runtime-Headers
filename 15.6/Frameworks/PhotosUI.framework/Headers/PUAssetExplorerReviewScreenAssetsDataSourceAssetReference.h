// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCEASSETREFERENCE_H
#define PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCEASSETREFERENCE_H



#import "PUAssetReference.h"

@interface PUAssetExplorerReviewScreenAssetsDataSourceAssetReference : PUAssetReference

@property (readonly, nonatomic) PUAssetReference *originalAssetReference; // ivar: _originalAssetReference


-(id)description;
-(id)initWithOriginalAssetReference:(id)arg0 asset:(id)arg1 dataSourceIdentifier:(id)arg2 ;


@end


#endif