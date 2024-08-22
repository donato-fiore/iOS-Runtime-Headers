// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMIMAGESEQUENCEANALYZER_H
#define ICDOCCAMIMAGESEQUENCEANALYZER_H

@class NSMutableArray, NSDictionary, VNSequenceRequestHandler;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICDocCamImageSequenceAnalyzer : NSObject {
    NSMutableArray *_frameArray;
    NSObject<OS_dispatch_semaphore> *_frameArraySem;
    NSObject<OS_dispatch_queue> *_dq;
    NSDictionary *_sessionOptions;
    id *_callback;
    NSObject<OS_dispatch_semaphore> *_queueSizeSem;
    VNSequenceRequestHandler *_seqHandler;
    BOOL _bRealTime;
    BOOL _bSynchronous;
}




-(id)initWithOptions:(id)arg0 callback:(id)arg1 ;
-(void)addFrame:(struct __CVBuffer *)arg0 metaData:(id)arg1 frameOptions:(id)arg2 rectangleRequest:(id)arg3 pixelFocalLength:(float)arg4 cameraIntrinsicData:(struct __CFData *)arg5 ;
-(void)dealloc;
-(void)finish;


@end


#endif