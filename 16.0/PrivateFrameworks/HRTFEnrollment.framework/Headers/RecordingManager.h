// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECORDINGMANAGER_H
#define RECORDINGMANAGER_H

@class MOVWriterInterface, NSString;
@protocol MOVWriterInterfaceDelegate, RecordingManagerDelegate;

#import <Foundation/Foundation.h>


@interface RecordingManager : NSObject <MOVWriterInterfaceDelegate>

 {
    MOVWriterInterface *_writerInterface;
    NSString *_colorStreamID;
    NSString *_depthStreamID;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RecordingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)movSummaryItem:(float)arg0 appName:(id)arg1 ;
+(void)copyBuffer:(struct __CVBuffer *)arg0 dst:(struct __CVBuffer *)arg1 ;
-(BOOL)process:(struct __CVBuffer *)arg0 depthFrame:(struct __CVBuffer *)arg1 faceObject:(id)arg2 timestamp:(CGFloat)arg3 intrinsics:(struct ? )arg4 calibration:(id)arg5 exposureTime:(CGFloat)arg6 ;
-(id)initWithFileURL:(id)arg0 expectedFrameRate:(CGFloat)arg1 colorStreamId:(id)arg2 depthStreamId:(id)arg3 appName:(id)arg4 ;
-(void)didFinishRecording;
-(void)isReadyToRecord;
-(void)stopRecording;


@end


#endif