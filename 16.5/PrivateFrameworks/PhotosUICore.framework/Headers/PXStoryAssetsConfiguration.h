// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYASSETSCONFIGURATION_H
#define PXSTORYASSETSCONFIGURATION_H

@protocol PXDisplayAssetFetchResult, PXDisplayAsset;

#import <Foundation/Foundation.h>


@interface PXStoryAssetsConfiguration : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *allAssets; // ivar: _allAssets
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *curatedAssets; // ivar: _curatedAssets
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithKeyAsset:(id)arg0 curatedAssets:(id)arg1 allAssets:(id)arg2 ;


@end


#endif