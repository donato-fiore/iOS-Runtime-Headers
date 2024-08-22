// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNREADMESSAGESDATASOURCE_H
#define ATXUNREADMESSAGESDATASOURCE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXHeuristicDevice.h"

@interface ATXUnreadMessagesDataSource : NSObject {
    ATXHeuristicDevice *_device;
    NSObject<OS_dispatch_queue> *_resultsQueue;
}




-(id)initWithDevice:(id)arg0 ;
-(void)unreadMessagesWithLimit:(NSInteger)arg0 callback:(id)arg1 ;


@end


#endif