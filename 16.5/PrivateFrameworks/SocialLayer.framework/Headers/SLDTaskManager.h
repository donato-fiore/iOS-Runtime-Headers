// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDTASKMANAGER_H
#define SLDTASKMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SLDTaskManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(id)initWithSerialQueue:(id)arg0 ;
// -(id)startAggregateTask:(id)arg0 withTimeout:(unk)arg1 cancellationHandler:(CGFloat)arg2  ;
// -(void)startSubtask:(id)arg0 withProgress:(unk)arg1 timer:(id)arg2  ;


@end


#endif