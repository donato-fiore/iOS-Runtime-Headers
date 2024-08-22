// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTDATASOURCECONFIGURATION_H
#define HKWORKOUTDATASOURCECONFIGURATION_H

@class NSSet, NSDictionary;


#import "HKTaskConfiguration.h"
#import "HKWorkoutConfiguration.h"

@interface HKWorkoutDataSourceConfiguration : HKTaskConfiguration

@property BOOL collectsDefaultTypes; // ivar: _collectsDefaultTypes
@property (readonly, copy) NSSet *eventTypesToCollect; // ivar: _eventTypesToCollect
@property (readonly, copy) NSDictionary *filtersBySampleType; // ivar: _filtersBySampleType
@property (readonly, copy) NSSet *sampleTypesToCollect; // ivar: _sampleTypesToCollect
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutConfiguration:(id)arg0 sampleTypesToCollect:(id)arg1 filters:(id)arg2 eventTypesToCollect:(id)arg3 collectsDefaultTypes:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif