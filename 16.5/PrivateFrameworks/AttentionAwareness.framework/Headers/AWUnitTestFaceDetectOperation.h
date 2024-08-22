// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWUNITTESTFACEDETECTOPERATION_H
#define AWUNITTESTFACEDETECTOPERATION_H

@class BKFaceDetectOperation;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "AWUnitTestPearlDevice.h"

@interface AWUnitTestFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSObject<OS_dispatch_source> *_awInitTimer;
    NSObject<OS_dispatch_source> *_deadlineTimer;
    BOOL _started;
    BOOL _finished;
}


@property (weak, nonatomic) AWUnitTestPearlDevice *unitTestDevice; // ivar: _unitTestDevice


-(BOOL)startWithError:(*id)arg0 ;
-(NSInteger)state;
-(id)init;
-(void)awDeliverFaceFound;
-(void)awFinishWithReason:(NSInteger)arg0 ;
-(void)awSetFaceDetectError;
-(void)awSetFaceFound;
-(void)cancel;
-(void)dealloc;
-(void)startWithReply:(id)arg0 ;


@end


#endif