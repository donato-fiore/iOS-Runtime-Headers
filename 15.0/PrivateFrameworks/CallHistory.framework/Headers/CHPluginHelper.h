// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHPLUGINHELPER_H
#define CHPLUGINHELPER_H

@class NSXPCConnection, NSXPCInterface;

#import <Foundation/Foundation.h>


@interface CHPluginHelper : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}




-(NSUInteger)unreadCallCount;
-(id)init;
-(id)recentCallsWithLimitingTypes:(unsigned int)arg0 ;


@end


#endif