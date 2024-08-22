// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACTIVITYHELPER_H
#define _UIACTIVITYHELPER_H

@class NSArray, NSString;
@protocol _UIActivityHelperDelegate;

#import <Foundation/Foundation.h>

#import "_UIActivityApplicationExtensionDiscovery.h"

@interface _UIActivityHelper : NSObject

@property (retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery; // ivar: _applicationExtensionDiscovery
@property (readonly, nonatomic) NSArray *cachedBuiltinActivities; // ivar: _cachedBuiltinActivities
@property (readonly, weak, nonatomic) NSObject<_UIActivityHelperDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *fetchShortcutsBlock; // ivar: _fetchShortcutsBlock
@property (nonatomic) BOOL primed; // ivar: _primed
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID


+(id)activityTypeForBundleIdentifier:(id)arg0 ;
+(id)builtinActivityClasses;
+(id)transportImageForBundleIdentifier:(id)arg0 ;
-(id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg0 activitiesToBeforeTypePin:(id)arg1 ;
-(id)_activitiesByApplyingDefaultOrdering:(id)arg0 ;
-(id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg0 favoriteActivityTypes:(id)arg1 ;
-(id)_activitiesByDuetOrderingActivities:(id)arg0 ;
-(id)_activitiesByTypeOrderingActivities:(id)arg0 activityTypeOrdering:(id)arg1 ;
-(id)_defaultOrderingDescriptorForActivity:(id)arg0 ;
-(id)_defaultSortItemForBuiltinActivity:(id)arg0 ;
-(id)_defaultSortOrderForApplicationDefinedActivity:(id)arg0 ;
-(id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg0 ;
-(id)_defaultSortOrderForExtensionBasedActivity:(id)arg0 ;
-(id)_defaultSortOrderForOpenInAppActivity:(id)arg0 ;
-(id)_defaultSortOrderForOtherActivity:(id)arg0 ;
-(id)_defaultSortOrderForShortcutActivity:(id)arg0 ;
-(id)activitiesByOrderingActivities:(id)arg0 applyDefaultOrdering:(BOOL)arg1 applyBeforeTypePinning:(BOOL)arg2 activityTypeOrdering:(id)arg3 bypassDuet:(BOOL)arg4 ;
-(id)initWithDelegate:(id)arg0 sessionID:(id)arg1 fetchShortcutsBlock:(id)arg2 ;
-(id)orderedAvailableActivitiesForMatchingContext:(id)arg0 ;
-(id)reportExtensionsCacheResult;
// -(void)_enumerateAvailableActivitiesForMatchingContext:(id)arg0 intoMatchingResults:(id)arg1 matchingResultsUpdateBlock:(id)arg2 enumerateActivityBlock:(unk)arg3  ;
-(void)preheatAvailableActivitiesForMatchingContext:(id)arg0 ;
-(void)primeWithDiscoveryContext:(id)arg0 ;


@end


#endif