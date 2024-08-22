// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _OSCHARGINGPREDICTOR_H
#define _OSCHARGINGPREDICTOR_H

@class NSXPCConnection;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface _OSChargingPredictor : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)predictor;
-(BOOL)isDeepDischargeExpected;
-(BOOL)longChargeExpected;
-(BOOL)longChargeExpectedWithConfidence:(CGFloat)arg0 ;
-(CGFloat)predictedChargeDuration;
-(CGFloat)timeUntilNextExpectedPlugin;
-(CGFloat)timeUntilNextExpectedPluginWithConfidence:(CGFloat)arg0 ;
-(id)chargePredictionOutputWithError:(*id)arg0 ;
-(id)init;
-(int)expectedMinimumDischarge;


@end


#endif