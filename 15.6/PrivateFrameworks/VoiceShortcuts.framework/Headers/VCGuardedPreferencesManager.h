// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCGUARDEDPREFERENCESMANAGER_H
#define VCGUARDEDPREFERENCESMANAGER_H


#import <Foundation/Foundation.h>


@interface VCGuardedPreferencesManager : NSObject



+(BOOL)setInteger:(NSInteger)arg0 forKey:(id)arg1 inDomain:(id)arg2 withAccessSpecifier:(id)arg3 error:(*id)arg4 ;
+(id)keyWithPreferenceKey:(id)arg0 bundleId:(id)arg1 ;


@end


#endif