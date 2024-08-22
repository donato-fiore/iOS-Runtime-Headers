// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONHOSTCONTAINERVIEWCONTROLLER_H
#define _UNNOTIFICATIONCONTENTEXTENSIONHOSTCONTAINERVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSString, NSExtension, _UIRemoteViewController, NSMutableArray;
@protocol _UNNotificationContentExtensionHostContextDelegate, _UNNotificationContentExtensionHostContainerViewControllerDelegate;


#import "_UNNotificationContentExtensionHostContext.h"
#import "_UNMediaPlayPauseButton.h"

@interface _UNNotificationContentExtensionHostContainerViewController : UIViewController <_UNNotificationContentExtensionHostContextDelegate>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (nonatomic) BOOL allowManualDismiss; // ivar: _allowManualDismiss
@property (retain, nonatomic) UIView *blockingView; // ivar: _blockingView
@property (nonatomic) CGFloat contentSizeRatio; // ivar: _contentSizeRatio
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDefaultContentHidden) BOOL defaultContentHidden; // ivar: _defaultContentHidden
@property (nonatomic, getter=isDefaultTitleOverridden) BOOL defaultTitleOverridden; // ivar: _defaultTitleOverridden
@property (weak, nonatomic) NSObject<_UNNotificationContentExtensionHostContainerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic) _UNNotificationContentExtensionHostContext *extensionHostContext; // ivar: _extensionHostContext
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (retain, nonatomic) _UIRemoteViewController *extensionViewController; // ivar: _extensionViewController
@property (readonly, nonatomic) BOOL extensionWantsToReceiveActionResponses;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UNMediaPlayPauseButton *mediaPlayPauseButton; // ivar: _mediaPlayPauseButton
@property (copy, nonatomic) NSString *notificationRequestIdentifier; // ivar: _notificationRequestIdentifier
@property (retain, nonatomic) NSMutableArray *queuedNotifications; // ivar: _queuedNotifications
@property (nonatomic) BOOL shouldPlayMediaAfterPresented; // ivar: _shouldPlayMediaAfterPresented
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled


+(BOOL)isMediaSafetyNetEnabled;
-(BOOL)_canShowWhileLocked;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)restoreInputViews;
-(CGFloat)_contentHeightForWidth:(CGFloat)arg0 ;
-(id)cancelTouchesForCurrentEventInExtension;
-(id)initWithExtension:(id)arg0 notification:(id)arg1 actions:(id)arg2 ;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_addExtensionViewFromViewController:(id)arg0 ;
-(void)_flushQueuedRequests;
-(void)_loadExtensionViewController;
-(void)_mediaPlayPauseButtonTapped:(id)arg0 ;
-(void)_pauseMediaIfPresented;
-(void)_playMediaIfPresented;
-(void)_setupExtensionViewController:(id)arg0 ;
-(void)_setupMediaButton;
-(void)_teardownExtension;
-(void)dealloc;
-(void)didReceiveNotification:(id)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)notificationExtension:(id)arg0 didUpdateNotificationActions:(id)arg1 ;
-(void)notificationExtension:(id)arg0 didUpdateTitle:(id)arg1 ;
-(void)notificationExtension:(id)arg0 extensionDidCompleteResponse:(id)arg1 withOption:(NSUInteger)arg2 ;
-(void)notificationExtensionDidUpdatePlayPauseMediaButton:(id)arg0 ;
-(void)notificationExtensionMediaPlayingDidPause:(id)arg0 ;
-(void)notificationExtensionMediaPlayingDidStart:(id)arg0 ;
-(void)notificationExtensionRequestsDefaultAction:(id)arg0 ;
-(void)notificationExtensionRequestsDismiss:(id)arg0 ;
-(void)pauseMedia;
-(void)playMedia;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)preserveInputViews;
-(void)setTitle:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif