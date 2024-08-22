// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLPOWERASSERTION_H
#define CPLPOWERASSERTION_H


#import <Foundation/Foundation.h>


@interface CPLPowerAssertion : NSObject



+(BOOL)hasEnoughPower;
+(id)powerAssertionStatus;
+(void)_doProtected:(id)arg0 ;
+(void)_releaseAssertion;
+(void)_retainAssertion;
+(void)disableSleep;
+(void)enableSleep;
+(void)setHasEnoughPower:(BOOL)arg0 ;


@end


#endif