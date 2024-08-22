// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_WS_PING_REQUEST_H
#define NWCONCRETE_NW_WS_PING_REQUEST_H

@class NSString;
@protocol OS_nw_ws_ping_request, OS_dispatch_data, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_ws_ping_request : NSObject <OS_nw_ws_ping_request>

 {
    NSObject<OS_dispatch_data> *contents;
    NSObject<OS_dispatch_queue> *client_queue;
    id *pong_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif