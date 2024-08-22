// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_WRITE_REQUEST_H
#define NWCONCRETE_NW_WRITE_REQUEST_H

@class NSString;
@protocol OS_nw_write_request, OS_dispatch_data, OS_nw_content_context;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_write_request.h"
#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request>

 {
    NWConcrete_nw_write_request *next;
    NWConcrete_nw_write_request *tail;
    id *completion;
    NWConcrete_nw_connection *connection;
    unsigned int qos_class;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    NSObject<OS_nw_content_context> *original_message;
    NSUInteger consumed_bytes;
    CGFloat relative_priority;
    BOOL complete;
    BOOL reported;
    BOOL idempotent;
    BOOL write_close;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif