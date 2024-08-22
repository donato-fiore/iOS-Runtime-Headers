// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_WS_RESPONSE_H
#define NWCONCRETE_NW_WS_RESPONSE_H

@class NSString;
@protocol OS_nw_ws_response, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_ws_response : NSObject <OS_nw_ws_response>

 {
    int status;
    char * selected_subprotocol;
    NSObject<OS_xpc_object> *header_names;
    NSObject<OS_xpc_object> *header_values;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif