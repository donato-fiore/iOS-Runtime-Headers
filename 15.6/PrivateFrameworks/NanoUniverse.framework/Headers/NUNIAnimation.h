// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUNIANIMATION_H
#define NUNIANIMATION_H

@protocol NUNIAnimatable, NUNIAnimationObserver;

#import <Foundation/Foundation.h>


@interface NUNIAnimation : NSObject {
    ? _ctrl1;
    ? _ctrl2;
    ? _values;
    int _valuesCount;
    float _prevTime;
    float _pauseTime;
    ? _from;
    ? _to;
}


@property (weak, nonatomic) NSObject<NUNIAnimatable> *animatable; // ivar: _animatable
@property (nonatomic) float delay; // ivar: _delay
@property (nonatomic) float duration; // ivar: _duration
@property (nonatomic) int frameInterval; // ivar: _frameInterval
@property ? from;
@property (nonatomic) NSUInteger function; // ivar: _function
@property (nonatomic) NSUInteger key; // ivar: _key
@property (weak, nonatomic) NSObject<NUNIAnimationObserver> *observer; // ivar: _observer
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isRepeat) BOOL repeat; // ivar: _repeat
@property (nonatomic) float startTime; // ivar: _startTime
@property ? to;


-(BOOL)update:(float)arg0 ;
-(id)initWithAnimatable:(id)arg0 from:(NSUInteger)arg1 toctrl1ctrl2key;
-(id)initWithAnimatable:(id)arg0 from:(NSUInteger)arg1 tokey;
-(id)initWithAnimatable:(id)arg0 value:(NSUInteger)arg1 key;
-(id)initWithAnimatable:(id)arg0 values:(*int)arg1 count:(NSUInteger)arg2 key;
-(void)apply:(float)arg0 ;


@end


#endif