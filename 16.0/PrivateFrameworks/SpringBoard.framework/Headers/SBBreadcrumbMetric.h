// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBREADCRUMBMETRIC_H
#define SBBREADCRUMBMETRIC_H

@class PETGoalConversionEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBBreadcrumbMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETGoalConversionEventTracker *_leftTracker;
    PETGoalConversionEventTracker *_rightTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif