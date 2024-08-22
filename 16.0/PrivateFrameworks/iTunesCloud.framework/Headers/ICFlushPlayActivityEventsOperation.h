// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFLUSHPLAYACTIVITYEVENTSOPERATION_H
#define ICFLUSHPLAYACTIVITYEVENTSOPERATION_H

@protocol OS_dispatch_queue;


#import "ICAsyncOperation.h"
#import "ICPlayActivityController.h"

@interface ICFlushPlayActivityEventsOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, nonatomic) ICPlayActivityController *playActivityController; // ivar: _playActivityController


-(id)init;
-(id)initWithPlayActivityController:(id)arg0 ;
-(void)execute;


@end


#endif