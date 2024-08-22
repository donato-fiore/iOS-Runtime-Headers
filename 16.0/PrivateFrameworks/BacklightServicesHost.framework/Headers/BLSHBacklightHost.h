// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTHOST_H
#define BLSHBACKLIGHTHOST_H


#import <Foundation/Foundation.h>


@interface BLSHBacklightHost : NSObject



+(BOOL)checkForWatchdogDidFire:(BOOL)arg0 ;
+(id)sharedBacklightHost;
+(id)sharedTelemetrySource;
+(void)registerSharedBacklightHost:(id)arg0 ;


@end


#endif