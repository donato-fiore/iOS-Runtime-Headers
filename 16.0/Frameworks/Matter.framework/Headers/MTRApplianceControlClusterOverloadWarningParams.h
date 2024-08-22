// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRAPPLIANCECONTROLCLUSTEROVERLOADWARNINGPARAMS_H
#define MTRAPPLIANCECONTROLCLUSTEROVERLOADWARNINGPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRApplianceControlClusterOverloadWarningParams : NSObject

@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *warningEvent; // ivar: _warningEvent


-(id)description;
-(id)init;


@end


#endif