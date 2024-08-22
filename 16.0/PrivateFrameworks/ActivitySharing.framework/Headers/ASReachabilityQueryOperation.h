// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASREACHABILITYQUERYOPERATION_H
#define ASREACHABILITYQUERYOPERATION_H

@class NSOperation, NSMutableSet, IDSBatchIDQueryController, NSMutableDictionary, NSString, NSSet;
@protocol IDSBatchIDQueryControllerDelegate, OS_dispatch_source;


#import "ASReachabilityStatusCache.h"

@interface ASReachabilityQueryOperation : NSOperation <IDSBatchIDQueryControllerDelegate>

 {
    BOOL _finished;
    BOOL _executing;
    NSMutableSet *_remainingDestinations;
    IDSBatchIDQueryController *_batchQueryController;
    NSObject<OS_dispatch_source> *timer;
    NSMutableDictionary *_rawIDSDestinationToOriginalDestination;
    NSMutableDictionary *_results;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *destinations; // ivar: _destinations
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (weak, nonatomic) ASReachabilityStatusCache *statusCache; // ivar: _statusCache
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)init;
-(void)_queryTimedOut;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)finish;
-(void)start;


@end


#endif