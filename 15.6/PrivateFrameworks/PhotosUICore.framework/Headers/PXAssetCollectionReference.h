// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETCOLLECTIONREFERENCE_H
#define PXASSETCOLLECTIONREFERENCE_H

@protocol PXDisplayAssetCollection;


#import "PXSectionedObjectReference.h"
#import "PXAssetReference.h"

@interface PXAssetCollectionReference : PXSectionedObjectReference

@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection;
@property (readonly, nonatomic) PXAssetReference *keyAssetReference; // ivar: _keyAssetReference


-(id)initWithAssetCollection:(id)arg0 keyAssetReference:(id)arg1 indexPath:(struct PXSimpleIndexPath )arg2 ;


@end


#endif