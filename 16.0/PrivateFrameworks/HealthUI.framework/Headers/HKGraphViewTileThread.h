// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGRAPHVIEWTILETHREAD_H
#define HKGRAPHVIEWTILETHREAD_H

@class NSThread, NSLock, NSMutableArray;
@protocol OS_dispatch_semaphore;


#import "HKGraphView.h"

@interface HKGraphViewTileThread : NSThread

@property (weak, nonatomic) HKGraphView *graphView; // ivar: _graphView
@property (readonly, nonatomic) NSLock *queueLock; // ivar: _queueLock
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore; // ivar: _queueSemaphore
@property (retain, nonatomic) NSMutableArray *rendererQueue; // ivar: _rendererQueue


-(BOOL)_laterRenderingExists:(id)arg0 ;
-(id)initWithGraphView:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)scheduleRedrawUsingRenderer:(id)arg0 ;


@end


#endif