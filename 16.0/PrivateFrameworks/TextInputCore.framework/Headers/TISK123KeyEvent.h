// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISK123KEYEVENT_H
#define TISK123KEYEVENT_H



#import "TISKEvent.h"

@interface TISK123KeyEvent : TISKEvent



-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;


@end


#endif