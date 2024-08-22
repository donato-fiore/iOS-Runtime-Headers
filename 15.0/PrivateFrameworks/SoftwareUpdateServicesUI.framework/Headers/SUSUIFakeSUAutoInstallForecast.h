// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSUIFAKESUAUTOINSTALLFORECAST_H
#define SUSUIFAKESUAUTOINSTALLFORECAST_H

@class SUAutoInstallForecast;



@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast {
    CGFloat _now;
}




-(CGFloat)_now;
-(NSInteger)scheduleType;
-(id)firstUnlock;
-(id)suEndDate;
-(id)suStartDate;
-(id)unlockEndDate;
-(id)unlockStartDate;


@end


#endif