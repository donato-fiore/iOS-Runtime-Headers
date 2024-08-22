// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBLAUNCHIMAGEPROVIDERCLIENT_H
#define XBLAUNCHIMAGEPROVIDERCLIENT_H

@class BSBaseXPCClient;


#import "XBApplicationLaunchCompatibilityInfo.h"

@interface XBLaunchImageProviderClient : BSBaseXPCClient {
    XBApplicationLaunchCompatibilityInfo *_appInfo;
}




+(void)preheatServiceWithTimeout:(CGFloat)arg0 ;
-(id)init;
-(id)initWithApplicationInfo:(id)arg0 ;
-(unsigned int)generateImageWithContext:(id)arg0 captureInfo:(*id)arg1 error:(*id)arg2 ;


@end


#endif