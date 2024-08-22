// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSAUDIOFILELOG_H
#define CSAUDIOFILELOG_H

@class NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSAudioFileLog : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *OpaqueExtAudioFile _audioFile;
    AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}




+(id)sharedInstance;
-(id)_audioLogDirectory;
-(id)_getOrCreateAudioLogDirectory;
-(id)_makeTimestampedAudioLogFilenameWithPrefix:(id)arg0 suffix:(id)arg1 ;
-(id)_nowString;
-(id)init;
-(void)_closeAudioFile;
-(void)appendAudioData:(id)arg0 ;
-(void)dealloc;
-(void)startRecording;
-(void)stopRecording;


@end


#endif