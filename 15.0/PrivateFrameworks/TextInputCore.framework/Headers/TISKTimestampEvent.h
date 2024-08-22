// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKTIMESTAMPEVENT_H
#define TISKTIMESTAMPEVENT_H



#import "TISKEvent.h"

@interface TISKTimestampEvent : TISKEvent

@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isMissingATouch;
-(CGFloat)touchDownTimestamp;
-(CGFloat)touchUpTimestamp;
-(id)init:(int)arg0 timestamp:(CGFloat)arg1 emojiSearchMode:(BOOL)arg2 order:(NSInteger)arg3 ;


@end


#endif