// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPOSTINSTALLSERVICE_H
#define VSPOSTINSTALLSERVICE_H


#import <Foundation/Foundation.h>


@interface VSPostInstallService : NSObject



-(void)clearSynthesisCache;
-(void)registerPostInstallActivity;
-(void)resetMobileAssetDefaults;


@end


#endif