// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUSAGETRACKINGRECORDTIMEDEVENT_H
#define AVTUSAGETRACKINGRECORDTIMEDEVENT_H

@class NSDate;
@protocol AVTAvatarRecord;

#import <Foundation/Foundation.h>


@interface AVTUsageTrackingRecordTimedEvent : NSObject

@property (retain, nonatomic) NSDate *currentStartTime; // ivar: _currentStartTime
@property (nonatomic) BOOL paused; // ivar: _paused
@property (readonly, nonatomic) NSObject<AVTAvatarRecord> *record; // ivar: _record
@property (nonatomic) CGFloat totalTime; // ivar: _totalTime


-(CGFloat)totalElapsedTimeAtTime:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 record:(id)arg1 ;
-(void)pauseAtTime:(id)arg0 ;
-(void)resumeAtTime:(id)arg0 ;


@end


#endif