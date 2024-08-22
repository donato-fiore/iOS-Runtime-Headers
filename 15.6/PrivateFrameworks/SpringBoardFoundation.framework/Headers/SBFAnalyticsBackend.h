// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFANALYTICSBACKEND_H
#define SBFANALYTICSBACKEND_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol SBFAnalyticsBackendEventHandling, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SBFAnalyticsBackend : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSMutableArray *_asyncEventHandlers;
    NSMutableArray *_syncEventHandlers;
    NSMutableDictionary *_stateQueryHandlers;
    NSObject<OS_dispatch_queue> *_queryHandlerQueue;
    NSObject<OS_dispatch_queue> *_asyncHandlerQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)registerEventHandler:(id)arg0 ;
-(void)registerForQueryName:(NSUInteger)arg0 handler:(id)arg1 ;
-(void)registerSynchronousEventHandler:(id)arg0 ;
-(void)stateForQueryName:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif