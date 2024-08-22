// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLREMOTEPREVIEWCOLLECTION_H
#define QLREMOTEPREVIEWCOLLECTION_H

@class UIRemoteViewController, UIView;
@protocol QLPreviewCollectionProtocol, QLPreviewControllerStateProtocolHostOnly;


#import "QLRemotePreviewCollection.h"
#import "QLPreviewCollectionHostContext.h"

@interface QLRemotePreviewCollection : UIRemoteViewController <QLPreviewCollectionProtocol>

 {
    id<QLPreviewControllerStateProtocolHostOnly> *_stateManager;
    CGFloat _edgeNavigationGestureWidth;
    UIView *_touchGrabbingView;
}


@property (retain) QLRemotePreviewCollection *accessoryViewController; // ivar: _accessoryViewController
@property (nonatomic) BOOL allowInteractiveTransitions; // ivar: _allowInteractiveTransitions
@property (retain) QLPreviewCollectionHostContext *hostContext; // ivar: _hostContext
@property BOOL isAvailable; // ivar: _isAvailable
@property (retain) id *request; // ivar: _request


-(BOOL)_addGrabbingViewIfNecessaryWithWidth:(CGFloat)arg0 ;
-(BOOL)_isNavigationControllerGrabbingViewForInteractivePopNeeded;
-(BOOL)isRemote;
-(id)accessoryView;
-(id)navigationScreenEdgePanGestureRecognizer;
-(void)_presentViewControllerForError:(id)arg0 ;
-(void)_resetRemoteConfiguration;
-(void)_updateTouchGrabbingView;
-(void)actionSheetDidDismiss;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg0 ;
-(void)configureWithNumberOfItems:(NSInteger)arg0 currentPreviewItemIndex:(NSUInteger)arg1 itemProvider:(id)arg2 stateManager:(id)arg3 ;
-(void)getCurrentPreviewActivityUserInfoWithCompletionHandler:(id)arg0 ;
-(void)getPreviewCollectionUUIDWithCompletionHandler:(id)arg0 ;
-(void)hostApplicationDidBecomeActive;
-(void)hostApplicationDidEnterBackground:(BOOL)arg0 ;
-(void)hostViewControlerTransitionToState:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)invalidateService;
-(void)keyCommandWasPerformed:(id)arg0 ;
-(void)keyCommandsWithCompletionHandler:(id)arg0 ;
-(void)notifyFirstTimeAppearanceWithActions:(NSUInteger)arg0 ;
-(void)notifyStateRestorationUserInfo:(id)arg0 ;
-(void)overrideParentApplicationDisplayIdentifierWithIdentifier:(id)arg0 ;
-(void)prepareForActionSheetPresentationWithCompletionHandler:(id)arg0 ;
-(void)preparePreviewCollectionForInvalidationWithCompletionHandler:(id)arg0 ;
-(void)saveCurrentPreviewEditsSynchronously:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)setCurrentPreviewItemIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setIsContentManaged:(BOOL)arg0 ;
-(void)setLoadingString:(id)arg0 ;
-(void)setScreenEdgePanWidth:(CGFloat)arg0 ;
-(void)shouldDisplayLockActivityWithCompletionHandler:(id)arg0 ;
-(void)startTransitionWithSourceViewProvider:(id)arg0 transitionController:(id)arg1 presenting:(BOOL)arg2 useInteractiveTransition:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)tearDownTransition:(BOOL)arg0 ;
-(void)toolbarButtonPressedWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)toolbarButtonsForTraitCollection:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif