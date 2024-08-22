// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSMESSAGERESOLUTIONPIPELINE_H
#define SIRIANALYTICSMESSAGERESOLUTIONPIPELINE_H

@class NSHashTable, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsMessageResolutionPipeline : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_resolvers;
    NSMutableArray *_resolutionTimers;
}




-(id)_startResolutionTimerWithElapsed:(id)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_continueResolutionWithMessage:(id)arg0 resolvers:(id)arg1 currentResolverIndex:(NSUInteger)arg2 resolversApplied:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_discardResolutionTimer:(id)arg0 ;
-(void)registerMessageResolver:(id)arg0 ;
-(void)resolveMessage:(id)arg0 timestamp:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif