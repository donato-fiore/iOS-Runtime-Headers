// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONPAGEMANAGEMENTMETRIC_H
#define SBICONPAGEMANAGEMENTMETRIC_H

@class PETDistributionEventTracker, PETScalarEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBIconPageManagementMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    PETDistributionEventTracker *_pagesHiddenTracker;
    PETDistributionEventTracker *_pagesVisibleTracker;
    PETDistributionEventTracker *_pagesCountTracker;
    PETScalarEventTracker *_pageManagementPresentationTracker;
    PETScalarEventTracker *_pageDeletionTracker;
    PETScalarEventTracker *_pageMovementTracker;
    PETScalarEventTracker *_pageHidingTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif