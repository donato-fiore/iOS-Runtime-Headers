// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASNOTIFICATIONDESCRIPTOR_H
#define _PASNOTIFICATIONDESCRIPTOR_H

@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PASNotificationDescriptor : NSObject {
    uint8_t isCanceled;
}


@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue




@end


#endif