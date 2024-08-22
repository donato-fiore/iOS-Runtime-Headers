// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDLOCKHANDLER_H
#define SDLOCKHANDLER_H


#import <Foundation/Foundation.h>


@interface SDLockHandler : NSObject



+(BOOL)deviceFirstUnlockedInMKB;
+(BOOL)deviceFirstUnlockedInSB;
+(BOOL)deviceUnlocked;
+(BOOL)migrationComplete;
+(BOOL)unlockedSinceBoot;
+(void)_checkSBLockState:(int)arg0 ;
+(void)_deviceLockSetUpMigrationCheck;
+(void)_deviceLockSetup;
+(void)_deviceLockSetupMKB;
+(void)_deviceLockSetupSB;
+(void)checkSBLockState;
+(void)setupHandlerWithIndexQueue:(id)arg0 pipelineOnly:(BOOL)arg1 indexEnabled:(BOOL)arg2 delegate:(id)arg3 ;


@end


#endif