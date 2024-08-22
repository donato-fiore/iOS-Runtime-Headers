// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONVENDORCONTEXT_H
#define _UNNOTIFICATIONCONTENTEXTENSIONVENDORCONTEXT_H

@class NSExtensionContext, NSArray;
@protocol _UNNotificationExtensionVendorInterface, _UNNotificationExtensionHostInterface, _UNNotificationContentExtensionVendorContainer, OS_dispatch_queue;



@interface _UNNotificationContentExtensionVendorContext : NSExtensionContext <_UNNotificationExtensionVendorInterface, _UNNotificationExtensionHostInterface>



@property (nonatomic) BOOL didCheckActionResponseDelegate; // ivar: _didCheckActionResponseDelegate
@property (copy, nonatomic) NSArray *notificationActions; // ivar: _notificationActions
@property (weak, nonatomic) NSObject<_UNNotificationContentExtensionVendorContainer> *notificationExtensionContainer; // ivar: _notificationExtensionContainer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic, getter=isQueueInactive) BOOL queueInactive; // ivar: _queueInactive


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_notificationExtension;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)_activateQueueIfNecessary;
-(void)_extensionDidCompleteNotificationResponse:(id)arg0 withOption:(NSUInteger)arg1 ;
-(void)_extensionDidUpdateNotificationActions:(id)arg0 ;
-(void)_extensionDidUpdatePlayPauseMediaButton;
-(void)_extensionDidUpdateTitle:(id)arg0 ;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionRequestsDismiss;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg0 ;
-(void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect )arg0 ;
-(void)_extensionSetPlayPauseMediaButtonType:(NSUInteger)arg0 ;
-(void)_extensionWantsMessagesFromHostDelivered;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg0 ;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg0 ;
-(void)_extensionWantsToUpdateMediaPlayPauseButton;
-(void)_hostDidReceiveNotification:(id)arg0 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg0 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)_hostWantsMediaToPause;
-(void)_hostWantsMediaToPlay;
-(void)_hostWantsToPreserveInputViews;
-(void)_hostWantsToRestoreInputViews;
-(void)_hostWantsToUpdateMediaPlayPauseButton;
-(void)_updateMediaPlayPauseButton;
-(void)dealloc;
-(void)dismissNotificationContentExtension;
-(void)mediaPlayingPaused;
-(void)mediaPlayingStarted;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)performNotificationDefaultAction;
-(void)requestDismiss;


@end


#endif