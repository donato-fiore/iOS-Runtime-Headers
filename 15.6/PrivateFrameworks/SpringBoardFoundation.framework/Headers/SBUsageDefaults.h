// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBUSAGEDEFAULTS_H
#define SBUSAGEDEFAULTS_H

@class BSAbstractDefaultDomain, NSNumber;



@interface SBUsageDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSNumber *batteryUsageTime;
@property (nonatomic) BOOL hasChargedPartially;
@property (retain, nonatomic) NSNumber *standbyTime;


-(void)_bindAndRegisterDefaults;
-(void)clearUsageDefaults;


@end


#endif