// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPMUTABLESAFELOCATION_H
#define SPMUTABLESAFELOCATION_H

@class CLLocation, NSString;


#import "SPSafeLocation.h"

@interface SPMutableSafeLocation : SPSafeLocation

@property (nonatomic) NSInteger approvalState;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger type;




@end


#endif