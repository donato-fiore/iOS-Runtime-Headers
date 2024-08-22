// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSERIALIZATIONFILTERCONFIGURATION_H
#define SIGNPOSTSERIALIZATIONFILTERCONFIGURATION_H

@class SignpostSupportPIDFilter, SignpostSupportExactProcessNameFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter;

#import <Foundation/Foundation.h>


@interface SignpostSerializationFilterConfiguration : NSObject

@property (retain, nonatomic) SignpostSupportPIDFilter *pidFilter; // ivar: _pidFilter
@property (retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter; // ivar: _processNameFilter
@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter; // ivar: _subsystemCategoryFilter
@property (retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter; // ivar: _uniquePidFilter




@end


#endif