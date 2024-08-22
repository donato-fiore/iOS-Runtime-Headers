// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPOWNERSESSIONLOCATIONFETCH_H
#define SPOWNERSESSIONLOCATIONFETCH_H

@class NSString, FMXPCSession;
@protocol SPLocationFetchClientXPCProtocol, SPOwnerSessionXPCProtocol;

#import <Foundation/Foundation.h>

#import "SPLocationFetchContext.h"

@interface SPOwnerSessionLocationFetch : NSObject <SPLocationFetchClientXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SPLocationFetchContext *lastContext; // ivar: _lastContext
@property (copy, nonatomic) id *locationFetchSessionInvalidationBlock; // ivar: _locationFetchSessionInvalidationBlock
@property (copy, nonatomic) id *locationUpdates; // ivar: _locationUpdates
@property (retain, nonatomic) NSObject<SPOwnerSessionXPCProtocol> *proxy; // ivar: _proxy
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(CGFloat)_decayedWaitIntervalForRetryCount:(NSUInteger)arg0 ;
-(id)init;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)locationForContext:(id)arg0 completion:(id)arg1 ;
-(void)receivedUpdatedLocation:(id)arg0 ;
-(void)setInvalidationBlock:(id)arg0 ;
-(void)setLocationUpdateBlock:(id)arg0 ;
-(void)subscribeAndFetchLocationForContext:(id)arg0 completion:(id)arg1 ;
-(void)unsubscribeLocationUpdatesWithCompletion:(id)arg0 ;


@end


#endif