// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMACTIVITYREGISTRY_H
#define EMACTIVITYREGISTRY_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMActivityRegistry : NSObject {
    NSMapTable *_observerWrappersByObserver;
    os_unfair_lock_s _lock;
}


@property (retain) EMRemoteConnection *connection; // ivar: _connection


+(id)observerInterface;
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg0 ;
-(id)registerActivityObserver:(id)arg0 ;


@end


#endif