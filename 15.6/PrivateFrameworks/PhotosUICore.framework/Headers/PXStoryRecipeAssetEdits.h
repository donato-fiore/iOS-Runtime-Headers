// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYRECIPEASSETEDITS_H
#define PXSTORYRECIPEASSETEDITS_H

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

#import <Foundation/Foundation.h>


@interface PXStoryRecipeAssetEdits : NSObject

@property (readonly, nonatomic) NSObject<PXDisplayAsset> *keyAsset; // ivar: _keyAsset
@property (readonly, nonatomic) ? overallDurationInfo; // ivar: _overallDurationInfo
@property (readonly, nonatomic) NSObject<PXDisplayAssetFetchResult> *userCuratedAssets; // ivar: _userCuratedAssets


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithKeyAsset:(id)arg0 ;
-(id)copyWithOverallDurationInfo:(struct ? )arg0 userCuratedAssets:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithKeyAsset:(id)arg0 overallDurationInfo:(struct ? )arg1 userCuratedAssets:(id)arg2 ;


@end


#endif