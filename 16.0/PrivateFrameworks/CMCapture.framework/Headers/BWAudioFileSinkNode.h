// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWAUDIOFILESINKNODE_H
#define BWAUDIOFILESINKNODE_H

@protocol OS_dispatch_queue;


#import "BWFileSinkNode.h"
#import "FigStateMachine.h"
#import "FigCaptureAudioFileRecordingSettings.h"

@interface BWAudioFileSinkNode : BWFileSinkNode {
    FigStateMachine *_stateMachine;
    *OpaqueFigFormatWriter _formatWriter;
    *OpaqueCMByteStream _byteStream;
    int _trackID;
    BOOL _didBeginFileWriterSession;
    char * _parentPath;
    FigCaptureAudioFileRecordingSettings *_settings;
    ? _curFileDuration;
    NSUInteger _curFileSize;
    NSUInteger _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> *_propertySyncQueue;
}




+(void)initialize;
-(NSUInteger)lastFileSize;
-(id)initWithSinkID:(id)arg0 ;
-(id)nodeSubType;
-(struct ? )lastFileDuration;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif