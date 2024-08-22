// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDOCKSUGGESTIONSMETRIC_H
#define SBDOCKSUGGESTIONSMETRIC_H

@class NSArray, PETScalarEventTracker, NSMutableDictionary, PETDistributionEventTracker, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBDockSuggestionsMetric : NSObject <SBFAnalyticsBackendEventHandling>

 {
    NSArray *_trackers;
    PETScalarEventTracker *_enabledTracker;
    NSMutableDictionary *_indexToSuggestionType;
    PETDistributionEventTracker *_distTracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_trackEvent:(BOOL)arg0 withPayload:(id)arg1 ;
-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(id)init;


@end


#endif