// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_INTERFACE_STATUS_MONITOR_H
#define NWCONCRETE_NW_INTERFACE_STATUS_MONITOR_H

@class NSString;
@protocol OS_nw_interface_status_monitor, OS_nw_interface, OS_nw_channel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_interface_status_monitor : NSObject <OS_nw_interface_status_monitor>

 {
    NSObject<OS_nw_interface> *interface;
    NSObject<OS_nw_channel> *channel;
    id *packet_handler;
    NSObject<OS_dispatch_queue> *packet_handler_queue;
    id *update_handler;
    NSObject<OS_dispatch_queue> *update_handler_queue;
    *void channel_event_source;
    *void interface_advisory_source;
    BOOL cancelled;
    BOOL __pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif