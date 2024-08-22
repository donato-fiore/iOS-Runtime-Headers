// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKPEERPICKERVIEWCONTROLLER_H
#define GKPEERPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, GKSession, NSTimer, NSMutableArray, UITableView, NSMutableDictionary;


#import "GKContentView.h"

@interface GKPeerPickerViewController : UIViewController {
    NSString *_pendingPeer;
}


@property (nonatomic) BOOL alertCancelled; // ivar: _alertCancelled
@property (nonatomic) BOOL alertPresented; // ivar: _alertPresented
@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (nonatomic) int bluetoothStatus; // ivar: _bluetoothStatus
@property (retain, nonatomic) GKContentView *btView; // ivar: _btView
@property (retain, nonatomic) GKContentView *connectTypeView; // ivar: _connectTypeView
@property NSUInteger connectionTypesMask; // ivar: _connectionTypesMask
@property (nonatomic) NSString *currentConnectionTypeKey; // ivar: _currentConnectionTypeKey
@property (readonly, nonatomic) GKSession *currentSession;
@property (readonly, nonatomic) GKContentView *currentView; // ivar: _currentView
@property (weak) id *delegate; // ivar: _delegate
@property (retain, nonatomic) NSTimer *invitationWaitTimer; // ivar: _invitationWaitTimer
@property (retain, nonatomic) GKContentView *inviteView; // ivar: _inviteView
@property (retain, nonatomic) GKContentView *listView; // ivar: _listView
@property (retain, nonatomic) NSMutableArray *menuQueue; // ivar: _menuQueue
@property (retain, nonatomic) GKContentView *noPeersView; // ivar: _noPeersView
@property (retain, nonatomic) UITableView *peerTableView; // ivar: _peerTableView
@property (retain, nonatomic) NSMutableArray *peers; // ivar: _peers
@property (nonatomic) int pendingState; // ivar: _pendingState
@property (copy, nonatomic) NSString *searchingForServicesString; // ivar: _searchingForServicesString
@property (retain, nonatomic) NSMutableDictionary *sessionMap; // ivar: _sessionMap
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) GKContentView *statusView; // ivar: _statusView
@property (nonatomic) BOOL updating; // ivar: _updating
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


-(BOOL)_shouldShowConnectTypeView;
-(BOOL)_updatePicker:(int)arg0 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createAlertFromGKContentView:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(int)_determineBluetoothStatus;
-(void)_acceptInvitation:(id)arg0 ;
-(void)_btPowerStateChanged:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_changePanelAnimationDidEnd:(id)arg0 ;
-(void)_createBTViewIfNeeded;
-(void)_createConnectTypeViewIfNeeded;
-(void)_createInviteViewIfNeeded;
-(void)_createListViewIfNeeded;
-(void)_createNoPeersViewIfNeeded;
-(void)_createStatusViewIfNeeded;
-(void)_declineInvitation:(id)arg0 ;
-(void)_nearbyButtonPressed:(id)arg0 ;
-(void)_onlineButtonPressed:(id)arg0 ;
-(void)_setSessionAvailabilityForState:(int)arg0 ;
-(void)_setupListView;
-(void)_showBluetoothErrorView:(BOOL)arg0 ;
-(void)_showConnectTypeView:(BOOL)arg0 ;
-(void)_showInviteViewWithName:(id)arg0 animated:(BOOL)arg1 ;
-(void)_showListView:(BOOL)arg0 ;
-(void)_showNoPeersView:(BOOL)arg0 ;
-(void)_showRequestBluetoothView:(BOOL)arg0 ;
-(void)_showStatusView:(int)arg0 peerName:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_sortAndUpdateTable;
-(void)_timedOutWaitingForInvitation:(id)arg0 ;
-(void)_turnBluetoothOn:(id)arg0 ;
-(void)alertView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)contentView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didPresentAlertView:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dismiss;
-(void)loadInitialView;
-(void)loadView;
-(void)session:(id)arg0 connectionWithPeerFailed:(id)arg1 withError:(id)arg2 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didReceiveConnectionRequestFromPeer:(id)arg1 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(int)arg2 ;
-(void)session:(id)arg0 peerDidBecomeBusy:(id)arg1 ;
-(void)show;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif