// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKENTERSANDBOX_H
#define DKENTERSANDBOX_H


#import <Foundation/Foundation.h>


@interface DKEnterSandbox : NSObject



+(BOOL)defaultSandboxWithHelperAppPath:(char *)arg0 ;
+(BOOL)sandboxWithSeatbeltAbsolutePath:(char *)arg0 helperAppPath:(char *)arg1 ;
+(char *)_getCacheDirectory;
+(char *)_getHomeDirectory;
+(char *)_getMainBundle;
+(char *)_getTempDirectory;
+(id)_bundleId;
+(id)_processName;


@end


#endif