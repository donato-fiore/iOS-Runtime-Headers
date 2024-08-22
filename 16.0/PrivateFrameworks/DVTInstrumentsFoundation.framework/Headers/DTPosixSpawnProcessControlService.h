// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTPOSIXSPAWNPROCESSCONTROLSERVICE_H
#define DTPOSIXSPAWNPROCESSCONTROLSERVICE_H



#import "DTProcessControlService.h"

@interface DTPosixSpawnProcessControlService : DTProcessControlService



+(int)posixSpawnWithPath:(id)arg0 environment:(id)arg1 arguments:(id)arg2 options:(id)arg3 fileDescriptorHandler:(id)arg4 ;
+(void)registerCapabilities:(id)arg0 ;
-(id)launchSuspendedProcessWithDevicePath:(id)arg0 bundleIdentifier:(id)arg1 environment:(id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(int)cleanupPid:(int)arg0 ;


@end


#endif