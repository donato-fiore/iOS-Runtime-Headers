// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSCHARGEPREDICTOR_H
#define _OSCHARGEPREDICTOR_H


#import <Foundation/Foundation.h>


@interface _OSChargePredictor : NSObject



+(id)predictor;
-(BOOL)isDeepDischargeExpected;
-(BOOL)longChargeExpected;
-(BOOL)longChargeExpectedWithConfidence:(CGFloat)arg0 ;
-(CGFloat)timeUntilNextExpectedPlugin;
-(CGFloat)timeUntilNextExpectedPluginWithConfidence:(CGFloat)arg0 ;
-(id)init;
-(int)expectedMinimumDischarge;


@end


#endif