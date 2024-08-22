// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCNOTIFICATIONCONTENTCONTAINERVIEWCONTROLLER_H
#define NCNOTIFICATIONCONTENTCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSString, _UNNotificationContentExtensionHostContainerViewController, NCNotificationRequest, NSMutableArray;
@protocol _UNNotificationContentExtensionHostContainerViewControllerDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent, NCNotificationCustomContentDelegate;


#import "NCNotificationTextInputView.h"

@interface NCNotificationContentContainerViewController : UIViewController <_UNNotificationContentExtensionHostContainerViewControllerDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent>



@property (readonly, nonatomic) NSString *contentExtensionIdentifier;
@property (nonatomic) NSUInteger customContentLocation; // ivar: _customContentLocation
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationCustomContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UNNotificationContentExtensionHostContainerViewController *extensionContainerViewController; // ivar: _extensionContainerViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NCNotificationTextInputView *inputAccessoryView; // ivar: _inputAccessoryView
@property (readonly, nonatomic) NCNotificationRequest *notificationRequest; // ivar: _notificationRequest
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *updatedActions; // ivar: _updatedActions


+(id)_defaultUIExtensionForNotificationRequest:(id)arg0 visibleAttachment:(*id)arg1 ;
+(id)_visibleAttachmentForNotificationRequest:(id)arg0 ;
+(id)extensionForNotificationRequest:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)allowManualDismiss;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)defaultContentHidden;
-(BOOL)didReceiveNotificationRequest:(id)arg0 ;
-(BOOL)overridesDefaultTitle;
-(BOOL)performAction:(id)arg0 forNotification:(id)arg1 ;
-(BOOL)performAction:(id)arg0 forNotification:(id)arg1 withUserInfo:(id)arg2 ;
-(BOOL)restoreInputViews;
-(BOOL)userInteractionEnabled;
-(id)_responseForAction:(id)arg0 notification:(id)arg1 userInfo:(id)arg2 ;
-(id)_textInputActionInNotification:(id)arg0 ;
-(id)cancelTouches;
-(id)initWithNotificationRequest:(id)arg0 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_forwardActionToExtension:(id)arg0 forNotification:(id)arg1 withUserInfo:(id)arg2 ;
-(void)_loadExtensionContainerViewControllerForNotificationRequest:(id)arg0 ;
-(void)_removeInputAccessoryView:(id)arg0 ;
-(void)_setupExtensionContainerViewControllerController:(id)arg0 ;
-(void)_setupQuickReplyForNotificationAction:(id)arg0 ;
-(void)_setupQuickReplyForNotificationRequest:(id)arg0 ;
-(void)extensionViewControllerDidLoadExtension:(id)arg0 ;
-(void)extensionViewControllerDidUpdateActions:(id)arg0 ;
-(void)extensionViewControllerDidUpdateTitle:(id)arg0 ;
-(void)extensionViewControllerRequestsDefaultAction:(id)arg0 ;
-(void)extensionViewControllerRequestsDismiss:(id)arg0 ;
-(void)notificationTextInputView:(id)arg0 didConfirmText:(id)arg1 forAction:(id)arg2 ;
-(void)playMedia;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)preserveInputViews;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif