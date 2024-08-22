// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCLAYOUTLOOPDETECTOR_H
#define NCLAYOUTLOOPDETECTOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NCLayoutLoopDetector : NSObject

@property (retain) NSMutableArray *notificationLayoutsInProgress; // ivar: _notificationLayoutsInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)layoutInProgressContainsNotificationRequest:(id)arg0 ;
-(id)_savedNotificationLayoutsInProgress;
-(id)init;
-(void)_saveNotificationLayoutsInProgress;
-(void)addNotificationRequestToLayoutsInProgress:(id)arg0 ;
-(void)removeNotificationRequestFromLayoutsInProgress:(id)arg0 ;


@end


#endif