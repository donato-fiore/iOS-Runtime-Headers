// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKFRIENDREQUESTCOMPOSEVIEWCONTROLLER_H
#define GKFRIENDREQUESTCOMPOSEVIEWCONTROLLER_H

@class UINavigationController, UIAlertController, NSString;
@protocol GKFriendRequestComposeViewControllerDelegate;



@interface GKFriendRequestComposeViewController : UINavigationController

@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (weak, nonatomic) NSObject<GKFriendRequestComposeViewControllerDelegate> *composeViewDelegate; // ivar: _composeViewDelegate
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSUInteger recipientCount; // ivar: _recipientCount
@property (nonatomic) unsigned int rid; // ivar: _rid


+(BOOL)_preventsAppearanceProxyCustomization;
+(NSUInteger)maxNumberOfRecipients;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(void)_addRecipientInternals:(id)arg0 ;
-(void)_setupChildViewController;
-(void)addRecipientPlayers:(id)arg0 ;
-(void)addRecipientsWithEmailAddresses:(id)arg0 ;
-(void)addRecipientsWithPlayerIDs:(id)arg0 ;
-(void)prepareForNewRecipients:(id)arg0 ;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif