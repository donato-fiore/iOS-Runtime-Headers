// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCEXPANDEDPLATTERVIEWCONTROLLER_H
#define NCEXPANDEDPLATTERVIEWCONTROLLER_H

@class UIViewController, NSHashTable, NSString, UIViewController<NCNotificationCustomContent>, NCNotificationRequest;
@protocol PLExpandedPlatterDismissing, NCExpandedPlatterViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentable, NCExpandedPlatterObservable, NCExpandedPlatterObserving, NCNotificationStaticContentProviding, NCExpandedPlatterViewControllerDelegate;



@interface NCExpandedPlatterViewController : UIViewController <PLExpandedPlatterDismissing, NCExpandedPlatterViewDelegate, NCNotificationCustomContentDelegate, PLExpandedPlatterPresentable, NCExpandedPlatterObservable, NCExpandedPlatterObserving>

 {
    id<NCNotificationStaticContentProviding> *_staticContentProvider;
    NSHashTable *_observers;
    NSString *_dismissalReason;
    int _expandedPlatterPresentationState;
}


@property (readonly, nonatomic) UIViewController<NCNotificationCustomContent> *customContentViewController; // ivar: _customContentViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCExpandedPlatterViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PLExpandedPlatterDismissing> *dismisser; // ivar: _dismisser
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (copy, nonatomic, getter=_pendingPresentationTransitionDidEndBlock, setter=_setPendingPresentationTransitionDidEndBlock:) id *pendingPresentationTransitionDidEndBlock; // ivar: _pendingPresentationTransitionDidEndBlock
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)_canTransitionToPlatterPresentationState:(int)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)expandedPlatterView:(id)arg0 tapGestureRecognizerShouldReceiveTouch:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(id)_expandedPlatterView;
-(id)_expandedPlatterViewIfLoaded;
-(id)_expandedPlatterViewLoadingIfNecessary:(BOOL)arg0 ;
-(id)initWithNotificationRequest:(id)arg0 customContentViewController:(id)arg1 ;
-(struct CGSize )_maximumPlatterSize;
-(struct CGSize )_preferredCustomContentSize;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_handleDefaultTap:(id)arg0 ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_setPreferredCustomContentSize:(struct CGSize )arg0 ;
-(void)_setupStaticContentProviderIfNecessary;
-(void)_updatePreferredContentSize;
-(void)_updatePreferredCustomContentSize;
-(void)_updateWithProvidedCustomContent;
-(void)_updateWithProvidedStaticContent;
-(void)addExpandedPlatterObserver:(id)arg0 ;
-(void)customContent:(id)arg0 didUpdateUserNotificationActions:(id)arg1 ;
-(void)customContent:(id)arg0 forwardAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 ;
-(void)customContent:(id)arg0 requestPermissionToExecuteAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)customContentDidLoadExtension:(id)arg0 ;
-(void)customContentDidUpdateTitle:(id)arg0 ;
-(void)customContentRequestsDefaultAction:(id)arg0 ;
-(void)customContentRequestsDismiss:(id)arg0 ;
-(void)expandedPlatter:(id)arg0 didDismissWithReason:(id)arg1 ;
-(void)expandedPlatter:(id)arg0 willDismissWithReason:(id)arg1 ;
-(void)expandedPlatterDidPresent:(id)arg0 ;
-(void)expandedPlatterPresentable:(id)arg0 requestsDismissalWithTrigger:(NSInteger)arg1 ;
-(void)expandedPlatterView:(id)arg0 requestsInteractionWithURL:(id)arg1 ;
-(void)expandedPlatterWillPresent:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)playMedia;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)removeExpandedPlatterObserver:(id)arg0 ;
-(void)userInteractionDidEndForExpandedPlatter:(id)arg0 ;
-(void)userInteractionWillBeginForExpandedPlatter:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif