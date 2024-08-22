// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFANALYTICSOBSERVERCONNECTION_H
#define AFANALYTICSOBSERVERCONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFAnalyticsObserver, AFInvalidating, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSXPCConnection *_connection;
    id *_observationHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)initWithObservation:(id)arg0 ;
-(void)_cleanUpConnection;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)dealloc;
-(void)didObserveEvents:(id)arg0 completion:(id)arg1 ;
-(void)flushWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)waitUntilInvalidated;


@end


#endif