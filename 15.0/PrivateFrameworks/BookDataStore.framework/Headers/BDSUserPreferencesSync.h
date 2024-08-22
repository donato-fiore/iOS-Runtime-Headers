// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BDSUSERPREFERENCESSYNC_H
#define BDSUSERPREFERENCESSYNC_H


#import <Foundation/Foundation.h>


@interface BDSUserPreferencesSync : NSObject



+(id)objectFromGroupPreferencesForKey:(id)arg0 ;
+(id)syncedPreferenceKeys;
+(void)copyChangedGroupPreferencesToLocalContainer;
+(void)copyChangedLocalPreferencesToGroupContainer;
+(void)copyChangedLocalPreferencesToGroupContainerWithAppSuiteName:(id)arg0 container:(id)arg1 groupName:(id)arg2 groupContainer:(id)arg3 ;


@end


#endif