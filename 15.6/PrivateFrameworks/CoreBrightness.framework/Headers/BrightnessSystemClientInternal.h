// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRIGHTNESSSYSTEMCLIENTINTERNAL_H
#define BRIGHTNESSSYSTEMCLIENTINTERNAL_H

@class NSXPCConnection, NSMutableArray, NSCondition;
@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClientExportedObj.h"

@interface BrightnessSystemClientInternal : NSObject {
    NSXPCConnection *_connection;
    id *_remote;
    BrightnessSystemClientExportedObj *exportedObj;
    NSMutableArray *_clientProperties;
    NSCondition *copyPropertyForKeyWaitCondition;
    BOOL copyPropertyForKeyCompleted;
    BOOL _useSynchronousRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_os_log> *_logHandle;
}




-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)init;
-(void)addKeyToClientProperties:(id)arg0 ;
-(void)addPropertiesForNotification:(id)arg0 ;
-(void)addPropertyForNotification:(id)arg0 ;
-(void)dealloc;
-(void)registerNotificationBlock:(id)arg0 ;
// -(void)registerNotificationBlock:(id)arg0 forProperties:(unk)arg1  ;
-(void)removeKeyFromClientProperties:(id)arg0 ;
-(void)removePropertiesFromNotification:(id)arg0 ;
-(void)removePropertyFromNotification:(id)arg0 ;
-(void)stopXpcService;


@end


#endif