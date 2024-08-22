// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSETTINGSLOCALMESSAGEHANDLER_H
#define HMDACCESSORYSETTINGSLOCALMESSAGEHANDLER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMDAccessorySettingsLocalMessageHandlerDataSource, HMDAccessorySettingsLocalMessageHandlerDelegate, HMDLanguageValueListSettingDataProvider;



@interface HMDAccessorySettingsLocalMessageHandler : HMFObject <HMFLogging>



@property (weak) NSObject<HMDAccessorySettingsLocalMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDAccessorySettingsLocalMessageHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) NSObject<HMDLanguageValueListSettingDataProvider> *languageValuesDataProvider; // ivar: _languageValuesDataProvider
@property (readonly) Class superclass;


+(id)logCategory;
-(NSUInteger)dataSourceCallerPrivilegeWithMessage:(id)arg0 error:(*id)arg1 ;
-(id)callerVersionForMessage:(id)arg0 ;
-(id)initWithHomeUUID:(id)arg0 languageValuesDataProvider:(id)arg1 ;
-(id)siriAvailableLanguagesSetting;
-(void)handleAccessorySettingsFetchRequestMessage:(id)arg0 ;
-(void)handleAccessorySettingsUpdateRequestMessage:(id)arg0 ;


@end


#endif