// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLCOLLABORATIONSIGNINGCONTROLLER_H
#define SLCOLLABORATIONSIGNINGCONTROLLER_H

@class NSString;
@protocol SLRemoteTaskManagerDelegate, OS_dispatch_queue;


#import "SLDServiceProxy.h"
#import "SLRemoteTaskManager.h"

@interface SLCollaborationSigningController : SLDServiceProxy <SLRemoteTaskManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronous; // ivar: _synchronous
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetSerialQueue; // ivar: _targetSerialQueue
@property (retain, nonatomic) SLRemoteTaskManager *taskManager; // ivar: _taskManager


-(id)initWithTargetSerialQueue:(id)arg0 synchronous:(BOOL)arg1 ;
-(id)taskServiceWithErrorHandler:(id)arg0 ;
-(void)signData:(id)arg0 forCollaborationIdentifier:(id)arg1 trackingPreventionSalt:(id)arg2 timeout:(CGFloat)arg3 completion:(id)arg4 ;
-(void)signSourceProcessWithMetadata:(id)arg0 timeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif