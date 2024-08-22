// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUJOININGASSETREFERENCE_H
#define PUJOININGASSETREFERENCE_H



#import "PUAssetReference.h"

@interface PUJoiningAssetReference : PUAssetReference

@property (readonly, nonatomic) PUAssetReference *containedAssetReference; // ivar: _containedAssetReference
@property (readonly, nonatomic) NSInteger hintDataSourceIndex; // ivar: _hintDataSourceIndex


-(id)description;
-(id)initWithAsset:(id)arg0 assetCollection:(id)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 ;
-(id)initWithContainedAssetReference:(id)arg0 hintDataSourceIndex:(NSInteger)arg1 indexPath:(id)arg2 dataSourceIdentifier:(id)arg3 ;


@end


#endif