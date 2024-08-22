// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNANNOUNCEMENTPLANEVENT_H
#define MNANNOUNCEMENTPLANEVENT_H

@class NSMutableArray, NSArray, GEOComposedGuidanceEvent;

#import <Foundation/Foundation.h>


@interface MNAnnouncementPlanEvent : NSObject

@property (retain, nonatomic) NSMutableArray *announcementDurations; // ivar: _announcementDurations
@property (readonly, nonatomic) CGFloat completionDistance;
@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSArray *durations; // ivar: _durations
@property (retain, nonatomic) GEOComposedGuidanceEvent *event; // ivar: _event
@property (nonatomic) BOOL includeInPlan; // ivar: _includeInPlan
@property (nonatomic) CGFloat speed; // ivar: _speed
@property (nonatomic) CGFloat triggerDistance; // ivar: _triggerDistance
@property (nonatomic) NSUInteger variantIndex; // ivar: _variantIndex


-(id)description;
-(id)initWithEvent:(id)arg0 distance:(CGFloat)arg1 speed:(CGFloat)arg2 durations:(id)arg3 ;


@end


#endif