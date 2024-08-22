// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISKINPUTEVENT_H
#define TISKINPUTEVENT_H

@class TIKeyboardInput;


#import "TISKEvent.h"

@interface TISKInputEvent : TISKEvent {
    CGFloat _downErrorDistance;
    CGFloat _upErrorDistance;
    BOOL _canComputeErrorDistance;
}


@property (nonatomic) BOOL ignoreTapData; // ivar: _ignoreTapData
@property (retain, nonatomic) TIKeyboardInput *input; // ivar: _input


+(id)makeInputEvent:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 wordSeparator:(id)arg3 accentedLanguage:(BOOL)arg4 ;
-(BOOL)isMissingATouch;
-(CGFloat)downUpTimeDelta;
-(CGFloat)touchDownErrorDistance;
-(CGFloat)touchUpErrorDistance;
-(id)init:(id)arg0 type:(int)arg1 emojiSearchMode:(BOOL)arg2 order:(NSInteger)arg3 ;
-(id)upTouchEvent;
-(void)_computeErrorDistance;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif