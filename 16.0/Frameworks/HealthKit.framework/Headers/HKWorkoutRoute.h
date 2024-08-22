// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTROUTE_H
#define HKWORKOUTROUTE_H

@class HDCodableLocationSeries;


#import "HKSeriesSample.h"

@interface HKWorkoutRoute : HKSeriesSample

@property (retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute; // ivar: __codableWorkoutRoute


+(BOOL)_isConcreteObjectClass;
+(id)_workoutRouteWithDevice:(id)arg0 metadata:(id)arg1 ;
-(BOOL)_isSmoothed;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(id)_validateSample;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)_valueDescription;


@end


#endif