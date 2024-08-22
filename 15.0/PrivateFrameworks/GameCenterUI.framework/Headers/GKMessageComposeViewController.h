// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMESSAGECOMPOSEVIEWCONTROLLER_H
#define GKMESSAGECOMPOSEVIEWCONTROLLER_H

@class UIViewController, MFMessageComposeViewController, NSMutableArray, NSArray, NSString, NSDictionary, NSURL, GKTournament;
@protocol MFMessageComposeViewControllerInternalDelegate, GKMessageComposeViewControllerDelegate, GKDashboardNearbyBrowserDelegate;



@interface GKMessageComposeViewController : UIViewController <MFMessageComposeViewControllerInternalDelegate>



@property (retain, nonatomic) MFMessageComposeViewController *composeController; // ivar: _composeController
@property (retain, nonatomic) NSMutableArray *contactsToInvite; // ivar: _contactsToInvite
@property (retain, nonatomic) NSArray *currentlySelectedPlayersForPicker; // ivar: _currentlySelectedPlayersForPicker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKMessageComposeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *friendsToInvite; // ivar: _friendsToInvite
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maximumSelectablePlayersForPicker; // ivar: _maximumSelectablePlayersForPicker
@property (retain, nonatomic) NSString *messageToSend; // ivar: _messageToSend
@property (weak, nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (retain, nonatomic) NSDictionary *playerNamesToPlayers; // ivar: _playerNamesToPlayers
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly) Class superclass;
@property (retain, nonatomic) GKTournament *tournament; // ivar: _tournament


+(BOOL)canSendText;
-(id)contactForAddress:(id)arg0 fromContactStore:(id)arg1 ;
-(id)initWithMessage:(id)arg0 maxNumberOfPlayers:(NSInteger)arg1 ;
-(void)addPlayersToMessageCompose:(id)arg0 ;
-(void)messageComposeViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)messageComposeViewController:(id)arg0 shouldSendMessage:(id)arg1 toRecipients:(id)arg2 completion:(id)arg3 ;
-(void)preparePresentationForMinPlayers:(NSInteger)arg0 maxPlayers:(NSInteger)arg1 shareURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)setupPickerBlock;
-(void)showPlayerPickerForCompose;


@end


#endif