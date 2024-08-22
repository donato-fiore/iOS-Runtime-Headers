// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXASSETSACTION_H
#define PXASSETSACTION_H

@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXAssetsAction : PXPhotosAction {
    id<PXFastEnumeration> *_assets;
}




+(BOOL)canPerformOnAllAssets:(id)arg0 ;
+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(id)assets;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
// -(void)performAssetChanges:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif