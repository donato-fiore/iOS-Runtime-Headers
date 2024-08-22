// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRKDATACOLLECTIONSCHEDULER_H
#define BRKDATACOLLECTIONSCHEDULER_H

@class NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)schedule:(id)arg0 ;


@end


#endif