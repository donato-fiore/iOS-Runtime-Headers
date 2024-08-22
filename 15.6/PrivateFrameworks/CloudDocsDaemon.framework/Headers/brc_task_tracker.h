// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRC_TASK_TRACKER_H
#define BRC_TASK_TRACKER_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface brc_task_tracker : NSObject {
    char * label;
    NSObject<OS_dispatch_group> *group;
    uint8_t cancelled;
}




-(void)dealloc;


@end


#endif