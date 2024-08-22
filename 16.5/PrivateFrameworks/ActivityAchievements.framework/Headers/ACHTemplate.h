// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHTEMPLATE_H
#define ACHTEMPLATE_H

@class NSSet, NSString, NSDateComponents, NSArray, HKUnit, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSSet *alertDates; // ivar: _alertDates
@property (retain) NSString *alertabilityPredicate; // ivar: _alertabilityPredicate
@property (retain) NSDateComponents *availabilityEnd;
@property (retain) NSString *availabilityPredicate; // ivar: _availabilityPredicate
@property (retain) NSDateComponents *availabilityStart;
@property (retain) NSArray *availableCountryCodes; // ivar: _availableCountryCodes
@property BOOL availableOnPairedDevice; // ivar: _availableOnPairedDevice
@property (retain) NSArray *availableSuffixes; // ivar: _availableSuffixes
@property (retain) HKUnit *canonicalUnit; // ivar: _canonicalUnit
@property (retain) NSDate *createdDate; // ivar: _createdDate
@property unsigned char creatorDevice; // ivar: _creatorDevice
@property CGFloat dailyTarget; // ivar: _dailyTarget
@property (retain) HKUnit *dailyTargetCanonicalUnit; // ivar: _dailyTargetCanonicalUnit
@property NSUInteger displayOrder; // ivar: _displayOrder
@property BOOL displaysEarnedInstanceCount; // ivar: _displaysEarnedInstanceCount
@property NSUInteger duplicateRemovalCalendarUnit; // ivar: _duplicateRemovalCalendarUnit
@property unsigned char duplicateRemovalStrategy; // ivar: _duplicateRemovalStrategy
@property unsigned char earnDateStrategy; // ivar: _earnDateStrategy
@property unsigned char earnLimit; // ivar: _earnLimit
@property (retain) NSString *goalExpression; // ivar: _goalExpression
@property (retain) NSString *graceGoalExpression; // ivar: _graceGoalExpression
@property (retain) NSString *gracePredicate; // ivar: _gracePredicate
@property (retain) NSString *graceProgressExpression; // ivar: _graceProgressExpression
@property (retain) NSString *graceValueExpression; // ivar: _graceValueExpression
@property (retain) NSString *graceVisibilityPredicate; // ivar: _graceVisibilityPredicate
@property NSUInteger key; // ivar: _key
@property unsigned char minimumEngineVersion; // ivar: _minimumEngineVersion
@property NSUInteger mobileAssetVersion; // ivar: _mobileAssetVersion
@property ? packedAvailabilityEnd; // ivar: _packedAvailabilityEnd
@property ? packedAvailabilityStart; // ivar: _packedAvailabilityStart
@property ? packedVisibilityEnd; // ivar: _packedVisibilityEnd
@property ? packedVisibilityStart; // ivar: _packedVisibilityStart
@property (retain) NSString *predicate; // ivar: _predicate
@property (retain) NSString *progressExpression; // ivar: _progressExpression
@property (retain) NSString *sourceName; // ivar: _sourceName
@property NSUInteger triggers; // ivar: _triggers
@property (retain) NSString *uniqueName; // ivar: _uniqueName
@property (retain) NSString *valueExpression; // ivar: _valueExpression
@property NSUInteger version; // ivar: _version
@property (retain) NSDateComponents *visibilityEnd;
@property (retain) NSString *visibilityPredicate; // ivar: _visibilityPredicate
@property (retain) NSDateComponents *visibilityStart;


+(BOOL)supportsSecureCoding;
-(BOOL)_isValid;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_displayStringForAlertDates:(id)arg0 ;
-(id)_displayStringForStringValues:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCodable:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif