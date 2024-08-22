// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSIDEBARDATACONTROLLER_H
#define PUSIDEBARDATACONTROLLER_H

@class PXSidebarDataController, UIImage, NSOperationQueue;


#import "PUStackView.h"

@interface PUSidebarDataController : PXSidebarDataController

@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage; // ivar: _emptyAlbumPlaceholderImage
@property (retain, nonatomic) PUStackView *reusableStackView; // ivar: _reusableStackView
@property (readonly, nonatomic) NSOperationQueue *workQueue;


+(id)_actionManagerWithActionType:(id)arg0 ;
+(id)_singleItemDataSourceManagerForCollection:(id)arg0 workQueue:(id)arg1 additionalAssetsFilterPredicate:(id)arg2 ;
+(id)fromMyMacAlbumsDataSectionManagerWithWorkQueue:(id)arg0 assetsFilterPredicate:(id)arg1 ;
+(id)myAlbumsDataSectionManagerForPhotoLibrary:(id)arg0 withWorkQueue:(id)arg1 assetsFilterPredicate:(id)arg2 hideAdd:(BOOL)arg3 ;
+(id)otherAlbumsDataSectionManagerWithWorkQueue:(id)arg0 sectionEnablementProvider:(id)arg1 assetsFilterPredicate:(id)arg2 ;
+(id)sharedAlbumsDataSectionManagerWithWorkQueue:(id)arg0 assetsFilterPredicate:(id)arg1 hideAdd:(BOOL)arg2 ;
+(void)_prepareConfiguration:(id)arg0 assetsFilterPredicate:(id)arg1 ;
-(NSInteger)_requestImageForAsset:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;
-(NSInteger)requestImageForItem:(id)arg0 parentItem:(id)arg1 completion:(id)arg2 ;
-(id)_createReusableStackViewWithTargetSize:(struct CGSize )arg0 ;
-(id)backedPlusButtonImage;
-(id)sectionManagersForLibrary:(id)arg0 workQueue:(id)arg1 sectionEnablementProvider:(id)arg2 additionalAssetsFilterPredicate:(id)arg3 ;
-(id)sidebarCustomSymbolImageWithName:(id)arg0 symbolColor:(id)arg1 scale:(CGFloat)arg2 ;
-(void)appearanceDidChange;


@end


#endif