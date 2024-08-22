// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNXPC_H
#define CNXPC_H


#import <Foundation/Foundation.h>


@interface CNXPC : NSObject



+(id)listenerDelegateWithExportedObject:(id)arg0 exportedInterfaceProtocol:(id)arg1 ;
+(id)resumedConnectionForServiceName:(id)arg0 remoteObjectInterfaceProtocol:(id)arg1 ;
+(void)addAllowedClasses:(id)arg0 toInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(NSUInteger)arg3 ofReply:(BOOL)arg4 ;


@end


#endif