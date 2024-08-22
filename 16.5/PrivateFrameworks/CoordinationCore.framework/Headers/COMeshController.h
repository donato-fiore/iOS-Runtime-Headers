// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESHCONTROLLER_H
#define COMESHCONTROLLER_H

@class NSOrderedSet, NSDictionary, NSString, NSArray;
@protocol COMeshNodeStateTrackerDelegate, CODiscoveryManagerDelegate, COMeshNodeDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "COBallot.h"
#import "CODiscoveryManager.h"
#import "COConstituent.h"
#import "COMeshLocalNode.h"
#import "COMeshNodeStateTrackerSet.h"

@interface COMeshController : NSObject <COMeshNodeStateTrackerDelegate, CODiscoveryManagerDelegate, COMeshNodeDelegate>



@property (copy, nonatomic) NSOrderedSet *addOns; // ivar: _addOns
@property (copy, nonatomic) COBallot *ballot; // ivar: _ballot
@property (copy, nonatomic) NSDictionary *commandHandlers; // ivar: _commandHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CODiscoveryManager *discoveryManager; // ivar: _discoveryManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *electionElapsedTimer; // ivar: _electionElapsedTimer
@property (nonatomic) NSUInteger electionEnd; // ivar: _electionEnd
@property (nonatomic) NSUInteger electionPrevious; // ivar: _electionPrevious
@property (nonatomic) NSUInteger electionStart; // ivar: _electionStart
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger internalFlags; // ivar: _internalFlags
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) COConstituent *leader; // ivar: _leader
@property (retain, nonatomic) COMeshLocalNode *listener; // ivar: _listener
@property (nonatomic) NSUInteger longestBackOff; // ivar: _longestBackOff
@property (retain, nonatomic) COConstituent *longestBackedOffConstituent; // ivar: _longestBackedOffConstituent
@property (readonly, nonatomic) COConstituent *me; // ivar: _me
@property (copy, nonatomic) NSString *meshName; // ivar: _meshName
@property (readonly, copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSDictionary *notificationHandlers; // ivar: _notificationHandlers
@property (nonatomic, getter=hasPendingPing) BOOL pendingPing; // ivar: _pendingPing
@property (nonatomic) CGFloat pingMaximum; // ivar: _pingMaximum
@property (nonatomic) CGFloat pingMinimum; // ivar: _pingMinimum
@property (copy, nonatomic) NSArray *queuedCommands; // ivar: _queuedCommands
@property (copy, nonatomic) id *recorder; // ivar: _recorder
@property (copy, nonatomic) NSDictionary *requestHandlers; // ivar: _requestHandlers
@property (copy, nonatomic) NSArray *sentCommands; // ivar: _sentCommands
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) COMeshNodeStateTrackerSet *trackers; // ivar: _trackers


-(BOOL)_isCurrentElectionVariant:(NSInteger)arg0 ;
-(BOOL)_isElectionComplete;
-(BOOL)addAddOn:(id)arg0 ;
-(BOOL)removeAddOn:(id)arg0 ;
-(id)_acceptResponseWithBallot:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)_ballotResponseWithBallot:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)_constituentCharacteristics:(id)arg0 ;
-(id)_currentBallotMergedWithBallot:(id)arg0 ;
-(id)_electionRequestWithBallot:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)_handleDiscoveryUsingElectionRequest:(id)arg0 ;
-(id)_inflateQueueCommands;
-(id)_newCompanionLinkClient;
-(id)_nodeDetails:(id)arg0 ;
-(id)_voteRequestWithBallot:(id)arg0 generation:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithConstituentType:(NSUInteger)arg0 ;
-(id)nodeForConstituent:(id)arg0 ;
-(void)_enqueueCommand:(id)arg0 ;
-(void)_finalizeCompletionOfNode:(id)arg0 memberOfMesh:(BOOL)arg1 eventProvider:(id)arg2 ;
-(void)_handleAcceptResponse:(id)arg0 onNode:(id)arg1 ;
-(void)_handleBallotResponse:(id)arg0 onNode:(id)arg1 ;
-(void)_handleDiscoveryUsingBallot:(id)arg0 ;
-(void)_handleElectionRequest:(id)arg0 onNode:(id)arg1 responseCallBack:(id)arg2 ;
-(void)_handleVoteRequest:(id)arg0 onNode:(id)arg1 responseCallBack:(id)arg2 ;
-(void)_logElectionSummary;
-(void)_performElectionGeneration:(NSUInteger)arg0 source:(id)arg1 allowingPostTransition:(BOOL)arg2 ;
-(void)_performInvalidationOfNode:(id)arg0 error:(id)arg1 eventProvider:(id)arg2 ;
-(void)_performStopOfNode:(id)arg0 error:(id)arg1 eventProvider:(id)arg2 ;
-(void)_pingLeader;
-(void)_processBackedOffNodesExcludingTracker:(id)arg0 ;
-(void)_processQueuedCommands;
-(void)_removeSentCommand:(id)arg0 fromNode:(id)arg1 withResponse:(id)arg2 error:(id)arg3 ;
-(void)_transitionToPostElection;
-(void)backedOffNodeMovedOutOfElection:(id)arg0 ;
// -(void)broadcastRequest:(id)arg0 includingSelf:(BOOL)arg1 recipientsCallback:(id)arg2 completionHandler:(unk)arg3  ;
-(void)degisterHandlerForRequestClass:(Class)arg0 ;
-(void)deregisterHandlerForCommandClass:(Class)arg0 ;
-(void)deregisterHandlerForNotificationClass:(Class)arg0 ;
-(void)deregisterHandlerForRequestClass:(Class)arg0 ;
-(void)didActivateNode:(id)arg0 ;
-(void)didAddNode:(id)arg0 ;
-(void)didInvalidateNode:(id)arg0 ;
-(void)didRemoveNode:(id)arg0 ;
-(void)didTransitionToState:(NSUInteger)arg0 ;
-(void)discoveryManager:(id)arg0 didDiscoverRecords:(id)arg1 ;
-(void)node:(id)arg0 didReceiveCommand:(id)arg1 ;
-(void)node:(id)arg0 didReceiveError:(id)arg1 forCommand:(id)arg2 ;
-(void)node:(id)arg0 didReceiveRequest:(id)arg1 responseCallBack:(id)arg2 ;
-(void)node:(id)arg0 didReceiveResponse:(id)arg1 toRequest:(id)arg2 ;
-(void)node:(id)arg0 didSendCommand:(id)arg1 ;
-(void)nodeBecameAvailable:(id)arg0 ;
-(void)nodeShouldRetryAfterBackoff:(id)arg0 ;
// -(void)registerHandler:(id)arg0 forCommandClass:(unk)arg1  ;
// -(void)registerHandler:(id)arg0 forNotificationClass:(unk)arg1  ;
// -(void)registerHandler:(id)arg0 forRequestClass:(unk)arg1  ;
-(void)sendCommand:(id)arg0 sentCommandCallback:(id)arg1 ;
-(void)sendCommand:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)sendNotification:(id)arg0 ;
-(void)sendRequest:(id)arg0 sentRequestCallback:(id)arg1 ;
-(void)sendRequest:(id)arg0 toPeer:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)sendRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)unknownNodeForCommand:(id)arg0 result:(id)arg1 ;
-(void)unknownNodeForRequest:(id)arg0 result:(id)arg1 ;
-(void)willActivateNode:(id)arg0 ;
-(void)willInvalidateNode:(id)arg0 error:(id)arg1 ;
-(void)willTransitionToState:(NSUInteger)arg0 ;


@end


#endif