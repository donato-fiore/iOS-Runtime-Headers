// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISKPATHEVENT_H
#define TISKPATHEVENT_H

@class TIKeyboardCandidate, NSString, TIKeyboardTouchEvent, NSArray;


#import "TISKEvent.h"

@interface TISKPathEvent : TISKEvent {
    TIKeyboardCandidate *_candidate;
    NSString *_candidateString;
    TIKeyboardTouchEvent *_pathTouchUp;
    NSArray *_allTouches;
}




-(BOOL)isMissingATouch;
-(CGFloat)countPathPauses:(id)arg0 ;
-(id)description;
-(id)init:(id)arg0 candidate:(id)arg1 allTouches:(id)arg2 emojiSearchMode:(BOOL)arg3 order:(NSInteger)arg4 ;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif