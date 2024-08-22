// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKFILEMATCHERHELPER_H
#define FBKFILEMATCHERHELPER_H


#import <Foundation/Foundation.h>


@interface FBKFileMatcherHelper : NSObject



+(id)additionalDevicePlatforms;
+(id)additionalSysdiagnoseMatcherWithPlatform:(id)arg0 ;
+(id)fakeSysdiagnoseRequirementWithPlatform:(id)arg0 ;
+(id)stubFilePredicateWithRequiresRemote:(BOOL)arg0 ;
+(id)sysdiagnoseMatcherWithPlatform:(id)arg0 ;


@end


#endif