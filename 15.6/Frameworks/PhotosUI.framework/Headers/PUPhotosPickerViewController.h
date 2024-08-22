// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOSPICKERVIEWCONTROLLER_H
#define PUPHOTOSPICKERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver;


#import "PUPhotosPickerViewControllerSpec.h"
#import "PUPhotosPickerSessionInfo.h"
#import "PUTabbedLibraryViewController.h"
#import "PHPhotosPickerOptions.h"

@interface PUPhotosPickerViewController : UIViewController <UITabBarControllerDelegate, PLAssetContainerListChangeObserver, PUSessionInfoObserver>

 {
    PUPhotosPickerViewControllerSpec *_spec;
    PUPhotosPickerSessionInfo *_photosPickerSessionInfo;
    BOOL _needsToSetupOptions;
}


@property (retain, nonatomic, setter=_setTabbedLibraryViewController:) PUTabbedLibraryViewController *_tabbedLibraryViewController; // ivar: __tabbedLibraryViewController
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) int currentContentMode; // ivar: _currentContentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHPhotosPickerOptions *photosPickerOptions; // ivar: _photosPickerOptions
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(NSInteger)_preferredWhitePointAdaptivityStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_initWithSpec:(id)arg0 targetAlbum:(id)arg1 orTargetAlbumName:(id)arg2 options:(id)arg3 ;
-(id)initWithSpec:(id)arg0 targetAlbum:(id)arg1 ;
-(id)initWithSpec:(id)arg0 targetAlbumName:(id)arg1 ;
-(id)initWithSpec:(id)arg0 targetAlbumName:(id)arg1 options:(id)arg2 ;
-(void)assetContainerListDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)sessionInfoStatusDidChange:(id)arg0 ;
-(void)tabBarController:(id)arg0 didSelectViewController:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif