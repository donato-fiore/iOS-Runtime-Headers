// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKWORKOUTBUILDERSAMPLEQUERYCONFIGURATION_H
#define _HKWORKOUTBUILDERSAMPLEQUERYCONFIGURATION_H

@class NSUUID;


#import "HKQueryServerConfiguration.h"

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL deliverQuantities; // ivar: _deliverQuantities
@property (nonatomic) BOOL needsHistoricalData; // ivar: _needsHistoricalData
@property (copy, nonatomic) NSUUID *workoutBuilderIdentifier; // ivar: _workoutBuilderIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif