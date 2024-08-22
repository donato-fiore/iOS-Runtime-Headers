// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15PHOTOSUIPRIVATE45PUWALLPAPERSHUFFLECONFIGURATIONVIEWCONTROLLER_H
#define _TTC15PHOTOSUIPRIVATE45PUWALLPAPERSHUFFLECONFIGURATIONVIEWCONTROLLER_H

@class UIViewController;
@protocol _TtP15PhotosUIPrivate53PUWallpaperShuffleConfigurationViewControllerDelegate_;



@interface _TtC15PhotosUIPrivate45PUWallpaperShuffleConfigurationViewController : UIViewController {
    ? viewModel;
    ? style;
    ? manualSelectionPhotoPicker;
    ? $__lazy_storage_$_contentViewController;
}


@property (nonatomic, weak) NSObject<_TtP15PhotosUIPrivate53PUWallpaperShuffleConfigurationViewControllerDelegate_> *delegate; // ivar: delegate


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 style:(NSInteger)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 style:(NSInteger)arg1 posterConfiguration:(id)arg2 ;
-(void)didFailFinishingWithPosterConfiguration;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif