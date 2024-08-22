// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFETCHEDSETTINGSDRIVERPREFERENCES_H
#define HMDFETCHEDSETTINGSDRIVERPREFERENCES_H

@class NSUserDefaults, NSString;
@protocol HMFLogging, HMDFetchedSettingsDriver, OS_dispatch_queue, HMDFetchedSettingsDriverDelegate;

#import <Foundation/Foundation.h>


@interface HMDFetchedSettingsDriverPreferences : NSObject <HMFLogging, HMDFetchedSettingsDriver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
    NSString *_prefix;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDFetchedSettingsDriverDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 userDefaults:(id)arg1 prefix:(id)arg2 defaultValues:(id)arg3 ;
-(void)fetchSettingsForKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)languageValueListWithCompletion:(id)arg0 ;
-(void)startWithKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)updateSettingWithKeyPath:(id)arg0 boolSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 integerSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 languageSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 primaryUserInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif