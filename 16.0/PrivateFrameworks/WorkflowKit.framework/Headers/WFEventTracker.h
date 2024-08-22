// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFEVENTTRACKER_H
#define WFEVENTTRACKER_H

@class PETEventTracker2;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WFEventTracker : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // ivar: _loggingQueue
@property (readonly, nonatomic) PETEventTracker2 *proactiveTracker; // ivar: _proactiveTracker


+(id)sharedTracker;
-(id)init;
-(id)initWithTracker:(id)arg0 ;
-(void)trackCoreAnalyticsEvent:(id)arg0 count:(int)arg1 ;
-(void)trackEvent:(id)arg0 ;
-(void)trackEvent:(id)arg0 count:(int)arg1 ;
-(void)trackPET2Event:(id)arg0 count:(int)arg1 ;


@end


#endif