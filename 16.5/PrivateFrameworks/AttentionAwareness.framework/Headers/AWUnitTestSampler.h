// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWUNITTESTSAMPLER_H
#define AWUNITTESTSAMPLER_H

@protocol AWUnitTestSampler, NSXPCProxyCreating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AWUnitTestSampler : NSObject <AWUnitTestSampler>

 {
    id<NSXPCProxyCreating> *_remoteSamplerProxy;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedSampler;
-(id)_connect;
-(id)connect;
-(id)init;
-(id)invokeSampler:(id)arg0 ;
-(void)getStatsWithBlock:(id)arg0 ;
-(void)resetStats;
-(void)setDisplayCallback:(id)arg0 ;
-(void)setDisplayState:(BOOL)arg0 ;
-(void)setDisplayState:(BOOL)arg0 reply:(id)arg1 ;
-(void)setPearlErrorState:(BOOL)arg0 ;
-(void)setPearlErrorState:(BOOL)arg0 reply:(id)arg1 ;
-(void)setSampleState:(BOOL)arg0 ;
-(void)setSampleState:(BOOL)arg0 deliverEvent:(BOOL)arg1 ;
-(void)setSampleState:(BOOL)arg0 deliverEvent:(BOOL)arg1 reply:(id)arg2 ;
-(void)setSampleState:(BOOL)arg0 reply:(id)arg1 ;
-(void)setSmartCoverCallback:(id)arg0 ;
-(void)setSmartCoverClosed:(BOOL)arg0 ;
-(void)setSmartCoverClosed:(BOOL)arg0 reply:(id)arg1 ;


@end


#endif