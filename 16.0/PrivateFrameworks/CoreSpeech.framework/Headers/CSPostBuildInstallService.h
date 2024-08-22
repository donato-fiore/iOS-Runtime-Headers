// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPOSTBUILDINSTALLSERVICE_H
#define CSPOSTBUILDINSTALLSERVICE_H


#import <Foundation/Foundation.h>


@interface CSPostBuildInstallService : NSObject



+(id)sharedService;
-(id)_cleanupVoiceProfiles;
-(void)_performPostBuildInstallWithCompletion:(id)arg0 ;
-(void)registerPostBuildInstallService;


@end


#endif