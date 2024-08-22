// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSDATEINTERVALLIFETIMEMONITOR_H
#define DNDSDATEINTERVALLIFETIMEMONITOR_H

@class NSDate;


#import "DNDSBaseLifetimeMonitor.h"

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate *_lifetimeTimerFireDate;
}




+(Class)lifetimeClass;
-(id)updateForModeAssertions:(id)arg0 date:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif