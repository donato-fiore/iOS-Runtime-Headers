// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSERVICEFRIENDREQUESTVIEWCONTROLLER_H
#define GKSERVICEFRIENDREQUESTVIEWCONTROLLER_H

@class NSString, MFMessageComposeViewController, NSArray;
@protocol MFMessageComposeViewControllerInternalDelegate;


#import "GKServiceViewController.h"

@interface GKServiceFriendRequestViewController : GKServiceViewController <MFMessageComposeViewControllerInternalDelegate>



@property (retain, nonatomic) NSString *chatGUID; // ivar: _chatGUID
@property (retain, nonatomic) MFMessageComposeViewController *composeController; // ivar: _composeController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *friendCode; // ivar: _friendCode
@property (retain, nonatomic) NSString *friendSupportPageURL; // ivar: _friendSupportPageURL
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL messageComposeSent; // ivar: _messageComposeSent
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly) Class superclass;


-(BOOL)_useBackdropViewForWindowBackground;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg0 ;
-(id)init;
-(void)constructPrivateViewController;
-(void)displayAlertWithTitle:(id)arg0 andMessage:(id)arg1 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)messageComposeViewController:(id)arg0 shouldSendMessage:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)setInitialState:(id)arg0 withReply:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif