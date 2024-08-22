// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_FLOW_FINAL_READ_H
#define NWCONCRETE_NW_FLOW_FINAL_READ_H

@class NSString;
@protocol OS_nw_flow_final_read, OS_dispatch_data, OS_nw_content_context, OS_nw_error;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_flow_final_read : NSObject <OS_nw_flow_final_read>

 {
    NSObject<OS_dispatch_data> *content;
    NSObject<OS_nw_content_context> *content_context;
    BOOL receive_single_message;
    BOOL is_complete;
    NSObject<OS_nw_error> *error;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif