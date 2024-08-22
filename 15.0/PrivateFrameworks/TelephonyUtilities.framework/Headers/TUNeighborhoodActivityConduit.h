// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUNEIGHBORHOODACTIVITYCONDUIT_H
#define TUNEIGHBORHOODACTIVITYCONDUIT_H

@class NSString, NSMapTable, NSSet, NSDictionary, NSMutableSet;
@protocol TUNeighborhoodActivityConduitXPCClientDelegate, TUNeighborhoodActivityConduitApprovalDelegate;

#import <Foundation/Foundation.h>

#import "TUNearbyDeviceHandle.h"
#import "TUConversationManager.h"
#import "TUNeighborhoodActivityConduitXPCClient.h"

@interface TUNeighborhoodActivityConduit : NSObject <TUNeighborhoodActivityConduitXPCClientDelegate>



@property (retain, nonatomic) TUNearbyDeviceHandle *activeSplitSessionTV; // ivar: _activeSplitSessionTV
@property (weak, nonatomic) NSObject<TUNeighborhoodActivityConduitApprovalDelegate> *approvalDelegate; // ivar: _approvalDelegate
@property (readonly, nonatomic) TUConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *nearbyTVDeviceHandles;
@property (readonly, nonatomic) NSDictionary *nearbyTVDevices;
@property (readonly, nonatomic) NSMutableSet *nearbyTVs; // ivar: _nearbyTVs
@property (nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;
@property (readonly, nonatomic) TUNeighborhoodActivityConduitXPCClient *xpcClient; // ivar: _xpcClient


-(id)_osStateDictionary;
-(id)initWithConversationManager:(id)arg0 ;
-(void)_forEachDelegate:(id)arg0 ;
-(void)_grouped:(id)arg0 forEachDelegate:(id)arg1 ;
-(void)_requestInitialState;
-(void)addDelegate:(id)arg0 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)approveSplitSessionForConversation:(id)arg0 device:(id)arg1 proposedActivity:(id)arg2 completion:(id)arg3 ;
-(void)cancelSplitSessionApproval;
-(void)connectionEstablishedForClient:(id)arg0 ;
-(void)dealloc;
-(void)deviceTokenForTVDevice:(id)arg0 completion:(id)arg1 ;
-(void)disconnectTVDevice:(id)arg0 completion:(id)arg1 ;
-(void)inviteTVDevice:(id)arg0 toConversation:(id)arg1 completion:(id)arg2 ;
-(void)removeDelegate:(id)arg0 ;
-(void)splitSessionEnded:(id)arg0 ;
-(void)splitSessionStarted:(id)arg0 ;
-(void)tvDeviceAppeared:(id)arg0 ;
-(void)tvDeviceDisappeared:(id)arg0 ;


@end


#endif