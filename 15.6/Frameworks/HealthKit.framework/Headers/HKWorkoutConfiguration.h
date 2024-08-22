// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKWORKOUTCONFIGURATION_H
#define HKWORKOUTCONFIGURATION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKWorkoutConfiguration : NSObject <NSCopying, NSSecureCoding>



@property NSUInteger activityType; // ivar: _activityType
@property (retain, nonatomic) NSUUID *fitnessMachineSessionUUID; // ivar: _fitnessMachineSessionUUID
@property (copy) HKQuantity *lapLength; // ivar: _lapLength
@property NSInteger locationType; // ivar: _locationType
@property (retain, nonatomic) NSUUID *predictionSessionUUID; // ivar: _predictionSessionUUID
@property (nonatomic) BOOL shouldDisambiguateLocation; // ivar: _shouldDisambiguateLocation
@property NSInteger swimmingLocationType; // ivar: _swimmingLocationType


+(BOOL)supportsSecureCoding;
+(id)_workoutConfigurationFromDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif