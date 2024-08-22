// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_DATA_TRANSFER_REPORT_H
#define NWCONCRETE_NW_DATA_TRANSFER_REPORT_H

@class NSString;
@protocol OS_nw_data_transfer_report, OS_nw_interface;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_connection.h"

@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report>

 {
    NSUInteger start_time;
    NSUInteger duration_milliseconds;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_interface> *currently_collecting_interface;
    os_unfair_lock_s lock;
    unsigned int path_count;
    unsigned int allocated_path_count;
    int state;
    nw_data_transfer_path_report primary_path;
    *nw_data_transfer_path_report secondary_paths;
    BOOL collection_in_progress;
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