// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSPRINGBOARDUTILITY_H
#define SSSPRINGBOARDUTILITY_H


#import <Foundation/Foundation.h>


@interface SSSpringBoardUtility : NSObject



+(BOOL)_getProcessID:(*int)arg0 forApplicationIdentifier:(id)arg1 ;
+(BOOL)launchApplicationWithIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)_applicationStateMonitor;
+(id)_dispatchQueue;
+(id)_dispatchQueueNotifications;
+(id)_dispatchQueueSpringBoard;
+(id)_getApplicationInfoForIdentifier:(id)arg0 key:(id)arg1 ;
+(id)_stateCache;
+(void)_setApplicationState:(unsigned int)arg0 forClientID:(id)arg1 ;
+(void)wakeAppUsingRequest:(id)arg0 ;


@end


#endif