// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACENAVIGATIONUPDATESDEPARTWAYPOINTROW_H
#define MNTRACENAVIGATIONUPDATESDEPARTWAYPOINTROW_H

@class GEOComposedWaypoint;


#import "MNTraceNavigationUpdatesRow.h"

@interface MNTraceNavigationUpdatesDepartWaypointRow : MNTraceNavigationUpdatesRow

@property (nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (nonatomic) NSUInteger reason; // ivar: _reason
@property (retain, nonatomic) GEOComposedWaypoint *waypoint; // ivar: _waypoint


-(NSInteger)navigationUpdateType;


@end


#endif