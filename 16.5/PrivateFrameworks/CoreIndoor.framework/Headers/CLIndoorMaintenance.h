// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLINDOORMAINTENANCE_H
#define CLINDOORMAINTENANCE_H

@class NSString;
@protocol CLIndoorXPCProviderImplementation;


#import "CLIndoorXPCProvider.h"

@interface CLIndoorMaintenance : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)withinQueueCanReinitializeRemoteState;
-(id)endpointName;
-(id)remoteObjectProtocol;
-(id)withinQueuePermanentShutdownReason;
// -(void)doSynchronousXPC:(id)arg0 description:(unk)arg1 waitForever:(char *)arg2  ;
-(void)eraseEverything;
-(void)numFloors:(id)arg0 ;
-(void)onQueueEraseEverything:(id)arg0 ;
-(void)onQueueNumFloors:(id)arg0 ;
// -(void)onQueuePrefetch:(id)arg0 callback:(id)arg1 when:(unk)arg2  ;
-(void)onQueueShutdown;
-(void)prefetch:(id)arg0 ;
-(void)prefetchSynchronous:(id)arg0 ;
-(void)retrieveLocationRelevancyDurationWithCompletionHandler:(id)arg0 ;
-(void)shutdown;
-(void)withinQueueInvalidateState;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg0 ;
-(void)withinQueueReinitializeRemoteState;


@end


#endif