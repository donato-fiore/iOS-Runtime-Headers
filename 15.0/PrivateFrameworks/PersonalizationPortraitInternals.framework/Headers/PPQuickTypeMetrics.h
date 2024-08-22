// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPQUICKTYPEMETRICS_H
#define PPQUICKTYPEMETRICS_H

@class PETScalarEventTracker, PETDistributionEventTracker;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPQuickTypeMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PETScalarEventTracker *_frameworkErrors;
    PETDistributionEventTracker *_contactsMatches;
    PETDistributionEventTracker *_foundInAppsMatches;
    PETDistributionEventTracker *_eventsMatches;
}




+(void)contactMatchesWithContactsCount:(NSUInteger)arg0 foundInAppsCount:(NSUInteger)arg1 ;
+(void)eventsMatches:(NSUInteger)arg0 ;
+(void)frameworkError:(id)arg0 errorCode:(NSInteger)arg1 ;
-(id)init;


@end


#endif