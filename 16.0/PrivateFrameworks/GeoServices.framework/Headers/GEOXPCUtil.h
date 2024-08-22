// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOXPCUTIL_H
#define GEOXPCUTIL_H


#import <Foundation/Foundation.h>


@interface GEOXPCUtil : NSObject



+(id)createServerConnectionWithDebugIdentifier:(id)arg0 eventHandler:(id)arg1 ;
+(id)createServerConnectionWithQueue:(id)arg0 debugIdentifier:(id)arg1 eventHandler:(id)arg2 ;
+(id)createServerConnectionWithQueue:(id)arg0 debugIdentifier:(id)arg1 traits:(id)arg2 eventHandler:(id)arg3 ;
+(id)daemonXPCConnectionCreationBlock:(SEL)arg0 ;
+(id)defaultXPCServerConnectionQueue;
+(void)setDaemonXPCConnectionCreationBlock:(id)arg0 ;
+(void)setDefaultXPCServerConnectionQueue:(id)arg0 ;


@end


#endif