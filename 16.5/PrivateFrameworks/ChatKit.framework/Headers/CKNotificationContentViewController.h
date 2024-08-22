// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNOTIFICATIONCONTENTVIEWCONTROLLER_H
#define CKNOTIFICATIONCONTENTVIEWCONTROLLER_H

@class UIViewController, NSString, IMTimingCollection, UIColor, UNNotification;
@protocol UNNotificationContentExtension;


#import "CKNotificationAudioViewController.h"
#import "CKNotificationChatController.h"

@interface CKNotificationContentViewController : UIViewController <UNNotificationContentExtension>



@property (retain, nonatomic) CKNotificationAudioViewController *audioController; // ivar: _audioController
@property (retain, nonatomic) CKNotificationChatController *chatController; // ivar: _chatController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMTimingCollection *launchTokeyboardBringUpTC; // ivar: _launchTokeyboardBringUpTC
@property (readonly, nonatomic) CGRect mediaPlayPauseButtonFrame;
@property (readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property (readonly, nonatomic) NSUInteger mediaPlayPauseButtonType;
@property (retain, nonatomic) UNNotification *notification; // ivar: _notification
@property (readonly) Class superclass;


+(void)connectIfNeeded;
+(void)initialize;
-(BOOL)_canShowWhileLocked;
-(BOOL)canBecomeFirstResponder;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_displayNameUpdatedNotification:(id)arg0 ;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)chatController:(id)arg0 didReportSpamForConversation:(id)arg1 ;
-(void)chatController:(id)arg0 didSendCompositionInConversation:(id)arg1 ;
-(void)chatController:(id)arg0 willSendComposition:(id)arg1 inConversation:(id)arg2 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didReceiveNotification:(id)arg0 ;
-(void)grabFocus;
-(void)mediaPause;
-(void)mediaPlay;
-(void)notificationChatControllerRequestDismissNotificationContentExtension:(id)arg0 ;
-(void)notificationChatControllerSizeUpdated:(id)arg0 ;
-(void)setupAudioAccessoryViewForNotification:(id)arg0 ;
-(void)setupChatControllerForConversation:(id)arg0 ;
-(void)transcriptBackgroundTapped:(id)arg0 ;
-(void)updateContentExtensionSize;
-(void)updateNotificationTitleFromConversation:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif