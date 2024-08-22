// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYSTATISTICTYPINGSPEED_H
#define TITYPOLOGYSTATISTICTYPINGSPEED_H



#import "TITypologyStatisticComposite.h"
#import "TITypologyStatisticBasicCounts.h"
#import "TITypologyStatisticTimeElapsed.h"

@interface TITypologyStatisticTypingSpeed : TITypologyStatisticComposite

@property (readonly, nonatomic) TITypologyStatisticBasicCounts *basicCounts; // ivar: _basicCounts
@property (readonly, nonatomic) TITypologyStatisticTimeElapsed *timeElapsed; // ivar: _timeElapsed
@property (readonly, nonatomic) float typingSpeed;


+(id)statistic;
+(id)statisticCompositeWithStatistics:(id)arg0 ;
-(id)aggregateReport;
-(id)initWithTimeElapsed:(id)arg0 basicCounts:(id)arg1 ;


@end


#endif