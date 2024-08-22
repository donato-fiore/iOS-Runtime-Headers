// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMMIGRATIONPLUGINWRAPPERWATCHDOG_H
#define DMMIGRATIONPLUGINWRAPPERWATCHDOG_H

@class NSString;

#import <Foundation/Foundation.h>

#import "DMPluginFaulter.h"
#import "DMTimer.h"

@interface DMMigrationPluginWrapperWatchdog : NSObject

@property (copy, nonatomic) NSString *backupDeviceUUID; // ivar: _backupDeviceUUID
@property (retain, nonatomic) DMPluginFaulter *faulter; // ivar: _faulter
@property (nonatomic) NSUInteger fireCount; // ivar: _fireCount
@property (copy, nonatomic) NSString *pluginBundleIdentifier; // ivar: _pluginBundleIdentifier
@property (nonatomic) NSUInteger secondsBeforeNextFault; // ivar: _secondsBeforeNextFault
@property (nonatomic) NSUInteger secondsOfLeeway; // ivar: _secondsOfLeeway
@property (retain, nonatomic) DMTimer *timer; // ivar: _timer


+(id)_messageStringWithPluginBundleIdentifier:(id)arg0 durationDescription:(id)arg1 backupDeviceUUID:(id)arg2 ;
-(id)initWithPluginBundleIdentifier:(id)arg0 backupDeviceUUID:(id)arg1 ;
-(void)_migrationPluginDuration10Minutes;
-(void)_migrationPluginDuration20Minutes;
-(void)_migrationPluginDuration40Minutes;
-(void)_migrationPluginDuration5Minutes;
-(void)cancel;
-(void)resume;


@end


#endif