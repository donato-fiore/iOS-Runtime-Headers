// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFSTINGSETTINGSMODEL_H
#define CSLPRFSTINGSETTINGSMODEL_H

@class NSDictionary, NSString, NSArray;
@protocol CSLPRFTwoWaySyncSettingDelegate;

#import <Foundation/Foundation.h>

#import "CSLPRFStingSystemSettings.h"
#import "CSLPRFStingSettingsModelData.h"

@interface CSLPRFStingSettingsModel : NSObject <CSLPRFTwoWaySyncSettingDelegate>

 {
    os_unfair_lock_s _lock;
    CSLPRFStingSystemSettings *_stingSystemSettings;
}


@property (retain, nonatomic) NSDictionary *actionIdentifierToSupportedBundleIDsMap; // ivar: _actionIdentifierToSupportedBundleIDsMap
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultActionTypeItems; // ivar: _defaultActionTypeItems
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSLPRFStingSettingsModelData *settingsData; // ivar: _settingsData
@property (readonly) Class superclass;


+(id)actionNameForActionType:(NSUInteger)arg0 ;
+(id)alternateActionNameForActionType:(NSUInteger)arg0 ;
+(id)sfSymbolAssetNameForActionType:(NSUInteger)arg0 ;
-(BOOL)_lock_isLinkActionSupportedForIdentifier:(id)arg0 ;
-(id)_buildActionIdentifierToSupportedBundleIDsMap:(id)arg0 ;
-(id)_buildDefaultActionTypeItems;
-(id)_modelItemWithActionType:(NSUInteger)arg0 ;
-(id)bundleIDsForActionType:(NSUInteger)arg0 ;
-(id)defaultQuickActionItems;
-(id)init;
-(id)quickActionItems;
-(id)shortcutItems;
-(id)startWorkoutsListForBundleID:(id)arg0 ;
-(void)_lock_rebuildModels;
-(void)_withLock:(id)arg0 ;
-(void)rebuildModel;
-(void)twoWaySyncSettingDidUpdate:(id)arg0 ;


@end


#endif