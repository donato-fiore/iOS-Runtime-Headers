// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSTIPSTATUSCONTROLLER_H
#define TPSTIPSTATUSCONTROLLER_H

@class NSUserDefaults, NSMutableDictionary, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TPSTipStatusController : NSObject <NSCopying>

 {
    BOOL _isDirty;
}


@property (retain, nonatomic) NSUserDefaults *appGroupDefaults; // ivar: _appGroupDefaults
@property (retain, nonatomic) NSMutableDictionary *identifierToTipStatusMap; // ivar: _identifierToTipStatusMap
@property (readonly, nonatomic) NSDictionary *tipStatusMap;


-(BOOL)isContentNeverVisibleForIdentifier:(id)arg0 ;
-(BOOL)isContentViewedForIdentifier:(id)arg0 ;
-(BOOL)isContextualInfoLifetimeExpiredForIdentifier:(id)arg0 ;
-(BOOL)isDesiredOutcomePerformedForIdentifier:(id)arg0 ;
-(BOOL)isDesiredOutcomeTrackingEligibleForIdentifier:(id)arg0 ;
-(BOOL)isEligibilityTrackingNeedsRestartForIdentifier:(id)arg0 ;
-(BOOL)isExpiredForIdentifier:(id)arg0 ;
-(BOOL)isHintDismissedForIdentifier:(id)arg0 ;
-(BOOL)isHintDisplayedForIdentifier:(id)arg0 ;
-(BOOL)isHintInelgibileForIdentifier:(id)arg0 ;
-(BOOL)isHintInelgibileForReason:(NSInteger)arg0 identifier:(id)arg1 ;
-(BOOL)isHintMaxDurationExcceededForIdentifier:(id)arg0 ;
-(BOOL)isLockScreenHintDisplayEligibleForIdentifier:(id)arg0 ;
-(BOOL)isOverrideFrequencyControlForIdentifier:(id)arg0 ;
-(BOOL)isOverrideHoldoutForIdentifier:(id)arg0 ;
-(BOOL)isPreconditionMatchedForIdentifier:(id)arg0 ;
-(BOOL)isTipAppDisplayEligibleForIdentifier:(id)arg0 ;
-(BOOL)isTriggerTrackingEligibleForIdentifier:(id)arg0 ;
-(BOOL)isTriggerTrackingEligibleForIdentifier:(id)arg0 checkForPrecondition:(BOOL)arg1 checkForEligibleDate:(BOOL)arg2 ;
-(BOOL)unviewedContentAvailable;
-(NSInteger)hintInelgibileReasonForIdentifier:(id)arg0 ;
-(NSUInteger)displayTypeForIdentifier:(id)arg0 ;
-(NSUInteger)usageFlagsForIdentifier:(id)arg0 ;
-(id)_tipStatusForIdentifier:(id)arg0 addIfMissing:(BOOL)arg1 ;
-(id)clonedFromIdentifierForIdentifier:(id)arg0 ;
-(id)contentViewedDateForIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correlationIdentifierForIdentifier:(id)arg0 ;
-(id)dateForTriggerRestartTrackingForIdentifier:(id)arg0 ;
-(id)debugDescription;
-(id)firstHintDisplayDateForIdentifier:(id)arg0 ;
-(id)hintEligibleDateForIdentifier:(id)arg0 ;
-(id)hintNotDisplayedDueToFrequencyControlDatesForIdentifier:(id)arg0 ;
-(id)hintWouldHaveBeenDisplayedDateForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithAppGroupDefaults:(id)arg0 ;
-(id)lastDisplayContextForIdentifier:(id)arg0 ;
-(id)lastUsedVersionForIdentifier:(id)arg0 ;
-(id)reenrollHoldoutContent;
-(id)reenrollPreconditionChangeContent;
-(id)statusForIdentifier:(id)arg0 ;
-(id)statusesForCorrelationIdentifier:(id)arg0 ;
-(id)userInfoForIdentifier:(id)arg0 ;
-(id)variantIdentifierForIdentifier:(id)arg0 ;
-(int)hintDisplayedCountForIdentifier:(id)arg0 ;
-(void)_reloadCacheData;
-(void)addDesiredOutcomePerformedDateForIdentifier:(id)arg0 date:(id)arg1 ;
-(void)addHintDisplayedForIdentifier:(id)arg0 context:(id)arg1 ;
-(void)addHintNotDisplayedDueToFrequencyControlDateForIdentifier:(id)arg0 ;
-(void)donateDesiredOutcomePerformedForIdentifier:(id)arg0 date:(id)arg1 ;
-(void)removeAllTipStatus;
-(void)removeCacheData;
-(void)removeUserInfoForIdentifier:(id)arg0 ;
-(void)syncWithIdentifiers:(id)arg0 ;
-(void)updateCacheData;
-(void)updateClonedFromIdentifierForIdentifier:(id)arg0 value:(id)arg1 ;
-(void)updateContentViewedForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateCorrelationIdentifierForIdentifier:(id)arg0 value:(id)arg1 ;
-(void)updateDateForTriggerRestartTrackingForIdentifier:(id)arg0 date:(id)arg1 ;
-(void)updateDisplayTypeForIdentifier:(id)arg0 value:(NSUInteger)arg1 ;
-(void)updateExpiredForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateHintDismissedForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateHintEligibleDateForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateHintInelgibileForIdentifier:(id)arg0 value:(NSInteger)arg1 ;
-(void)updateHintWouldHaveBeenDisplayedDateForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateLastUsedVersionForIdentifier:(id)arg0 value:(id)arg1 ;
-(void)updateOverrideFrequencyControlForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updateOverrideHoldoutForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updatePreconditionMatchedForIdentifier:(id)arg0 value:(BOOL)arg1 ;
-(void)updatePreconditionMatchedForIdentifiers:(id)arg0 value:(BOOL)arg1 ;
-(void)updateUserInfoForIdentifier:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(void)updatevariantIdentifierForIdentifier:(id)arg0 value:(id)arg1 ;


@end


#endif