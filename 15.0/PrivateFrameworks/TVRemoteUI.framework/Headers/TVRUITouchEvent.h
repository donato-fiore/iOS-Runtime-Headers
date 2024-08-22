// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVRUITOUCHEVENT_H
#define TVRUITOUCHEVENT_H


#import <Foundation/Foundation.h>


@interface TVRUITouchEvent : NSObject

@property (readonly, nonatomic) CGPoint digitizerLocation; // ivar: _digitizerLocation
@property (readonly, nonatomic) NSInteger fingerIndex; // ivar: _fingerIndex
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger touchPhase; // ivar: _touchPhase


-(id)initWithTimestamp:(CGFloat)arg0 touchPhase:(NSInteger)arg1 fingerIndex:(NSInteger)arg2 digitizerLocation:(struct CGPoint )arg3 ;


@end


#endif