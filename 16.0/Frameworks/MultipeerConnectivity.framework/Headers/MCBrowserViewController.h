// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCBROWSERVIEWCONTROLLER_H
#define MCBROWSERVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString, NSMutableArray, NSBundle, NSMutableDictionary, UINavigationBar, UITableView;
@protocol MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate, MCBrowserViewControllerDelegate, OS_dispatch_queue;


#import "MCNearbyServiceBrowser.h"
#import "MCPeerID.h"
#import "MCSession.h"

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate>

 {
    id<MCBrowserViewControllerDelegate> *_delegate;
}


@property (retain, nonatomic) MCNearbyServiceBrowser *browser; // ivar: _browser
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger declinedPeersCount; // ivar: _declinedPeersCount
@property (weak, nonatomic) NSObject<MCBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (retain, nonatomic) NSMutableArray *foundPeers; // ivar: _foundPeers
@property (retain, nonatomic) NSBundle *frameworkBundle; // ivar: _frameworkBundle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *invitedPeersSection; // ivar: _invitedPeersSection
@property (retain, nonatomic) NSMutableDictionary *invitedPeersState; // ivar: _invitedPeersState
@property (nonatomic) NSUInteger maximumNumberOfPeers; // ivar: _maximumNumberOfPeers
@property (readonly, nonatomic) BOOL maximumNumberOfPeersReached;
@property (nonatomic) NSUInteger minimumNumberOfPeers; // ivar: _minimumNumberOfPeers
@property (readonly, nonatomic) BOOL minimumNumberOfPeersReached;
@property (copy, nonatomic) MCPeerID *myPeerID; // ivar: _myPeerID
@property (retain, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) NSMutableArray *nearbyPeersSection; // ivar: _nearbyPeersSection
@property (retain, nonatomic) MCSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)isVisible;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)positionForBar:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)detailStringForPeerState:(int)arg0 ;
-(id)init;
-(id)initWithBrowser:(id)arg0 session:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithServiceType:(id)arg0 session:(id)arg1 ;
-(id)nearbySectionTitle;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)applicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)applicationWillEnterForegroundNotification:(id)arg0 ;
-(void)browser:(id)arg0 foundPeer:(id)arg1 withDiscoveryInfo:(id)arg2 ;
-(void)browser:(id)arg0 lostPeer:(id)arg1 ;
-(void)cancelTapped:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)doneTapped:(id)arg0 ;
-(void)handleViewDidDisappear;
-(void)handleViewWillAppear;
-(void)peer:(id)arg0 changedStateTo:(int)arg1 ;
-(void)peerJoinedSession;
-(void)session:(id)arg0 didFinishReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 atURL:(id)arg3 withError:(id)arg4 propagate:(*BOOL)arg5 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 propagate:(*BOOL)arg3 ;
-(void)session:(id)arg0 didReceiveStream:(id)arg1 withName:(id)arg2 fromPeer:(id)arg3 propagate:(*BOOL)arg4 ;
-(void)session:(id)arg0 didStartReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 withProgress:(id)arg3 propagate:(*BOOL)arg4 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(NSInteger)arg2 propagate:(*BOOL)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)verifyPeerIsAccountedFor:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif