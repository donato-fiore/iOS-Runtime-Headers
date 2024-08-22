// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSHAREDUSERPRIVATESETTINGSMANAGER_H
#define HMDSHAREDUSERPRIVATESETTINGSMANAGER_H

@class NSMutableDictionary, NSString;
@protocol HMDCoreDataCloudChangeListener;

#import <Foundation/Foundation.h>

#import "HMDCoreData.h"
#import "HMDCoreDataCloudTransform.h"
#import "HMDHomeManager.h"

@interface HMDSharedUserPrivateSettingsManager : NSObject <HMDCoreDataCloudChangeListener>

 {
    os_unfair_lock_s _lock;
    HMDCoreData *_coreData;
    HMDCoreDataCloudTransform *_cloudTransform;
    HMDHomeManager *_homeManager;
    NSMutableDictionary *_privateSettingsByHome;
    NSMutableDictionary *_sharedSettingsByHome;
    NSMutableDictionary *_characteristicAuthorizationDataByHomeModelID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)authorizationDataForCharacteristicWithInstanceID:(id)arg0 accessoryUUID:(id)arg1 homeModelID:(id)arg2 ;
-(id)initWithCoreData:(id)arg0 cloudTransform:(id)arg1 homeManager:(id)arg2 ;
-(id)settingsForHome:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)updateAuthorizationDataForCharacteristicWithInstanceID:(id)arg0 accessoryUUID:(id)arg1 homeModelID:(id)arg2 authorizationData:(id)arg3 context:(id)arg4 ;
-(id)updateSettingsForHome:(id)arg0 ofType:(NSInteger)arg1 withValues:(id)arg2 context:(id)arg3 ;
-(void)didInsertOrUpdateModel:(id)arg0 changedProperties:(id)arg1 ;
-(void)willStartListeningWithContext:(id)arg0 ;


@end


#endif