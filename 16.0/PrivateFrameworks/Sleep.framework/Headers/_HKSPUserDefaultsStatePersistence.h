// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKSPUSERDEFAULTSSTATEPERSISTENCE_H
#define _HKSPUSERDEFAULTSSTATEPERSISTENCE_H

@protocol HKSPStatePersistence, HKSPUserDefaults;

#import <Foundation/Foundation.h>


@interface _HKSPUserDefaultsStatePersistence : NSObject <HKSPStatePersistence>



@property (readonly, nonatomic) NSObject<HKSPUserDefaults> *userDefaults; // ivar: _userDefaults


-(BOOL)savePersistentState:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithUserDefaults:(id)arg0 ;
-(id)loadPersistentStateForIdentifier:(id)arg0 allowedStates:(id)arg1 error:(*id)arg2 ;


@end


#endif