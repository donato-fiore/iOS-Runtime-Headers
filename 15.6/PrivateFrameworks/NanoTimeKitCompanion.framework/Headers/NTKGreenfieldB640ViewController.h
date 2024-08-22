// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDB640VIEWCONTROLLER_H
#define NTKGREENFIELDB640VIEWCONTROLLER_H

@class UIViewController, NSString, NSURL, UINavigationController;
@protocol NTKGreenfieldB640ContentViewControllerDelegate, NTKGreenfieldB640WatchFacesManagerDelegate, NTKGreenfieldB640ViewControllerDelegate;


#import "NTKGreenfieldCompanionLoadingViewController.h"
#import "NTKGreenfieldB640Manager.h"

@interface NTKGreenfieldB640ViewController : UIViewController <NTKGreenfieldB640ContentViewControllerDelegate, NTKGreenfieldB640WatchFacesManagerDelegate>

 {
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_url;
    NTKGreenfieldCompanionLoadingViewController *_loadingViewController;
    UINavigationController *_hiddenNavigationController;
    NTKGreenfieldB640Manager *_b640Manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKGreenfieldB640ViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithUrl:(id)arg0 sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)_didTapCancelButton;
-(void)didFinishAddingWatchFaceToLibrary:(id)arg0 ;
-(void)didStartDecodingWatchFaces:(id)arg0 ;
-(void)greenfieldB640ContentViewController:(id)arg0 handleActionEvent:(NSInteger)arg1 selectedDecodedRecipe:(id)arg2 ;
-(void)greenfieldB640WatchFacesManager:(id)arg0 updateStateToError:(id)arg1 ;
-(void)greenfieldB640WatchFacesManager:(id)arg0 updateStateToSelectWatchFacesWithGreenfieldB640Model:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif