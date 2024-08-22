// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCDISTANTOBJECT_H
#define _NSXPCDISTANTOBJECT_H

@class NSDictionary;
@protocol NSXPCProxyCreating, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSXPCInterface.h"
#import "NSXPCConnection.h"

@interface _NSXPCDistantObject : NSObject <NSXPCProxyCreating, NSSecureCoding>

 {
    NSXPCInterface *_remoteInterface;
    id *_errorBlock;
    NSUInteger _proxyNumber;
    NSUInteger _generationCount;
    NSUInteger _flags;
    CGFloat _timeout;
}


@property (readonly, retain) NSXPCConnection *_connection; // ivar: _connection
@property (copy) NSDictionary *_userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_initWithConnection:(id)arg0 exportedObject:(id)arg1 interface:(id)arg2 ;
-(id)_initWithConnection:(id)arg0 proxyNumber:(NSUInteger)arg1 generationCount:(NSUInteger)arg2 interface:(id)arg3 options:(NSUInteger)arg4 error:(id)arg5 ;
-(id)_unboostingRemoteObjectProxy;
-(id)initWithCoder:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)remoteObjectProxyWithTimeout:(CGFloat)arg0 errorHandler:(id)arg1 ;
-(id)remoteObjectProxyWithUserInfo:(id)arg0 errorHandler:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_forwardStackInvocation:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif