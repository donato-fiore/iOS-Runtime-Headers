// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OS_REMOTE_LISTENING_SERVICE_H
#define OS_REMOTE_LISTENING_SERVICE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OS_remote_listening_service.h"

@interface OS_remote_listening_service : NSObject {
    char * service_name;
    NSObject<OS_dispatch_queue> *queue;
    id *accept_block;
    OS_remote_listening_service *next;
}




-(void)dealloc;


@end


#endif