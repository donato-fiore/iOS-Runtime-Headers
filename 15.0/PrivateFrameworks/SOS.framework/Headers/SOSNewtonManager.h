// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSNEWTONMANAGER_H
#define SOSNEWTONMANAGER_H


#import <Foundation/Foundation.h>


@interface SOSNewtonManager : NSObject



+(void)checkEligibilityForAutoEnableWithCompletion:(id)arg0 ;
+(void)checkEligibilityForAutoEnableWithHealthStore:(id)arg0 completion:(id)arg1 ;
+(void)newtonEligibilityWithCompletion:(id)arg0 ;
+(void)newtonEligibilityWithHealthStore:(id)arg0 completion:(id)arg1 ;


@end


#endif