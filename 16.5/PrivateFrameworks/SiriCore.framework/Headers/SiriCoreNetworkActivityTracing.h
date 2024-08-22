// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORENETWORKACTIVITYTRACING_H
#define SIRICORENETWORKACTIVITYTRACING_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriCoreNetworkActivityTracing : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_activities;
    NSMutableSet *_connections;
}




+(id)sharedNetworkActivityTracing;
-(id)init;
-(void)_networkActivityActivate:(NSInteger)arg0 ;
-(void)_networkActivityAddNWConnection:(id)arg0 ;
-(void)_networkActivityRemoveNWConnection:(id)arg0 completion:(id)arg1 ;
-(void)_networkActivityStart:(NSInteger)arg0 activate:(BOOL)arg1 ;
-(void)_networkActivityStop:(NSInteger)arg0 withReason:(NSInteger)arg1 andError:(id)arg2 ;
-(void)_networkActivityTracingCancel;
-(void)currentNetworkActivityTokenWithCompletion:(id)arg0 ;
-(void)networkActivityActivate:(NSInteger)arg0 ;
-(void)networkActivityAddNWConnection:(id)arg0 ;
-(void)networkActivityRemoveNWConnection:(id)arg0 completion:(id)arg1 ;
-(void)networkActivityStart:(NSInteger)arg0 activate:(BOOL)arg1 ;
-(void)networkActivityStop:(NSInteger)arg0 withReason:(NSInteger)arg1 andError:(id)arg2 ;
-(void)networkActivityTracingCancel;


@end


#endif