// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTIPSTATUS_H
#define TPSTIPSTATUS_H

@class NSMutableArray, NSMutableDictionary, NSString, NSDate, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TPSTipStatus : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableArray *_hintDisplayedDates;
    NSMutableArray *_desiredOutcomePerformedDates;
    NSMutableArray *_hintNotDisplayedDueToFrequencyControlDates;
    NSMutableDictionary *_userInfo;
}


@property (copy, nonatomic) NSString *clonedFromIdentifier; // ivar: _clonedFromIdentifier
@property (readonly, nonatomic, getter=isContentViewed) BOOL contentViewed;
@property (copy, nonatomic) NSDate *contentViewedDate; // ivar: _contentViewedDate
@property (copy, nonatomic) NSString *correlationIdentifier; // ivar: _correlationIdentifier
@property (copy, nonatomic) NSDate *dateForTriggerRestartTracking; // ivar: _dateForTriggerRestartTracking
@property (readonly, nonatomic, getter=isDesiredOutcomePerformed) BOOL desiredOutcomePerformed;
@property (copy, nonatomic) NSArray *desiredOutcomePerformedDates;
@property (nonatomic) NSUInteger displayType; // ivar: _displayType
@property (nonatomic, getter=isExpired) BOOL expired; // ivar: _expired
@property (copy, nonatomic) NSDate *hintDismissalDate; // ivar: _hintDismissalDate
@property (readonly, nonatomic, getter=isHintDismissed) BOOL hintDismissed;
@property (readonly, nonatomic, getter=isHintDisplayed) BOOL hintDisplayed;
@property (copy, nonatomic) NSArray *hintDisplayedDates;
@property (readonly, nonatomic, getter=isHintDisplayedOnAnyDevice) BOOL hintDisplayedOnAnyDevice;
@property (readonly, nonatomic, getter=isHintDisplayedOnCloudDevices) BOOL hintDisplayedOnCloudDevices;
@property (copy, nonatomic) NSDate *hintEligibleDate; // ivar: _hintEligibleDate
@property (readonly, nonatomic, getter=isHintInelgibile) BOOL hintInelgibile;
@property (nonatomic) NSInteger hintIneligibleReason; // ivar: _hintIneligibleReason
@property (copy, nonatomic) NSArray *hintNotDisplayedDueToFrequencyControlDates;
@property (copy, nonatomic) NSDate *hintWouldHaveBeenDisplayedDate; // ivar: _hintWouldHaveBeenDisplayedDate
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *lastDisplayContext; // ivar: _lastDisplayContext
@property (copy, nonatomic) NSString *lastUsedVersion; // ivar: _lastUsedVersion
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) BOOL overrideFrequencyControl; // ivar: _overrideFrequencyControl
@property (nonatomic) BOOL overrideHoldout; // ivar: _overrideHoldout
@property (nonatomic, getter=isPreconditionMatched) BOOL preconditionMatched; // ivar: _preconditionMatched
@property (readonly, nonatomic) NSUInteger usageFlags;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *variantIdentifier; // ivar: _variantIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isUserKnew;
-(BOOL)reenrollIfAllowed;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)addDesiredOutcomePerformedDate:(id)arg0 ;
-(void)addHintDisplayedDate:(id)arg0 ;
-(void)addHintNotDisplayedDueToFrequencyControlDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeHintEligibleDateStatus;
-(void)removeUserInfo;
-(void)updateUserInfoValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif