// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTPAFACTIVITY_H
#define MTPAFACTIVITY_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "MTMediaTimeTracker.h"

@interface MTPAFActivity : NSObject

@property (nonatomic) NSInteger activityType; // ivar: _activityType
@property (copy, nonatomic) NSArray *itemActivities; // ivar: _itemActivities
@property (nonatomic) NSUInteger lastPosition; // ivar: _lastPosition
@property (retain, nonatomic) NSArray *startEventData; // ivar: _startEventData
@property (nonatomic) NSUInteger startPosition; // ivar: _startPosition
@property (retain, nonatomic) NSString *startReason; // ivar: _startReason
@property (retain, nonatomic) NSString *startTriggerType; // ivar: _startTriggerType
@property (retain, nonatomic) NSArray *stopEventData; // ivar: _stopEventData
@property (retain, nonatomic) NSString *stopReason; // ivar: _stopReason
@property (retain, nonatomic) NSString *stopTriggerType; // ivar: _stopTriggerType
@property (nonatomic) BOOL stopped; // ivar: _stopped
@property (retain, nonatomic) MTMediaTimeTracker *timeTracker; // ivar: _timeTracker


-(id)initWithType:(NSInteger)arg0 playbackRate:(float)arg1 atMilliseconds:(NSUInteger)arg2 triggerType:(id)arg3 reason:(id)arg4 eventData:(id)arg5 ;
-(void)addItemsFromPlaylist:(id)arg0 pafKit:(id)arg1 ;
-(void)startItemActivityIfPossible:(id)arg0 ;
-(void)stopItemActivityIfPossible:(id)arg0 ;
-(void)stoppedAtMilliseconds:(NSUInteger)arg0 triggerType:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)synchronizeAtMilliseconds:(NSUInteger)arg0 ;
-(void)updateItemActivities:(id)arg0 ;


@end


#endif