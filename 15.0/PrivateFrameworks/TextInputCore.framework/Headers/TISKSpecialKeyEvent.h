// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKSPECIALKEYEVENT_H
#define TISKSPECIALKEYEVENT_H



#import "TISKInputEvent.h"

@interface TISKSpecialKeyEvent : TISKInputEvent



-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(id)privateDescription;


@end


#endif