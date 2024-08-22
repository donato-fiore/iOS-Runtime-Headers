// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXADDASSETSTOLASTUSEDASSETCOLLECTIONACTION_H
#define PXADDASSETSTOLASTUSEDASSETCOLLECTIONACTION_H



#import "PXAssetsAction.h"
#import "PXAddAssetsToAssetCollectionAction.h"

@interface PXAddAssetsToLastUsedAssetCollectionAction : PXAssetsAction

@property (readonly, nonatomic) PXAddAssetsToAssetCollectionAction *underlyingAction; // ivar: _underlyingAction


+(id)commandTitleWithPhotoLibrary:(id)arg0 ;
+(id)placeholderCommandTitle;
+(id)targetAssetCollectionInPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(void)configureToast:(id)arg0 withAlbumName:(id)arg1 ;
+(void)userDidAddAssetsToAssetCollection:(id)arg0 ;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithAssets:(id)arg0 error:(*id)arg1 ;
-(id)localizedActionName;
-(void)performAction:(id)arg0 ;
-(void)performRedo:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif