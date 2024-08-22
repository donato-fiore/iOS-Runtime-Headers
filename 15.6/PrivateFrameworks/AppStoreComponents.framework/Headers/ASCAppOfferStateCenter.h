// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCAPPOFFERSTATECENTER_H
#define ASCAPPOFFERSTATECENTER_H

@class NSString, AMSPromise, NSMapTable;
@protocol ASCAppOfferStateDelegate, ASCServices;

#import <Foundation/Foundation.h>

#import "ASCPendingPromises.h"
#import "ASCJitterBackoff.h"
#import "ASCWorkspace.h"

@interface ASCAppOfferStateCenter : NSObject <ASCAppOfferStateDelegate>



@property (readonly, nonatomic) NSObject<ASCServices> *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ASCPendingPromises *pendingActionPromises; // ivar: _pendingActionPromises
@property (readonly, nonatomic) ASCJitterBackoff *reconnectBackoff; // ivar: _reconnectBackoff
@property (retain, nonatomic) AMSPromise *service; // ivar: _service
@property (readonly, nonatomic) NSMapTable *stateMachines; // ivar: _stateMachines
@property (readonly) Class superclass;
@property (readonly, nonatomic) ASCWorkspace *workspace; // ivar: _workspace


+(id)log;
+(id)sharedCenter;
-(id)initWithConnection:(id)arg0 workspace:(id)arg1 ;
-(id)performActionOfOffer:(id)arg0 withActivity:(id)arg1 ;
-(id)performActionOfOffer:(id)arg0 withActivity:(id)arg1 usingService:(id)arg2 ;
-(id)performFallbackActionForOffer:(id)arg0 ;
-(id)reinstallWatchAppWithID:(id)arg0 ;
-(id)reinstallWatchSystemAppWithBundleID:(id)arg0 ;
-(id)stateMachineForOffer:(id)arg0 ;
-(void)connectToService;
-(void)daemonConnectionWasLost:(id)arg0 ;
-(void)daemonDidRebootstrap:(id)arg0 ;
-(void)dealloc;
-(void)offer:(id)arg0 didChangeState:(id)arg1 withMetadata:(id)arg2 flags:(NSInteger)arg3 ;
-(void)offer:(id)arg0 didChangeStatusText:(id)arg1 ;
-(void)scheduleTryReconnect;
-(void)stopObservingStateForOffer:(id)arg0 ;
-(void)tryReconnect;
-(void)useOfferStateMachineFallback;


@end


#endif