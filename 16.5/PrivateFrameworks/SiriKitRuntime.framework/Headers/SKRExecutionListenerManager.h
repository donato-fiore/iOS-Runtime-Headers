// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREXECUTIONLISTENERMANAGER_H
#define SKREXECUTIONLISTENERMANAGER_H


#import <Foundation/Foundation.h>

#import "SKRSharedFlowPluginXPCServer.h"

@interface SKRExecutionListenerManager : NSObject

@property (readonly, nonatomic) SKRSharedFlowPluginXPCServer *sharedPluginServer; // ivar: _sharedPluginServer


-(id)init;


@end


#endif