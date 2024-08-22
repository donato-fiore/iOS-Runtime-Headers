// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNANNOUNCEMENTENGINE_H
#define MNANNOUNCEMENTENGINE_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "MNAnnouncementPlan.h"

@interface MNAnnouncementEngine : NSObject {
    NSArray *_events;
    CGFloat _distance;
    CGFloat _speed;
    NSDictionary *_durations;
}


@property (retain, nonatomic) MNAnnouncementPlan *plan; // ivar: _plan


-(BOOL)_advanceToResolveConflict:(id)arg0 ;
-(BOOL)_compressToResolveConflict:(id)arg0 ;
-(BOOL)_delayToResolveConflict:(id)arg0 ;
-(CGFloat)_canAdvanceEvent:(id)arg0 ;
-(CGFloat)_canDelayEvent:(id)arg0 ;
-(id)nextEvent;
-(void)_dropToResolveConflict:(id)arg0 ;
-(void)planForEvents:(id)arg0 distance:(CGFloat)arg1 speed:(CGFloat)arg2 previousEvent:(id)arg3 timeSinceLastEvent:(CGFloat)arg4 durations:(id)arg5 ;


@end


#endif