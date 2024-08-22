// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWUNITTESTSTREAMINGFACEDETECTOPERATION_H
#define AWUNITTESTSTREAMINGFACEDETECTOPERATION_H

@class BKFaceDetectOperation, NSTimer;
@protocol OS_dispatch_queue;


#import "AWUnitTestPearlStreamingDevice.h"

@interface AWUnitTestStreamingFaceDetectOperation : BKFaceDetectOperation {
    NSObject<OS_dispatch_queue> *_awQueue;
    NSTimer *_streamingtimer;
}


@property (weak, nonatomic) AWUnitTestPearlStreamingDevice *unitTestDevice; // ivar: _unitTestDevice


-(BOOL)startWithError:(*id)arg0 ;
-(id)init;
-(void)awDeliverStreamingEvent;
-(void)cancel;
-(void)dealloc;
-(void)startWithReply:(id)arg0 ;


@end


#endif