// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSERRORHANDLERSESSION_H
#define SSERRORHANDLERSESSION_H

@class NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCConnection.h"

@interface SSErrorHandlerSession : NSObject {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_properties;
    NSInteger _sessionID;
}




-(id)init;
-(id)valueForProperty:(id)arg0 ;
-(void)_setControlConnection:(id)arg0 ;
-(void)_setErrorProperties:(id)arg0 ;
-(void)_setSessionID:(NSInteger)arg0 ;
-(void)dealloc;
-(void)performDefaultHandling;
-(void)redirectToURL:(id)arg0 ;
-(void)retry;


@end


#endif