// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETTINGS_H
#define HMACCESSORYSETTINGS_H

@class HMFUnfairLock, NSString, NSUUID;
@protocol HMFLogging, HMObjectMerge, HMAccessorySettingsDelegate, HMAccessorySettingsContainer, HMControllable;


#import "HMSettings.h"
#import "HMAccessory.h"
#import "_HMContext.h"
#import "HMAccessorySettingGroup.h"

@interface HMAccessorySettings : HMSettings <HMFLogging, HMObjectMerge>

 {
    HMFUnfairLock *_lock;
}


@property (readonly, weak) HMAccessory *accessory;
@property (readonly, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMAccessorySettingsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMAccessorySettingGroup *rootGroup; // ivar: _rootGroup
@property (weak) NSObject<HMAccessorySettingsContainer> *settingsContainer; // ivar: _settingsContainer
@property (weak) NSObject<HMControllable> *settingsControl; // ivar: _settingsControl
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;


+(id)localizationKeyForKeyPath:(id)arg0 ;
+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)initWithSettingsContainer:(id)arg0 settingsControl:(id)arg1 rootGroup:(id)arg2 ;
-(void)__notifyDelegateSettingsDidUpdate;
-(void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(id)arg0 ;
-(void)_configureWithContext:(id)arg0 ;
-(void)_notifyDelegateDidUpdateKeyPath:(id)arg0 ;
-(void)_updateSettingsWithBlock:(id)arg0 ;


@end


#endif