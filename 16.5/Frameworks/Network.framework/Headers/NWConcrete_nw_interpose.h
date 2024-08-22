// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_INTERPOSE_H
#define NWCONCRETE_NW_INTERPOSE_H

@class NSString;
@protocol OS_nw_interpose, OS_nw_path_evaluator, OS_nw_dictionary, OS_nw_context, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_interpose : NSObject <OS_nw_interpose>

 {
    os_unfair_lock_s lock;
    unsigned char client_uuid;
    int delegated_pid;
    int delegated_upid;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_dictionary> *flows;
    id *flow_event_handler;
    NSObject<OS_nw_context> *context;
    NSObject<OS_dispatch_queue> *client_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif