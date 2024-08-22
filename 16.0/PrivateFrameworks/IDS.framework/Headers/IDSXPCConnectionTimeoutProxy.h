// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSXPCCONNECTIONTIMEOUTPROXY_H
#define IDSXPCCONNECTIONTIMEOUTPROXY_H


#import <Foundation/Foundation.h>

#import "IDSXPCConnection.h"

@interface IDSXPCConnectionTimeoutProxy : NSObject

@property (retain, nonatomic) IDSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) id *target; // ivar: _target
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(BOOL)_invocationHasBlock:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTarget:(id)arg0 connection:(id)arg1 timeoutInSeconds:(CGFloat)arg2 errorHandler:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif