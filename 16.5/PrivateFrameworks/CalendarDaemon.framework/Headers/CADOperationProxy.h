// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADOPERATIONPROXY_H
#define CADOPERATIONPROXY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADOperationProxy : NSObject {
    ClientConnection *_conn;
    NSMutableDictionary *_operationGroups;
}




+(BOOL)_selectorMayBeCalledBeforeInitialization:(SEL)arg0 ;
+(Class)_operationGroupClassFromSelector:(SEL)arg0 ;
+(Class)operationProxyClassForClientWithConnection:(id)arg0 ;
+(id)allOperationGroupClasses;
-(id)_copyReplyBlockFromInvocation:(id)arg0 ;
-(id)_operationGroupForClass:(Class)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithClientConnection:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_callReplyHandler:(id)arg0 ofInvocation:(id)arg1 withError:(int)arg2 ;
-(void)_emptyMethod;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif