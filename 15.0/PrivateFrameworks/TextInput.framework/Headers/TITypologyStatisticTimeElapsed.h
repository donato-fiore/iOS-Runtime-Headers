// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYSTATISTICTIMEELAPSED_H
#define TITYPOLOGYSTATISTICTIMEELAPSED_H



#import "TITypologyStatistic.h"
#import "TITypologyTimer.h"

@interface TITypologyStatisticTimeElapsed : TITypologyStatistic

@property (readonly, nonatomic) CGFloat adjustedElapsedTime;
@property (retain, nonatomic) TITypologyTimer *adjustedTimer; // ivar: _adjustedTimer
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (retain, nonatomic) TITypologyTimer *timer; // ivar: _timer


-(id)aggregateReport;
-(id)init;
-(id)structuredReport;
-(void)visitRecordKeyboardInput:(id)arg0 ;


@end


#endif