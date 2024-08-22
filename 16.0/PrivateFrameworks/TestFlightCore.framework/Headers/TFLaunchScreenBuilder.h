// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFLAUNCHSCREENBUILDER_H
#define TFLAUNCHSCREENBUILDER_H


#import <Foundation/Foundation.h>


@interface TFLaunchScreenBuilder : NSObject



+(id)_lockupWithAppName:(id)arg0 shortVersionString:(id)arg1 bundleVersionString:(id)arg2 expirationDate:(id)arg3 iconUrlTemplate:(id)arg4 ;
+(id)buildLaunchScreenFromBetaAppLaunchInfo:(id)arg0 ;
+(id)buildLaunchScreenWithAppName:(id)arg0 shortVersionString:(id)arg1 bundleVersionString:(id)arg2 expirationDate:(id)arg3 iconUrlTemplate:(id)arg4 testerNotes:(id)arg5 ;


@end


#endif