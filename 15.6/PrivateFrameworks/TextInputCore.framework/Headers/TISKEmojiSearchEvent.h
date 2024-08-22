// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISKEMOJISEARCHEVENT_H
#define TISKEMOJISEARCHEVENT_H



#import "TISKTimestampEvent.h"

@interface TISKEmojiSearchEvent : TISKTimestampEvent

@property (nonatomic) BOOL engaged; // ivar: _engaged


-(id)description;
-(id)init:(CGFloat)arg0 engaged:(BOOL)arg1 order:(NSInteger)arg2 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif