// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKSHIFTKEYEVENT_H
#define TISKSHIFTKEYEVENT_H



#import "TISKEvent.h"

@interface TISKShiftKeyEvent : TISKEvent



-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif