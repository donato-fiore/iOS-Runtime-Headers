// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKREXECUTIONLISTENERMANAGER_H
#define SKREXECUTIONLISTENERMANAGER_H


#import <Foundation/Foundation.h>

#import "SKRConversationXPCServer.h"

@interface SKRExecutionListenerManager : NSObject

@property (readonly, nonatomic) SKRConversationXPCServer *server; // ivar: _server


-(id)init;


@end


#endif