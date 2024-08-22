// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLREMOTETASKMANAGER_H
#define SLREMOTETASKMANAGER_H

@protocol OS_dispatch_queue, SLRemoteTaskManagerDelegate;

#import <Foundation/Foundation.h>


@interface SLRemoteTaskManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundConcurrentQueue; // ivar: _backgroundConcurrentQueue
@property (readonly, weak, nonatomic) NSObject<SLRemoteTaskManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL synchronous; // ivar: _synchronous
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue; // ivar: _targetSerialQueue


-(id)_serviceWithErrorHandler:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 targetSerialQueue:(id)arg1 synchronous:(BOOL)arg2 ;
// -(void)startTask:(id)arg0 withTimeout:(unk)arg1 timeoutHandler:(CGFloat)arg2 errorHandler:(id)arg3  ;


@end


#endif