// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIWORKOUTACTIVITYTYPE_H
#define FIUIWORKOUTACTIVITYTYPE_H

@class HKQuantity, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding>

 {
    BOOL _isIndoor;
}


@property (readonly, nonatomic) NSUInteger auxiliaryTypeIdentifier; // ivar: _auxiliaryTypeIdentifier
@property (readonly, nonatomic) NSUInteger effectiveTypeIdentifier;
@property (readonly, nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isCategorizedOtherWorkout;
@property (readonly, nonatomic) BOOL isIndoor;
@property (readonly, nonatomic) BOOL isWaterLockActivity;
@property (readonly, nonatomic) HKQuantity *lapLength;
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: _metadata
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
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 metadata:(id)arg2 ;
-(id)initWithActivityTypeIdentifier:(NSUInteger)arg0 isIndoor:(BOOL)arg1 metadata:(id)arg2 auxiliaryTypeIdentifier:(NSUInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedName;
-(id)localizedNameComponents;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif