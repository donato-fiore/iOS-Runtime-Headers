// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKGREENFIELDVIEWCONTROLLER_H
#define NTKGREENFIELDVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, NSURL, UINavigationController;
@protocol NTKGreenfieldCompanionContentViewControllerDelegate, NTKGreenfieldAddWatchFaceManagerDelegate;


#import "NTKGreenfieldAddWatchFaceManager.h"
#import "NTKGreenfieldCompanionLoadingViewController.h"

@interface NTKGreenfieldViewController : UIViewController <NTKGreenfieldCompanionContentViewControllerDelegate, NTKGreenfieldAddWatchFaceManagerDelegate>

 {
    BOOL _hasLoadedURL;
    UILabel *_complicationsCounterLabel;
    NSString *_sourceApplicationBundleIdentifier;
}


@property (retain, nonatomic) NTKGreenfieldAddWatchFaceManager *addWatchFaceManager; // ivar: _addWatchFaceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSURL *faceURL; // ivar: _faceURL
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *hiddenNavigationController; // ivar: _hiddenNavigationController
@property (retain, nonatomic) NTKGreenfieldCompanionLoadingViewController *loadingViewController; // ivar: _loadingViewController
@property (readonly) Class superclass;


-(id)initWithUrl:(id)arg0 sourceApplicationBundleIdentifier:(id)arg1 ;
-(void)_didTapCancelButton;
-(void)_toggleCancelButton:(BOOL)arg0 ;
-(void)_toggleRightCounterLabel:(BOOL)arg0 ;
-(void)addWatchFaceManager:(id)arg0 didFinishAddingFaceWithError:(id)arg1 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToAddComplicationWithItemId:(id)arg1 installMode:(NSInteger)arg2 skippedComplicationSlots:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToCompletedWithSkippedComplicationSlots:(id)arg1 canRevisit:(BOOL)arg2 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToComplicationsNotAvailableWithSlots:(id)arg1 unavailableTitle:(id)arg2 unavailableDescription:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToRevisitComplicationWithItemId:(id)arg1 installMode:(NSInteger)arg2 skippedComplicationSlots:(id)arg3 ;
-(void)addWatchFaceManager:(id)arg0 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)arg1 ;
-(void)companionContentViewController:(id)arg0 didStartInstallingAppWithItemId:(id)arg1 ;
-(void)companionContentViewController:(id)arg0 handleButtonEvent:(NSInteger)arg1 ;
-(void)didStartLoadingInAddWatchFaceManager:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif