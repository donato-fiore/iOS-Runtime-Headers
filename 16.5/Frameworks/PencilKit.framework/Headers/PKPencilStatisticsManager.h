// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPENCILSTATISTICSMANAGER_H
#define PKPENCILSTATISTICSMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKPencilStatisticsManager : NSObject {
    unique_ptr<PKRunningStat, std::default_delete<PKRunningStat>> _intentionalHoverStats;
    BOOL _hasStarted;
    CGFloat _accumulatedHoverDuration;
    CGFloat _accumulatedOnScreenDuration;
    NSString *_toolName;
    CGFloat _startOfSessionTimestamp;
    NSUInteger _numberOfHoverEventsInEdge;
    NSUInteger _numberOfHoverEventsInExterior;
    NSUInteger _totalNumberOfHoverEvents;
    NSUInteger _doubleTapsInRange;
    NSUInteger _doubleTapsOutsideRange;
    CGFloat _intentionalToolPreviewDuration;
    CGFloat _intentionalHoverDuration;
    NSString *_allowedBundleID;
    NSUInteger _activePencilMinutes;
}






@end


#endif