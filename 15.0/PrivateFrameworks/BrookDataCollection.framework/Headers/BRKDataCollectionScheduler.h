// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRKDATACOLLECTIONSCHEDULER_H
#define BRKDATACOLLECTIONSCHEDULER_H

@class NSBackgroundActivityScheduler;

#import <Foundation/Foundation.h>


@interface BRKDataCollectionScheduler : NSObject {
    NSBackgroundActivityScheduler *_scheduler;
}




-(id)init;
-(void)schedule:(id)arg0 ;


@end


#endif