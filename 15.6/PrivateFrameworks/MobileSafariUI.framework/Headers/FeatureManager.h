// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FEATUREMANAGER_H
#define FEATUREMANAGER_H

@class WBUFeatureManager;



@interface FeatureManager : WBUFeatureManager {
    BOOL _customTabGroupsEnabled;
    BOOL _sectionHeadersDisabled;
}


@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable; // ivar: _addToHomeScreenAvailable
@property (readonly, nonatomic, getter=isCustomTabGroupsEnabled) BOOL customTabGroupsEnabled;
@property (readonly, nonatomic, getter=isFloatingSidebarButtonEnabled) BOOL floatingSidebarButtonEnabled;
@property (readonly, nonatomic) BOOL iconsInTabsEnabled;
@property (readonly, nonatomic, getter=isInsetGroupedCompletionListEnabled) BOOL insetGroupedCompletionListEnabled; // ivar: _insetGroupedCompletionListEnabled
@property (readonly, nonatomic) BOOL isSystemNoteTakingEnabled; // ivar: _isSystemNoteTakingEnabled
@property (readonly, nonatomic, getter=isTabGroupButtonEnabled) BOOL tabGroupButtonEnabled;
@property (readonly, nonatomic, getter=areTabGroupSuggestionsEnabled) BOOL tabGroupSuggestionsEnabled;


+(id)sharedFeatureManager;
-(BOOL)areSectionHeadersDisabled;
-(id)init;
-(void)_updateAccessLevel;


@end


#endif