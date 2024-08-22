// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI21ACCOUNTBALANCEHISTORY_H
#define _TTC9PASSKITUI21ACCOUNTBALANCEHISTORY_H

@protocol PKAccountServiceObserver, PKForegroundActiveArbiterObserver;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI21AccountBalanceHistory : NSObject <PKAccountServiceObserver, PKForegroundActiveArbiterObserver>

 {
    ? _balances;
    ? _dateRange;
    ? range;
    ? accountService;
    ? activeState;
    ? account;
    ? maxDataPoint;
}




-(id)init;
-(void)accountChanged:(id)arg0 ;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;


@end


#endif