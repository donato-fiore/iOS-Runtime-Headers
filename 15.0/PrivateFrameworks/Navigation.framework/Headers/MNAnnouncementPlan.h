// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNANNOUNCEMENTPLAN_H
#define MNANNOUNCEMENTPLAN_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MNAnnouncementPlan : NSObject

@property (nonatomic) CGFloat distance; // ivar: _distance
@property (retain, nonatomic) NSArray *events; // ivar: _events
@property (retain, nonatomic) NSMutableArray *plannedEvents; // ivar: _plannedEvents
@property (nonatomic) CGFloat speed; // ivar: _speed


+(CGFloat)desiredTimeGapBetweenEvent:(id)arg0 andEvent:(id)arg1 ;
-(id)description;
-(id)initWithEvents:(id)arg0 distance:(CGFloat)arg1 speed:(CGFloat)arg2 durations:(id)arg3 ;
-(id)nextConflict;
-(void)sortEvents;


@end


#endif