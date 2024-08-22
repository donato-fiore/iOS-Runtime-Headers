// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBIOMETRICSDISABLETASK_H
#define AMSBIOMETRICSDISABLETASK_H

@class ACAccount;


#import "AMSTask.h"

@interface AMSBiometricsDisableTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account


-(id)initWithAccount:(id)arg0 ;
-(id)perform;


@end


#endif