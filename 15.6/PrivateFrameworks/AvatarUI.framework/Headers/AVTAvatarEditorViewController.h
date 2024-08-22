// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATAREDITORVIEWCONTROLLER_H
#define AVTAVATAREDITORVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, AVTAvatarRecord;
@protocol AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate, AVTToolBarDelegate, AVTAvatarEditorViewControllerDelegate, AVTUILogger, AVTAvatarStoreInternal;


#import "AVTAvatarAttributeEditorViewController.h"
#import "AVTViewSessionProvider.h"
#import "AVTUIEnvironment.h"
#import "AVTSplashScreenViewController.h"
#import "AVTToolBar.h"

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate, AVTToolBarDelegate>



@property (readonly, nonatomic) AVTAvatarAttributeEditorViewController *attributeEditorViewController; // ivar: _attributeEditorViewController
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider; // ivar: _avtViewSessionProvider
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem; // ivar: _cancelButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarEditorViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem; // ivar: _doneButtonItem
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (nonatomic) BOOL hasChanges; // ivar: _hasChanges
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVTAvatarRecord *initialAvatarRecord; // ivar: _initialAvatarRecord
@property (readonly, nonatomic) BOOL isCreating; // ivar: _isCreating
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (nonatomic) BOOL shouldHideUserInfoView; // ivar: _shouldHideUserInfoView
@property (readonly, nonatomic) AVTSplashScreenViewController *splashScreenViewController; // ivar: _splashScreenViewController
@property (readonly, nonatomic) NSObject<AVTAvatarStoreInternal> *store; // ivar: _store
@property (readonly) Class superclass;
@property (retain, nonatomic) AVTToolBar *toolbar; // ivar: _toolbar


+(BOOL)shouldShowSplashScreen;
+(id)defaultSessionProvider;
+(id)viewControllerForCreatingAvatarInStore:(id)arg0 ;
+(id)viewControllerForCreatingAvatarInStore:(id)arg0 avtViewSessionProvider:(id)arg1 ;
+(id)viewControllerForEditingAvatar:(id)arg0 avtViewSessionProvider:(id)arg1 store:(id)arg2 ;
+(id)viewControllerForEditingAvatar:(id)arg0 store:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)disableAvatarSnapshotting;
-(BOOL)isModalInPresentation;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(id)appropriatePresentationController;
-(id)initWithAvatarRecord:(id)arg0 avtViewSessionProvider:(id)arg1 store:(id)arg2 enviroment:(id)arg3 isCreating:(BOOL)arg4 ;
-(id)keyCommands;
-(id)visibleLayout;
-(struct UIEdgeInsets )additionalSafeAreaInsets;
-(void)applyLayout:(id)arg0 ;
-(void)attributeEditor:(id)arg0 didUpdateVisibleLayout:(id)arg1 ;
-(void)attributeEditorDidMakeFirstSelection:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)configureEditorNavigationItems;
-(void)configurePPTMemoji;
-(void)configureSplashNavigationItems;
-(void)confirmCancel:(id)arg0 ;
-(void)controllerPresentationWillObstructView:(id)arg0 ;
-(void)enableDoneButton:(BOOL)arg0 ;
-(void)escPressed:(id)arg0 ;
-(void)finish:(id)arg0 ;
-(void)handleDiscardAttempt;
-(void)loadAttributeEditorViewWithAvatarRecord:(id)arg0 ;
-(void)loadSplashScreen;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg0 completionBlock:(id)arg1 ;
-(void)prepareForPresetsScrollTestOnCategory:(id)arg0 readyHandler:(id)arg1 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)returnPressed:(id)arg0 ;
-(void)setDisableAvatarSnapshotting:(BOOL)arg0 ;
-(void)setupInitialViewState;
-(void)splashScreenViewControllerDidCancel:(id)arg0 ;
-(void)splashScreenViewControllerDidFinish:(id)arg0 ;
-(void)toolbar:(id)arg0 didSelectButton:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)updateToolBarForLayout:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif