// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDREQUESTBROKER_H
#define ASDREQUESTBROKER_H

@class NSMutableDictionary, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ASDRequestBroker : NSObject

@property (readonly) NSMutableDictionary *activeRequests; // ivar: _activeRequests
@property (retain) NSXPCConnection *connection; // ivar: _connection


+(id)interface;
-(id)description;
-(id)init;
-(void)_startConnection;
-(void)cancelAllRequestsWithErrorHandler:(id)arg0 ;
-(void)markRequestAsActive:(id)arg0 ;
-(void)markRequestAsComplete:(id)arg0 ;
-(void)submitRequest:(id)arg0 withReplyHandler:(id)arg1 ;


@end


#endif