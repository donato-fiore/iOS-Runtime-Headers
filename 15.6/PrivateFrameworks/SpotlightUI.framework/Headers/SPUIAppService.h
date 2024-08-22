// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIAPPSERVICE_H
#define SPUIAPPSERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SPXPCConnection.h"

@interface SPUIAppService : NSObject {
    int _awakeNotifyToken;
    NSObject<OS_dispatch_queue> *_appServiceQueue;
    SPXPCConnection *_backgroundConnection;
    SPXPCConnection *_appConnection;
    BOOL _activated;
}




+(id)sharedAppService;
+(void)initialize;
-(id)init;
-(void)_cancelAwakeNotifyToken;
-(void)activate;
-(void)deactivate;
-(void)registerAwakeNotifyToken;


@end


#endif