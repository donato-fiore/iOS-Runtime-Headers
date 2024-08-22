// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TISKPREDICTIONBAREVENT_H
#define TISKPREDICTIONBAREVENT_H

@class NSString;


#import "TISKTimestampEvent.h"

@interface TISKPredictionBarEvent : TISKTimestampEvent

@property (retain, nonatomic) NSString *emojiBucketCategory; // ivar: _emojiBucketCategory
@property (nonatomic) BOOL emojiPrediction; // ivar: _emojiPrediction


-(id)description;
-(id)init:(CGFloat)arg0 emojiPrediction:(BOOL)arg1 emojiSearchMode:(BOOL)arg2 order:(NSInteger)arg3 emojiBucketCategory:(id)arg4 ;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif