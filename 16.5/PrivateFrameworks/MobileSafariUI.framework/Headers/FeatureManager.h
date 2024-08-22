// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FEATUREMANAGER_H
#define FEATUREMANAGER_H

@class WBUFeatureManager, WBSAppleAccountInformationProvider;



@interface FeatureManager : WBUFeatureManager {
    WBSAppleAccountInformationProvider *_accountInformationProvider;
    BOOL _cloudAccountIsHSA2;
    BOOL _isCloudSyncEnabled;
}


@property (readonly, nonatomic, getter=isAddToHomeScreenAvailable) BOOL addToHomeScreenAvailable; // ivar: _addToHomeScreenAvailable
@property (readonly, nonatomic, getter=isCustomTabGroupsEnabled) BOOL customTabGroupsEnabled; // ivar: _customTabGroupsEnabled
@property (readonly, nonatomic, getter=isFloatingSidebarButtonEnabled) BOOL floatingSidebarButtonEnabled;
@property (readonly, nonatomic) BOOL isSystemNoteTakingEnabled; // ivar: _isSystemNoteTakingEnabled
@property (readonly, nonatomic, getter=areSharedTabGroupsEnabled) BOOL sharedTabGroupsEnabled;
@property (readonly, nonatomic, getter=isTabGroupButtonEnabled) BOOL tabGroupButtonEnabled;
@property (readonly, nonatomic, getter=areTabGroupSuggestionsEnabled) BOOL tabGroupSuggestionsEnabled;


+(id)sharedFeatureManager;
-(BOOL)_isSafariSyncEnabled;
-(BOOL)isCloudAccountHSA2;
-(id)init;
-(void)_accountsDidChange;
-(void)_updateAccessLevel;


@end


#endif