// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMTIMERSTATUSINDICATOR_H
#define CAMTIMERSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMTimerStatusIndicator : CAMControlStatusIndicator

@property (nonatomic) NSInteger timerDuration; // ivar: _timerDuration


-(BOOL)canShowValue;
-(id)imageNameForCurrentState;
-(id)valueText;


@end


#endif