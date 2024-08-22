// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIXPCCONNECTIONMANAGER_H
#define DIXPCCONNECTIONMANAGER_H


#import <Foundation/Foundation.h>

#import "DIXPCDispatcher.h"
#import "DIXPCManager.h"

@interface DIXPCConnectionManager : NSObject

@property (readonly, nonatomic) DIXPCDispatcher *dispatcher; // ivar: _dispatcher
@property (retain, nonatomic) DIXPCManager *manager; // ivar: _manager


-(id)initWithXPCManager:(id)arg0 dispatcher:(id)arg1 ;


@end


#endif