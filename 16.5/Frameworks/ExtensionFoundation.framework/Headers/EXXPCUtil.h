// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXXPCUTIL_H
#define EXXPCUTIL_H


#import <Foundation/Foundation.h>


@interface EXXPCUtil : NSObject



+(id)sharedInstance;
+(int)addExternalServiceForPid:(int)arg0 path:(id)arg1 overlay:(id)arg2 ;
+(int)servicePidFromXPCConnection:(id)arg0 ;
+(void)assertIsExtensionProcess;
+(void)checkInWithLaunchd;


@end


#endif