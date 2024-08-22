// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDIDSREACHABILITYOPERATION_H
#define HDIDSREACHABILITYOPERATION_H

@class NSOperation, NSArray, NSString, IDSBatchIDQueryController;
@protocol IDSBatchIDQueryControllerDelegate, OS_dispatch_source;



@interface HDIDSReachabilityOperation : NSOperation <IDSBatchIDQueryControllerDelegate>

 {
    BOOL _finished;
    BOOL _executing;
    os_unfair_lock_s _lock;
    NSArray *_destinationIdentifiers;
    NSString *_serviceIdentifier;
    id *_updateHandler;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _queryTimeout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSBatchIDQueryController *queryController; // ivar: _queryController
@property (readonly) Class superclass;


-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(BOOL)isReady;
-(id)initWithIdentifers:(id)arg0 serviceIdentifier:(id)arg1 updateHandler:(id)arg2 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)cancel;
-(void)start;
-(void)unitTest_updateOperationTimeout:(NSUInteger)arg0 ;
-(void)updateDestinations:(id)arg0 ;


@end


#endif