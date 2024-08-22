// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDREQUESTBROKER_H
#define ASDREQUESTBROKER_H

@class NSMutableDictionary, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ASDRequestBroker : NSObject {
    NSMutableDictionary *_activeRequests;
    NSXPCConnection *_connection;
}




+(id)interface;
-(id)description;
-(id)init;
-(void)cancelAllRequestsWithErrorHandler:(id)arg0 ;
-(void)submitRequest:(id)arg0 withReplyHandler:(id)arg1 ;


@end


#endif