// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_READ_REQUEST_H
#define NWCONCRETE_NW_READ_REQUEST_H

@class NSString;
@protocol OS_nw_read_request, OS_dispatch_data, OS_nw_content_context, OS_nw_error, OS_nw_array;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_read_request.h"
#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_read_request : NSObject <OS_nw_read_request>

 {
    NWConcrete_nw_read_request *next;
    NWConcrete_nw_read_request *tail;
    id *data_completion;
    id *data_multiple_completion;
    id *buffer_completion;
    NWConcrete_nw_connection *connection;
    unsigned int qos_class;
    int variant;
    NSUInteger min;
    NSUInteger max;
    NSUInteger progress;
    char * buffer;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    NSObject<OS_nw_content_context> *repliable_message;
    NSObject<OS_nw_error> *error;
    NSObject<OS_nw_array> *read_array;
    NSObject<OS_nw_array> *context_array;
    BOOL reported;
    BOOL is_complete;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif