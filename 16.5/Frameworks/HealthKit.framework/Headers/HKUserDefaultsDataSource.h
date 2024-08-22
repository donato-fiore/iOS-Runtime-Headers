// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKUSERDEFAULTSDATASOURCE_H
#define HKUSERDEFAULTSDATASOURCE_H

@class NSUserDefaults;


#import "HKObserverBridge.h"

@interface HKUserDefaultsDataSource : HKObserverBridge

@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


+(id)ageGatingDataSource;
+(id)privacyPreferencesDataSource;
+(id)respiratoryPreferencesDataSource;
-(id)initWithUserDefaults:(id)arg0 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;


@end


#endif