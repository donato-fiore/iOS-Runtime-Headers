// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMULTIPLAYERCUSTOMINVITEMESSAGEVIEWCONTROLLER_H
#define GKMULTIPLAYERCUSTOMINVITEMESSAGEVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIButton, NSString, UITextView;
@protocol GKMultiplayerCustomInviteMessageViewControllerDelegate;



@interface GKMultiplayerCustomInviteMessageViewController : UIViewController

@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView; // ivar: _backgroundEffectView
@property (weak, nonatomic) NSObject<GKMultiplayerCustomInviteMessageViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *doneButton; // ivar: _doneButton
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) UITextView *messageTextField; // ivar: _messageTextField


-(void)donePressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif