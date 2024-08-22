// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIWORKOUTACTIVITYTYPE_H
#define FIWORKOUTACTIVITYTYPE_H

@class HKQuantity, NSDictionary, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FIWorkoutActivityType : NSObject <NSSecureCoding>

 {
    BOOL _isIndoor;
}


@property (readonly, nonatomic) NSUInteger auxiliaryTypeIdentifier; // ivar: _auxiliaryTypeIdentifier
@property (readonly, nonatomic) NSUInteger effectiveTypeIdentifier;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCategorizedOtherWorkout;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) BOOL isPartOfMultiSport; // ivar: _isPartOfMultiSport
@property (readonly, nonatomic) BOOL isWaterLockActivity;
@property (readonly, nonatomic) HKQuantity *lapLength;
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUUID *openGoalUUID;
@property (readonly, nonatomic) NSInteger swimmingLocationType;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)shouldDisambiguateOnLocationType:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)mapWheelchairUserActivityType:(NSUInteger)arg0 isWheelchairUser:(BOOL)arg1 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 ;
+(id)activityTypeWithHKWorkoutActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 metadata:(id)arg2 ;
+(id)activityTypeWithWorkout:(id)arg0 ;
+(id)defaultActivityTypesWithIsWheelchairUser:(BOOL)arg0 isSwimmingSupported:(BOOL)arg1 activityMoveMode:(NSInteger)arg2 ;
+(id)deprecatedActivityTypes;
+(id)gymKitCapableActivityTypes;
+(id)nonOptimizedActivityTypes;
+(id)optimizedActivityTypesWithIsWheelchairUser:(BOOL)arg0 isSwimmingSupported:(BOOL)arg1 ;
+(id)otherWorkoutActivityTypes;
+(id)possibleActivityTypesForIdentifier:(NSUInteger)arg0 locationType:(NSInteger)arg1 swimmingLocationType:(NSInteger)arg2 wheelchairUser:(BOOL)arg3 ;
+(id)swimmingOptimizedActivityTypes;
+(id)swimmingOtherActivityTypes;
+(id)unsupportedActivityTypesWithIsWheelchairUser:(BOOL)arg0 isSwimmingSupported:(BOOL)arg1 ;
+(id)wheelchairActivityTypes;
-(BOOL)hasLocationTypePool;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)activityTypeByAddingLapLength:(CGFloat)arg0 ;
-(id)activityTypePlistKey;
-(id)description;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 ;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 isPartOfMultiSport:(BOOL)arg2 metadata:(id)arg3 ;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 isPartOfMultiSport:(BOOL)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(NSUInteger)arg4 ;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 metadata:(id)arg2 ;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 metadata:(id)arg2 auxiliaryTypeIdentifier:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizationKey;
-(id)localizedName;
-(id)localizedNameComponents;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif