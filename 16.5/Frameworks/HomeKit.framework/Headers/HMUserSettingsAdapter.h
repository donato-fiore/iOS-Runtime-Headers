// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMUSERSETTINGSADAPTER_H
#define HMUSERSETTINGSADAPTER_H

@class HMFObject, NSString;
@protocol HMSettingManager, HMSettingsOwner, HMFLogging, HMSettingsDelegate;


#import "_HMContext.h"
#import "HMSettingGroup.h"
#import "HMSettings.h"
#import "HMUser.h"

@interface HMUserSettingsAdapter : HMFObject <HMSettingManager, HMSettingsOwner, HMFLogging>



@property (retain, nonatomic) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSettingsDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEverSentOutSettingsDidUpdate; // ivar: _didEverSentOutSettingsDidUpdate
@property (readonly) NSUInteger hash;
@property (retain) HMSettingGroup *rootGroup; // ivar: _rootGroup
@property (readonly) HMSettings *settings; // ivar: _settings
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (weak, nonatomic) HMUser *user; // ivar: _user


+(id)logCategory;
+(id)privateSettingsSchema;
+(id)sharedSettingsSchema;
-(BOOL)mergeUsingPreOrder:(id)arg0 withDictionary:(id)arg1 ;
-(id)appendKeyPath:(id)arg0 withNextKey:(id)arg1 ;
-(id)createKeyPathArrayWithKeyPath:(id)arg0 ;
-(id)findOrAddUserSettingGroupWithKeyPath:(id)arg0 ;
-(id)groupKeyArrayFromKeyPath:(id)arg0 ;
-(id)initWithUser:(id)arg0 settingsType:(NSInteger)arg1 ;
-(id)settingKeyFromKeyPath:(id)arg0 ;
-(void)_notifyDelegateDidUpdateKeyPath:(id)arg0 ;
-(void)_notifyDelegateSettingsDidUpdate;
-(void)configureWithContext:(id)arg0 ;
-(void)createRootSettingGroup;
-(void)mergeWithDictionary:(id)arg0 ;
-(void)updateValueForSetting:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif