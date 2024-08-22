// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYSETTINGDEFAULTADAPTERCOLLECTION_H
#define HFACCESSORYSETTINGDEFAULTADAPTERCOLLECTION_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "HFAccessorySettingManagedConfigurationAdapter.h"
#import "HFAccessorySettingAdapter.h"
#import "HFAccessorySettingSiriLanguageAdapter.h"

@interface HFAccessorySettingDefaultAdapterCollection : NSObject

@property (readonly, nonatomic) NSSet *allAdapters;
@property (retain, nonatomic) HFAccessorySettingManagedConfigurationAdapter *managedConfigurationAdapter; // ivar: _managedConfigurationAdapter
@property (retain, nonatomic) HFAccessorySettingAdapter *mobileTimerAdapter; // ivar: _mobileTimerAdapter
@property (retain, nonatomic) HFAccessorySettingSiriLanguageAdapter *siriLanguageAdapter; // ivar: _siriLanguageAdapter




@end


#endif