// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_WS_REQUEST_H
#define NWCONCRETE_NW_WS_REQUEST_H

@class NSString;
@protocol OS_nw_ws_request, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_ws_request : NSObject <OS_nw_ws_request>

 {
    NSObject<OS_xpc_object> *subprotocols;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif