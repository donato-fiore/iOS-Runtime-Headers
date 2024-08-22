// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2MOBIKE_H
#define NEIKEV2MOBIKE_H

@class NSString, NWInterface;
@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NEIKEv2PacketTunnelProvider.h"

@interface NEIKEv2MOBIKE : NSObject <NSObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL mobikeEarlyDisconnect; // ivar: _mobikeEarlyDisconnect
@property BOOL mobikeInProgress; // ivar: _mobikeInProgress
@property (retain) NWInterface *mobikeInterface; // ivar: _mobikeInterface
@property NSInteger mobikePathStatus; // ivar: _mobikePathStatus
@property BOOL mobikePending; // ivar: _mobikePending
@property (retain) NSObject<OS_dispatch_queue> *mobikeQueue; // ivar: _mobikeQueue
@property BOOL mobikeReasserting; // ivar: _mobikeReasserting
@property (retain) NSString *mobikeServer; // ivar: _mobikeServer
@property (retain) NWInterface *mobikeTransportInterface; // ivar: _mobikeTransportInterface
@property NSUInteger mobikeTries; // ivar: _mobikeTries
@property (retain) NSObject<OS_dispatch_source> *mobikeWaitTimer; // ivar: _mobikeWaitTimer
@property (readonly) Class superclass;
@property (weak) NEIKEv2PacketTunnelProvider *tunnelProvider; // ivar: _tunnelProvider


-(BOOL)mobikeReadyCheck:(NSUInteger)arg0 pathStatus:(NSInteger)arg1 mobikeServer:(id)arg2 ;
-(BOOL)startMOBIKE:(id)arg0 ;
-(id)initWithQueue:(id)arg0 tunnelProvider:(id)arg1 ;
-(void)dealloc;
-(void)initiateMOBIKE:(NSUInteger)arg0 pathStatus:(NSInteger)arg1 serverAddress:(id)arg2 earlyDisconnect:(BOOL)arg3 ;
-(void)mobikeDisconnect;
-(void)mobikeReassert;
-(void)mobikeStartWaitTimer;
-(void)mobikeStopWaitTimer;


@end


#endif