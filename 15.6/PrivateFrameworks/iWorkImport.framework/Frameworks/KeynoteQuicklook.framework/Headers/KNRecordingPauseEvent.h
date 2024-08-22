// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KNRECORDINGPAUSEEVENT_H
#define KNRECORDINGPAUSEEVENT_H



#import "KNRecordingEvent.h"

@interface KNRecordingPauseEvent : KNRecordingEvent

@property (readonly, nonatomic) NSInteger pauseEventType; // ivar: _pauseEventType


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithStartTime:(CGFloat)arg0 pauseEventType:(NSInteger)arg1 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 parentEventTrack:(id)arg2 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif