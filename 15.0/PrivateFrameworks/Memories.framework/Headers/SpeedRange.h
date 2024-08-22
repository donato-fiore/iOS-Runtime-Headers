// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPEEDRANGE_H
#define SPEEDRANGE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SpeedRange.h"
#import "SpeedRanges.h"

@interface SpeedRange : NSObject <NSCopying>



@property (weak, nonatomic) SpeedRange *accurate; // ivar: _accurate
@property (readonly, nonatomic) int accurateDurationClip;
@property (weak, nonatomic) SpeedRange *accurateNext; // ivar: _accurateNext
@property (readonly, nonatomic) int accurateStartClip;
@property (weak, nonatomic) SpeedRanges *container; // ivar: _container
@property (readonly, nonatomic) int durationClip;
@property (readonly, nonatomic) int durationMedia;
@property (readonly, nonatomic) BOOL isFreeze;
@property (nonatomic) int leftEdge;
@property (weak, nonatomic) SpeedRange *next; // ivar: _next
@property (weak, nonatomic) SpeedRange *prev; // ivar: _prev
@property (nonatomic) CGFloat rate; // ivar: _rate
@property (nonatomic) int rightEdge;
@property (nonatomic) int startClip; // ivar: _startClip
@property (nonatomic) int startMedia; // ivar: _startMedia


+(id)speedRangeWithRate:(float)arg0 startMedia:(int)arg1 startClip:(int)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)insertFreezeAtClipTime:(int)arg0 ;
-(id)splitRangeAtClipTime:(int)arg0 ;
-(int)convertToMediaTimeAndUnrampedClipTime:(*int)arg0 ;
-(struct ? )applySpeed:(struct ? )arg0 ;
-(void)rippleClipTimeDown;
-(void)setAndRippleLeftEdge:(int)arg0 ;


@end


#endif