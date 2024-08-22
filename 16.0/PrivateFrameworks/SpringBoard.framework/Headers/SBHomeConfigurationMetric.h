// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMECONFIGURATIONMETRIC_H
#define SBHOMECONFIGURATIONMETRIC_H

@class PETScalarEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBHomeConfigurationMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETScalarEventTracker *_homescreenDensityEventTracker;
    PETScalarEventTracker *_widgetIconConfigurationPresentationEventTracker;
    PETScalarEventTracker *_widgetIconStackConfigurationPresentationEventTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif