// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTOURNAMENTEXTENSIONHOSTVIEWCONTROLLER_H
#define GKTOURNAMENTEXTENSIONHOSTVIEWCONTROLLER_H

@class NSString;
@protocol GKTournamentExtensionInterface, GKTournamentHostInterface;


#import "GKExtensionHostViewController.h"
#import "GKTournamentViewRequest.h"

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController <GKTournamentExtensionInterface, GKTournamentHostInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GKTournamentViewRequest *viewRequest;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)tournamentHostViewController;
-(void)initializeWithLocalPlayer:(id)arg0 hostPID:(int)arg1 reply:(id)arg2 ;
-(void)playTournament:(id)arg0 withTryToken:(id)arg1 ;
-(void)setupWithViewRequest:(id)arg0 ;


@end


#endif