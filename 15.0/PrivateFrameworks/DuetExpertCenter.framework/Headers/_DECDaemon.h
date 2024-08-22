// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECDAEMON_H
#define _DECDAEMON_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DECExpertManager.h"
#import "_DECServerResponder.h"
#import "_DECDailyTrainingScheduler.h"

@interface _DECDaemon : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    _DECExpertManager *_expertManager;
    _DECServerResponder *_serverResponder;
    _DECDailyTrainingScheduler *_trainingScheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_getServerResponder;
-(id)init;
-(void)_runDelayedInitializationOperations;


@end


#endif