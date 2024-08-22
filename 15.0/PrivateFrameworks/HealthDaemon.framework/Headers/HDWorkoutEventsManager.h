// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTEVENTSMANAGER_H
#define HDWORKOUTEVENTSMANAGER_H

@class HDAssertionManager, NSMutableSet, NSString;
@protocol HDAssertionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver>

 {
    HDProfile *_profile;
    HDAssertionManager *_assertionManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_eventCollectors;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(id)takeSessionAssertionWithOwnerIdentifier:(id)arg0 activityType:(NSUInteger)arg1 sessionIdentifier:(id)arg2 eventsDelegate:(id)arg3 ;
-(void)assertionManager:(id)arg0 assertionInvalidated:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg0 sessionIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;


@end


#endif