// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHTEMPLATE_H
#define ACHTEMPLATE_H

@class NSSet, NSString, NSDateComponents, NSArray, HKUnit, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ACHTemplate : NSObject <NSCopying, NSSecureCoding>

 {
    ? _packedVisibilityStart;
    ? _packedVisibilityEnd;
    ? _packedAvailabilityStart;
    ? _packedAvailabilityEnd;
}


@property (retain, nonatomic) NSSet *alertDates; // ivar: _alertDates
@property (retain, nonatomic) NSString *alertabilityPredicate; // ivar: _alertabilityPredicate
@property (retain, nonatomic) NSDateComponents *availabilityEnd;
@property (retain, nonatomic) NSString *availabilityPredicate; // ivar: _availabilityPredicate
@property (retain, nonatomic) NSDateComponents *availabilityStart;
@property (retain, nonatomic) NSArray *availableCountryCodes; // ivar: _availableCountryCodes
@property (nonatomic) BOOL availableOnPairedDevice; // ivar: _availableOnPairedDevice
@property (retain, nonatomic) NSArray *availableSuffixes; // ivar: _availableSuffixes
@property (retain, nonatomic) HKUnit *canonicalUnit; // ivar: _canonicalUnit
@property (retain, nonatomic) NSDate *createdDate; // ivar: _createdDate
@property (nonatomic) unsigned char creatorDevice; // ivar: _creatorDevice
@property (nonatomic) NSUInteger displayOrder; // ivar: _displayOrder
@property (nonatomic) BOOL displaysEarnedInstanceCount; // ivar: _displaysEarnedInstanceCount
@property (nonatomic) NSUInteger duplicateRemovalCalendarUnit; // ivar: _duplicateRemovalCalendarUnit
@property (nonatomic) unsigned char duplicateRemovalStrategy; // ivar: _duplicateRemovalStrategy
@property (nonatomic) unsigned char earnDateStrategy; // ivar: _earnDateStrategy
@property (nonatomic) unsigned char earnLimit; // ivar: _earnLimit
@property (retain, nonatomic) NSString *goalExpression; // ivar: _goalExpression
@property (retain, nonatomic) NSString *graceGoalExpression; // ivar: _graceGoalExpression
@property (retain, nonatomic) NSString *gracePredicate; // ivar: _gracePredicate
@property (retain, nonatomic) NSString *graceProgressExpression; // ivar: _graceProgressExpression
@property (retain, nonatomic) NSString *graceValueExpression; // ivar: _graceValueExpression
@property (retain, nonatomic) NSString *graceVisibilityPredicate; // ivar: _graceVisibilityPredicate
@property (nonatomic) NSUInteger key; // ivar: _key
@property (nonatomic) unsigned char minimumEngineVersion; // ivar: _minimumEngineVersion
@property (nonatomic) NSUInteger mobileAssetVersion; // ivar: _mobileAssetVersion
@property (retain, nonatomic) NSString *predicate; // ivar: _predicate
@property (retain, nonatomic) NSString *progressExpression; // ivar: _progressExpression
@property (retain, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (nonatomic) NSUInteger triggers; // ivar: _triggers
@property (retain, nonatomic) NSString *uniqueName; // ivar: _uniqueName
@property (retain, nonatomic) NSString *valueExpression; // ivar: _valueExpression
@property (nonatomic) NSUInteger version; // ivar: _version
@property (retain, nonatomic) NSDateComponents *visibilityEnd;
@property (retain, nonatomic) NSString *visibilityPredicate; // ivar: _visibilityPredicate
@property (retain, nonatomic) NSDateComponents *visibilityStart;


+(BOOL)supportsSecureCoding;
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