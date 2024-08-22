// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUICLOCKTIMERLINK_H
#define CLKUICLOCKTIMERLINK_H

@class CLKClockTimerToken;


#import "CLKUIRenderFrequencyLink.h"

@interface CLKUIClockTimerLink : CLKUIRenderFrequencyLink {
    CLKClockTimerToken *_timerToken;
}


@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(NSInteger)_updateFrequencyForFPS:(NSInteger)arg0 ;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)invalidate;
-(void)updateCoordinator;


@end


#endif