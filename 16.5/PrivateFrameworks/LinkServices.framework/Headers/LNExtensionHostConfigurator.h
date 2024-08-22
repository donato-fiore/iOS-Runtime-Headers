// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNEXTENSIONHOSTCONFIGURATOR_H
#define LNEXTENSIONHOSTCONFIGURATOR_H


#import <Foundation/Foundation.h>


@interface LNExtensionHostConfigurator : NSObject



+(id)extensionIdentityWithExtensionPointIdentifier:(id)arg0 bundleIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)extensionProcessWithBundleIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif