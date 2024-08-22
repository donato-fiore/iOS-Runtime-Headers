// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDUNIFIEDLANGUAGEVALUELISTSETTINGDATAPROVIDER_H
#define HMDUNIFIEDLANGUAGEVALUELISTSETTINGDATAPROVIDER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDLanguageValueListSettingDataProvider, HMDUnifiedLanguageValueListSettingDataProviderDataSource;



@interface HMDUnifiedLanguageValueListSettingDataProvider : HMFObject <HMFLogging, HMDLanguageValueListSettingDataProvider>



@property (weak) NSObject<HMDUnifiedLanguageValueListSettingDataProviderDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)unifyLanguageValues:(id)arg0 withValues:(id)arg1 ;
-(id)languageValueList;


@end


#endif