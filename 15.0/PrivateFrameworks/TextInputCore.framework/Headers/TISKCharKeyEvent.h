// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKCHARKEYEVENT_H
#define TISKCHARKEYEVENT_H



#import "TISKInputEvent.h"

@interface TISKCharKeyEvent : TISKInputEvent

@property (nonatomic) BOOL isShortWord; // ivar: _isShortWord
@property (nonatomic) NSInteger wordPosition; // ivar: _wordPosition


-(NSInteger)_metricWordKeyPostion:(NSInteger)arg0 ;
-(id)description;
-(id)init:(id)arg0 emojiSearchMode:(BOOL)arg1 order:(NSInteger)arg2 ;
-(id)privateDescription;
-(void)reportInterKeyTiming:(id)arg0 previousEvent:(id)arg1 ;
-(void)reportToSession:(id)arg0 ;


@end


#endif