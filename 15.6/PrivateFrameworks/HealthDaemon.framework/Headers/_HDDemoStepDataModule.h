// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDDEMOSTEPDATAMODULE_H
#define _HDDEMOSTEPDATAMODULE_H

@class HDDemoDataModule;



@interface _HDDemoStepDataModule : HDDemoDataModule {
    CGFloat _nextFireInterval;
    NSUInteger _nextStepCount;
    CGFloat _nextDistance;
}




-(CGFloat)nextFireInterval;
-(void)scheduleNextFire;
-(void)timerDidFireWithInterval:(CGFloat)arg0 ;


@end


#endif