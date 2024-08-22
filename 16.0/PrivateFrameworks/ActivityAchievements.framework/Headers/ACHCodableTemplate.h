// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHCODABLETEMPLATE_H
#define ACHCODABLETEMPLATE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ACHCodableTemplate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *alertDates; // ivar: _alertDates
@property (retain, nonatomic) NSString *alertabilityPredicate; // ivar: _alertabilityPredicate
@property (retain, nonatomic) NSString *availabilityEndDate; // ivar: _availabilityEndDate
@property (retain, nonatomic) NSString *availabilityPredicate; // ivar: _availabilityPredicate
@property (retain, nonatomic) NSString *availabilityStartDate; // ivar: _availabilityStartDate
@property (retain, nonatomic) NSString *availableCountryCodes; // ivar: _availableCountryCodes
@property (nonatomic) BOOL availableOnPairedDevice; // ivar: _availableOnPairedDevice
@property (retain, nonatomic) NSString *availableSuffixes; // ivar: _availableSuffixes
@property (retain, nonatomic) NSString *canonicalUnit; // ivar: _canonicalUnit
@property (nonatomic) CGFloat createdDate; // ivar: _createdDate
@property (nonatomic) NSInteger creatorDevice; // ivar: _creatorDevice
@property (nonatomic) CGFloat dailyTarget; // ivar: _dailyTarget
@property (retain, nonatomic) NSString *dailyTargetCanonicalUnit; // ivar: _dailyTargetCanonicalUnit
@property (nonatomic) NSInteger displayOrder; // ivar: _displayOrder
@property (nonatomic) BOOL displaysEarnedInstanceCount; // ivar: _displaysEarnedInstanceCount
@property (nonatomic) NSInteger duplicateRemovalCalendarUnit; // ivar: _duplicateRemovalCalendarUnit
@property (nonatomic) NSInteger duplicateRemovalStrategy; // ivar: _duplicateRemovalStrategy
@property (nonatomic) NSInteger earnDateStrategy; // ivar: _earnDateStrategy
@property (nonatomic) NSInteger earnLimit; // ivar: _earnLimit
@property (retain, nonatomic) NSString *goalExpression; // ivar: _goalExpression
@property (retain, nonatomic) NSString *graceGoalExpression; // ivar: _graceGoalExpression
@property (retain, nonatomic) NSString *gracePredicate; // ivar: _gracePredicate
@property (retain, nonatomic) NSString *graceProgressExpression; // ivar: _graceProgressExpression
@property (retain, nonatomic) NSString *graceValueExpression; // ivar: _graceValueExpression
@property (retain, nonatomic) NSString *graceVisibilityPredicate; // ivar: _graceVisibilityPredicate
@property (readonly, nonatomic) BOOL hasAlertDates;
@property (readonly, nonatomic) BOOL hasAlertabilityPredicate;
@property (readonly, nonatomic) BOOL hasAvailabilityEndDate;
@property (readonly, nonatomic) BOOL hasAvailabilityPredicate;
@property (readonly, nonatomic) BOOL hasAvailabilityStartDate;
@property (readonly, nonatomic) BOOL hasAvailableCountryCodes;
@property (nonatomic) BOOL hasAvailableOnPairedDevice;
@property (readonly, nonatomic) BOOL hasAvailableSuffixes;
@property (readonly, nonatomic) BOOL hasCanonicalUnit;
@property (nonatomic) BOOL hasCreatedDate;
@property (nonatomic) BOOL hasCreatorDevice;
@property (nonatomic) BOOL hasDailyTarget;
@property (readonly, nonatomic) BOOL hasDailyTargetCanonicalUnit;
@property (nonatomic) BOOL hasDisplayOrder;
@property (nonatomic) BOOL hasDisplaysEarnedInstanceCount;
@property (nonatomic) BOOL hasDuplicateRemovalCalendarUnit;
@property (nonatomic) BOOL hasDuplicateRemovalStrategy;
@property (nonatomic) BOOL hasEarnDateStrategy;
@property (nonatomic) BOOL hasEarnLimit;
@property (readonly, nonatomic) BOOL hasGoalExpression;
@property (readonly, nonatomic) BOOL hasGraceGoalExpression;
@property (readonly, nonatomic) BOOL hasGracePredicate;
@property (readonly, nonatomic) BOOL hasGraceProgressExpression;
@property (readonly, nonatomic) BOOL hasGraceValueExpression;
@property (readonly, nonatomic) BOOL hasGraceVisibilityPredicate;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasMinimumEngineVersion;
@property (nonatomic) BOOL hasMobileAssetVersion;
@property (readonly, nonatomic) BOOL hasPredicate;
@property (readonly, nonatomic) BOOL hasProgressExpression;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) BOOL hasTriggers;
@property (readonly, nonatomic) BOOL hasUniqueName;
@property (readonly, nonatomic) BOOL hasValueExpression;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) BOOL hasVisibilityEndDate;
@property (readonly, nonatomic) BOOL hasVisibilityPredicate;
@property (readonly, nonatomic) BOOL hasVisibilityStartDate;
@property (nonatomic) NSInteger key; // ivar: _key
@property (nonatomic) NSInteger minimumEngineVersion; // ivar: _minimumEngineVersion
@property (nonatomic) NSInteger mobileAssetVersion; // ivar: _mobileAssetVersion
@property (retain, nonatomic) NSString *predicate; // ivar: _predicate
@property (retain, nonatomic) NSString *progressExpression; // ivar: _progressExpression
@property (retain, nonatomic) NSString *sourceName; // ivar: _sourceName
@property (nonatomic) NSInteger triggers; // ivar: _triggers
@property (retain, nonatomic) NSString *uniqueName; // ivar: _uniqueName
@property (retain, nonatomic) NSString *valueExpression; // ivar: _valueExpression
@property (nonatomic) NSInteger version; // ivar: _version
@property (retain, nonatomic) NSString *visibilityEndDate; // ivar: _visibilityEndDate
@property (retain, nonatomic) NSString *visibilityPredicate; // ivar: _visibilityPredicate
@property (retain, nonatomic) NSString *visibilityStartDate; // ivar: _visibilityStartDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif