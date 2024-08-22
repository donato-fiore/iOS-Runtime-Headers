// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UNNOTIFICATIONCONTENTEXTENSIONHOSTCONTEXT_H
#define _UNNOTIFICATIONCONTENTEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, UIColor;
@protocol _UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface, _UNNotificationContentExtensionHostContextDelegate, OS_dispatch_queue;



@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface>



@property (weak, nonatomic) NSObject<_UNNotificationContentExtensionHostContextDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic, getter=isDelegateQueueSuspended) BOOL delegateQueueSuspended; // ivar: _delegateQueueSuspended
@property (retain, nonatomic) UIColor *playPauseMediaButtonColor; // ivar: _playPauseMediaButtonColor
@property (nonatomic) CGRect playPauseMediaButtonFrame; // ivar: _playPauseMediaButtonFrame
@property (nonatomic) NSUInteger playPauseMediaButtonType; // ivar: _playPauseMediaButtonType
@property (nonatomic) BOOL wantsToBecomeFirstResponder; // ivar: _wantsToBecomeFirstResponder
@property (nonatomic) BOOL wantsToReceiveActionResponses; // ivar: _wantsToReceiveActionResponses


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
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
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg0 ;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg0 ;
-(void)_hostDidReceiveNotification:(id)arg0 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg0 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)_hostWantsMediaToPause;
-(void)_hostWantsMediaToPlay;
-(void)_hostWantsToPreserveInputViews;
-(void)_hostWantsToRestoreInputViews;
-(void)_hostWantsToUpdateMediaPlayPauseButton;
-(void)_resumeDelegateQueueIfNecessary;
-(void)dealloc;
-(void)didReceiveNotification:(id)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 ;
-(void)didReceiveNotificationResponse:(id)arg0 completionHandler:(id)arg1 ;
-(void)mediaPause;
-(void)mediaPlay;
-(void)preserveInputViews;
-(void)restoreInputViews;
-(void)updateMediaPlayPauseButton;


@end


#endif