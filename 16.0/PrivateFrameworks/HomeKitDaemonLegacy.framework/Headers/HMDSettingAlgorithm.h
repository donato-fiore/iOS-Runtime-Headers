// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGALGORITHM_H
#define HMDSETTINGALGORITHM_H


#import <Foundation/Foundation.h>


@interface HMDSettingAlgorithm : NSObject



+(id)allGroupsFromRootGroup:(id)arg0 ;
+(id)allSettingsFromRootGroup:(id)arg0 ;
+(void)findChangedSettingsWithRootGroup:(id)arg0 currentGroups:(id)arg1 currentSettings:(id)arg2 completion:(id)arg3 ;


@end


#endif