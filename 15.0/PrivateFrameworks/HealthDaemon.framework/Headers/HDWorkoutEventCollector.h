// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTEVENTCOLLECTOR_H
#define HDWORKOUTEVENTCOLLECTOR_H

@class NSUUID;
@protocol HDWorkoutEventCollectorDelegate;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDWorkoutEventCollector : NSObject

@property (readonly, weak) NSObject<HDWorkoutEventCollectorDelegate> *delegate; // ivar: _delegate
@property (readonly, weak) HDProfile *profile; // ivar: _profile
@property (readonly) NSUUID *sessionId; // ivar: _sessionId


+(BOOL)isAvailableInCurrentHardware;
-(BOOL)supportsWorkoutActivityType:(NSUInteger)arg0 ;
-(id)initWithProfile:(id)arg0 delegate:(id)arg1 ;
-(void)requestPendingEventsThroughDate:(id)arg0 completion:(id)arg1 ;
-(void)startWithSessionId:(id)arg0 ;
-(void)stop;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;


@end


#endif