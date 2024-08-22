// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKEMOJISWITCHEVENT_H
#define TISKEMOJISWITCHEVENT_H



#import "TISKTimestampEvent.h"

@interface TISKEmojiSwitchEvent : TISKTimestampEvent



-(id)description;
-(id)init:(CGFloat)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif