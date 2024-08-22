// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDPARSECCOLLECTIONVIEWCONTROLLER_H
#define DDPARSECCOLLECTIONVIEWCONTROLLER_H

@class UINavigationController, NSString, DDScannerResult, NSDictionary, RVQuery, UITapGestureRecognizer, _UIRemoteViewController, NSArray;
@protocol DDParsecHostVCInterface, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining, DDParsecCollectionDelegate;


#import "DDParsecRemoteCollectionViewController.h"
#import "DDDelegateMultiplexer.h"

@interface DDParsecCollectionViewController : UINavigationController <DDParsecHostVCInterface, UINavigationControllerDelegate, UIAdaptivePresentationControllerDelegate, _UIRemoteViewControllerContaining>

 {
    DDParsecRemoteCollectionViewController *_remoteViewController;
    BOOL _previewMode;
    BOOL _sheetMode;
    BOOL _popoverMode;
    BOOL _needsBackground;
    BOOL _dismissed;
    NSString *_queryString;
    _NSRange _queryRange;
    DDScannerResult *_result;
    NSDictionary *_context;
    RVQuery *_query;
    BOOL _showingError;
    BOOL _showingFTE;
    UITapGestureRecognizer *_tapGesture;
    NSInteger _previousStatusBarStyle;
    DDDelegateMultiplexer *_presentationDelegateProxy;
    BOOL _requestingPopoverPresentationController;
    DDDelegateMultiplexer *_presentationDelegateMultiplexer;
}


@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (copy) NSArray *actions; // ivar: _actions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *dismissCompletionHandler; // ivar: _dismissCompletionHandler
@property (readonly) NSUInteger hash;
@property (weak) NSObject<DDParsecCollectionDelegate> *parsecDelegate; // ivar: _parsecDelegate
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(?)initWithResultcontext;
-(BOOL)_allowsStylingSheetsAsCards;
-(BOOL)_canShowWhileLocked;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)modalPresentationStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithQuery:(id)arg0 ;
-(id)initWithString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg0 ;
-(id)popoverPresentationController;
-(id)presentationController;
-(struct CGSize )preferredContentSize;
-(void)_interactionEnded;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg0 ;
-(void)appDidEnterBackground;
-(void)appWillEnterForeground;
-(void)doneButtonPressed:(id)arg0 ;
-(void)doneButtonPressed:(id)arg0 punchout:(BOOL)arg1 ;
-(void)fetchRemoteViewControllerWithValidInput:(BOOL)arg0 ;
-(void)getStatusBarHidden:(id)arg0 ;
-(void)interactionEndedWithPunchout:(BOOL)arg0 ;
-(void)openParsecURL:(id)arg0 ;
-(void)openTrailerPunchout:(id)arg0 ;
-(void)performClientQueryWithServerAccessPermitted:(BOOL)arg0 localSearchPermitted:(BOOL)arg1 ;
-(void)presentRemoteCollection:(id)arg0 ;
-(void)presentationController:(id)arg0 willPresentWithAdaptiveStyle:(NSInteger)arg1 transitionCoordinator:(id)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)remoteVCIsReady;
-(void)replaceControllerWithController:(id)arg0 ;
-(void)setPreviewMode:(BOOL)arg0 ;
-(void)setSheetMode:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)showError:(id)arg0 ;
-(void)showSpinner;
-(void)showingErrorView:(BOOL)arg0 ;
-(void)showingFTE:(BOOL)arg0 ;
-(void)updateDelegateOfPresentationController:(id)arg0 ;
-(void)updateVisualMode;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif