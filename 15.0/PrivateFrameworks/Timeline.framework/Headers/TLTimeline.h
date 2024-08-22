// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLTIMELINE_H
#define TLTIMELINE_H

@class NSTimer, NSDate;
@protocol NSSecureCoding, NSCopying, TLTimelineDelegate, TLTimelineEntry;

#import <Foundation/Foundation.h>

#import "TLTimelineEntryNode.h"
#import "TLTimelineWindow.h"

@interface TLTimeline : NSObject <NSSecureCoding, NSCopying>

 {
    TLTimelineEntryNode *_leftmostNode;
    TLTimelineEntryNode *_rightmostNode;
    TLTimelineWindow *_nowWindow;
    NSTimer *_timer;
    BOOL _delegateRespondsToTimerFired;
    BOOL _updatesNowNodeOnSignificantTimeChange;
    int _notifyToken;
}


@property (readonly, nonatomic) NSDate *dateOfLastEntryInTimeline;
@property (weak, nonatomic) NSObject<TLTimelineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDate *endOfVisibilityForNowEntry;
@property (readonly, nonatomic) NSObject<TLTimelineEntry> *lastEntry;
@property (readonly, nonatomic) NSUInteger nodeCapacity;
@property (readonly, nonatomic) NSObject<TLTimelineEntry> *nowEntry;
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL updatesNowNodeOnSignificantTimeChange;


+(BOOL)supportsSecureCoding;
+(id)TLTimelineSegmentFromSortedEntries:(id)arg0 withLowerBound:(id)arg1 upperBound:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_nowNode;
-(id)_rightmostDate;
-(id)_sortedEntries:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)entriesWithinDateInterval:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntry:(id)arg0 ;
-(id)initWithWindow:(id)arg0 paused:(BOOL)arg1 ;
-(id)nowWindow;
-(void)_recycleAllNodes;
-(void)_setupWithEntry:(id)arg0 ;
-(void)_timerFired;
-(void)_trimTimeline;
-(void)_updateNowWindow;
-(void)_updateTimer;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extendRightFromDate:(id)arg0 withEntries:(id)arg1 ;
-(void)extendTimelineFromDate:(id)arg0 withEntries:(id)arg1 ;
-(void)resetWithEntry:(id)arg0 ;


@end


#endif