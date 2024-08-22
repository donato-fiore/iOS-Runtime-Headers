// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_CONNECTION_GROUP_SEND_REQUEST_H
#define NWCONCRETE_NW_CONNECTION_GROUP_SEND_REQUEST_H

@class NSString;
@protocol OS_nw_connection_group_send_request, OS_nw_connection_group, OS_nw_endpoint, OS_dispatch_data, OS_nw_content_context;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_connection_group_send_request : NSObject <OS_nw_connection_group_send_request>

 {
    NSObject<OS_nw_connection_group> *group;
    id *completion;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif