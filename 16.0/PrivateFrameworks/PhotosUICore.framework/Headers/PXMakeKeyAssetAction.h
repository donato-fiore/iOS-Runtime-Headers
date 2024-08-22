// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMAKEKEYASSETACTION_H
#define PXMAKEKEYASSETACTION_H

@class PHAssetCollection, PHAsset;


#import "PXPhotosAction.h"

@interface PXMakeKeyAssetAction : PXPhotosAction

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PHAsset *redoKeyAsset; // ivar: _redoKeyAsset
@property (readonly, nonatomic) PHAsset *undoKeyAsset; // ivar: _undoKeyAsset


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)initWithAssetCollection:(id)arg0 keyAsset:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif