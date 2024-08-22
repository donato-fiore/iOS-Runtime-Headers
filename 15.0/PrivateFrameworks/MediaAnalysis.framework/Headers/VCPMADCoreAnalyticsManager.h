// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMADCOREANALYTICSMANAGER_H
#define VCPMADCOREANALYTICSMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCPMADCoreAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_managementQueue;
    NSUInteger _singleAnalyticsSentCount;
    NSUInteger _sessionAnalyticsSentCount;
    NSMutableDictionary *_sessionAnalytics;
}




+(id)sharedManager;
-(id)init;
-(void)accumulateDoubleValue:(CGFloat)arg0 forField:(id)arg1 andEvent:(id)arg2 ;
-(void)accumulateInt64Value:(NSInteger)arg0 forField:(id)arg1 andEvent:(id)arg2 ;
-(void)dealloc;
-(void)flush;
-(void)sendEvent:(id)arg0 withAnalytics:(id)arg1 ;
-(void)sendSessionEvent:(id)arg0 ;
-(void)setValue:(id)arg0 forField:(id)arg1 andEvent:(id)arg2 ;


@end


#endif