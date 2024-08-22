// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERACTIVITY_H
#define PUWALLPAPERACTIVITY_H

@class PXActivity, UIViewController, NSString;
@protocol SBSUIWallpaperPreviewViewControllerDelegate, PRUIModalRemoteViewControllerDelegate;



@interface PUWallpaperActivity : PXActivity <SBSUIWallpaperPreviewViewControllerDelegate, PRUIModalRemoteViewControllerDelegate>

 {
    UIViewController *_wallpaperActivityViewController;
}


@property (nonatomic, setter=_setNeedsUpdateWallpaperModificationAllowed:) BOOL _needsUpdateWallpaperModificationAllowed; // ivar: __needsUpdateWallpaperModificationAllowed
@property (nonatomic, getter=_isWallpaperModificationAllowed, setter=_setWallpaperModificationAllowed:) BOOL _wallpaperModificationAllowed; // ivar: __wallpaperModificationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)init;
-(void)_fetchImageForWallPaperAsset:(id)arg0 resultHandler:(id)arg1 ;
-(void)_handleSetWallpaperActionWithController:(id)arg0 locations:(NSInteger)arg1 ;
-(void)_restrictionsChanged:(id)arg0 ;
-(void)_updateWallpaperModificationAllowedIfNeeded;
-(void)dealloc;
-(void)modalRemoteViewControllerDidDismiss:(id)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg0 ;
-(void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg0 ;


@end


#endif