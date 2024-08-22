// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AWATTENTIONSTREAMER_H
#define AWATTENTIONSTREAMER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "StreamingOperation.h"
#import "AWSampleLogger.h"

@interface AWAttentionStreamer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    StreamingOperation *_faceDetectStreamer;
    BOOL _unitTestMode;
    AWSampleLogger *_sampleLogger;
}




-(BOOL)isStreamerRunningWithMask:(NSUInteger)arg0 ;
-(id)cancelEventStreamWithMask:(NSUInteger)arg0 ;
-(id)initForUnitTest:(BOOL)arg0 withMask:(NSUInteger)arg1 ;
// -(id)streamEventsWithMask:(NSUInteger)arg0 block:(id)arg1 options:(unk)arg2  ;
-(void)logStreamComplete:(NSUInteger)arg0 identifier:(id)arg1 duration:(NSUInteger)arg2 ERActivated:(BOOL)arg3 ;
// -(void)setNotificationHandler:(id)arg0 withMask:(unk)arg1  ;


@end


#endif