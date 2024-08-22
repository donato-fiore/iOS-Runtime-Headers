// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFULLSCREENAPPNAVBARMANAGER_H
#define CKFULLSCREENAPPNAVBARMANAGER_H

@class UIButton, NSString, UILabel, NSTimer, NSMutableArray, IMBalloonPlugin;
@protocol CKAvatarNotificationCalloutViewDelegate, CKFullScreenAppNavbarManagerDelegate;

#import <Foundation/Foundation.h>

#import "CKAvatarPickerViewController.h"
#import "CKNavigationBarCanvasView.h"
#import "CKConversation.h"

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate>



@property (retain, nonatomic) UIButton *appIconButton; // ivar: _appIconButton
@property (retain, nonatomic) CKAvatarPickerViewController *avatarPickerViewController; // ivar: _avatarPickerViewController
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView; // ivar: _canvasView
@property (retain, nonatomic) CKConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UILabel *defaultTitleLabel; // ivar: _defaultTitleLabel
@property (weak, nonatomic) NSObject<CKFullScreenAppNavbarManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *notificationTimer; // ivar: _notificationTimer
@property (retain, nonatomic) NSMutableArray *notificationViews; // ivar: _notificationViews
@property (retain, nonatomic) IMBalloonPlugin *plugin; // ivar: _plugin
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(BOOL)__im_ff_uiConsistencyEnabled;
-(BOOL)_canShowAvatarView;
-(BOOL)_didReceiveMessageChatItem:(id)arg0 addedChatItems:(id)arg1 ;
-(BOOL)_shouldStartnotificationQueue;
-(NSInteger)_viewModeForCalloutView;
-(id)initWithConversation:(id)arg0 plugin:(id)arg1 ;
-(void)_addNotificationViewToQueue;
-(void)_configureCanvasView;
-(void)_contactPhotosEnabledChangedNotification:(id)arg0 ;
-(void)_dequeueNotificationViews:(id)arg0 ;
-(void)_handleChatDisplayNameChange:(id)arg0 ;
-(void)_handleChatItemDidChange:(id)arg0 ;
-(void)_invalidateTimer;
-(void)_removeAllNotifications;
-(void)_startNotificationQueue;
-(void)_updateDismissButton;
-(void)_updateTitleLabelText;
-(void)_updateTitleView;
-(void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg0 ;
-(void)avatarNotificationCalloutViewReceivedTouch:(id)arg0 ;
-(void)avatarNotificationCalloutViewWillFadeIn:(id)arg0 ;
-(void)dealloc;
-(void)dismissNotifications;


@end


#endif