// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMEDUSACONFIGURATIONUSAGEMETRIC_H
#define SBMEDUSACONFIGURATIONUSAGEMETRIC_H

@class PETScalarEventTracker, PETDistributionEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBMedusaConfigurationUsageMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSInteger _currentSpaceConfig;
    NSInteger _currentFloatingConfig;
    BOOL _isPIPVideoActive;
    BOOL _isFloatingActive;
    CGFloat _floatingAppActivationTimestamp;
    CGFloat _pipVideoActivationTimestamp;
    PETScalarEventTracker *_medusaUsageTracker;
    PETDistributionEventTracker *_floatingAppSessionTimeTracker;
    PETDistributionEventTracker *_pipVideoSessionTimeTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_floatingAppIsActiveForConfiguration:(NSInteger)arg0 ;
-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;
-(void)_trackMedusaConfigChange;


@end


#endif