// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETSSELECTIONACTION_H
#define PXASSETSSELECTIONACTION_H

@protocol PXFastEnumeration;


#import "PXPhotosAction.h"
#import "PXPhotosDataSource.h"
#import "PXSelectionSnapshot.h"

@interface PXAssetsSelectionAction : PXPhotosAction

@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *selectedAssets;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot


-(id)initWithSelectionSnapshot:(id)arg0 ;
-(void)enumerateSelectedAssetIndexSetsUsingBlock:(id)arg0 ;


@end


#endif