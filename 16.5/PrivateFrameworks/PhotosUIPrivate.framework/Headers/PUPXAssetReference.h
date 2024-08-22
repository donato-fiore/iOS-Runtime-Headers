// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXASSETREFERENCE_H
#define PUPXASSETREFERENCE_H

@class PXAssetReference;


#import "PUAssetReference.h"

@interface PUPXAssetReference : PUAssetReference

@property (readonly, nonatomic) PXAssetReference *underlyingAssetReference; // ivar: _underlyingAssetReference


-(id)initWithAsset:(id)arg0 assetCollection:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(id)initWithPXAssetReference:(id)arg0 dataSourceIdentifier:(id)arg1 ;
-(id)pxAssetReference;


@end


#endif