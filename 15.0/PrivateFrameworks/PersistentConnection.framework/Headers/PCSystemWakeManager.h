// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCSYSTEMWAKEMANAGER_H
#define PCSYSTEMWAKEMANAGER_H


#import <Foundation/Foundation.h>


@interface PCSystemWakeManager : NSObject



+(void)scheduleWake:(BOOL)arg0 wakeDate:(id)arg1 acceptableDelay:(CGFloat)arg2 userVisible:(BOOL)arg3 serviceIdentifier:(id)arg4 uniqueIdentifier:(*void)arg5 ;


@end


#endif