// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTOURNAMENTVIEWCONTROLLER_H
#define GKTOURNAMENTVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSString, GKScore, GKTournament, GKTournamentDefinition;
@protocol GKTournamentHostInterface, GKTournamentViewControllerDelegate;


#import "GKExtensionManager.h"
#import "GKTournamentViewRequest.h"

@interface GKTournamentViewController : UIViewController <GKTournamentHostInterface>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKTournamentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKExtensionManager *extensionManager; // ivar: _extensionManager
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL playerResigned; // ivar: _playerResigned
@property (retain, nonatomic) GKScore *playerScore; // ivar: _playerScore
@property (readonly) Class superclass;
@property (readonly, nonatomic) GKTournament *tournament; // ivar: _tournament
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition; // ivar: _tournamentDefinition
@property (retain, nonatomic) NSString *tournamentID; // ivar: _tournamentID
@property (retain, nonatomic) GKTournamentViewRequest *viewRequest; // ivar: _viewRequest


-(id)initWithViewRequest:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)extensionDidTerminateWithError:(id)arg0 ;
-(void)extensionWillFinish;
-(void)loadRemoteView;
-(void)playTournament:(id)arg0 withTryToken:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willFinishWithError:(id)arg0 ;


@end


#endif