// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYBOARDINPUTMANAGERCLIENT_H
#define UIKEYBOARDINPUTMANAGERCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface UIKeyboardInputManagerClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)handleError:(id)arg0 forRequest:(id)arg1 ;
-(void)handleRequest:(id)arg0 ;


@end


#endif