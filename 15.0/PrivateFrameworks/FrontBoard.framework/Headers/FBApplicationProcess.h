// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBAPPLICATIONPROCESS_H
#define FBAPPLICATIONPROCESS_H

@class BKSProcessAssertion;


#import "FBProcess.h"
#import "FBProcessCPUStatistics.h"

@interface FBApplicationProcess : FBProcess {
    FBProcessCPUStatistics *_cpuStatistics;
    BKSProcessAssertion *_queue_mediaAssertion;
    BKSProcessAssertion *_queue_audioAssertion;
    BKSProcessAssertion *_queue_accessoryAssertion;
}


@property (nonatomic, getter=isConnectedToExternalAccessory) BOOL connectedToExternalAccessory; // ivar: _connectedToExternalAccessory
@property (readonly, nonatomic) CGFloat elapsedCPUTime;
@property (nonatomic, getter=isNowPlayingWithAudio) BOOL nowPlayingWithAudio; // ivar: _nowPlayingWithAudio
@property (nonatomic, getter=isRecordingAudio) BOOL recordingAudio; // ivar: _recordingAudio


+(id)_internalDebugEnvironmentVariables;
-(BOOL)isApplicationProcess;
-(id)_createBootstrapContext;
-(id)_queue_createLegacyAssertionForReason:(unsigned int)arg0 withName:(id)arg1 ;
-(void)_bootstrapDidComplete;
-(void)_finishInit;
-(void)_noteProcessDidExit:(id)arg0 ;
-(void)killForReason:(NSInteger)arg0 andReport:(BOOL)arg1 withDescription:(id)arg2 ;
-(void)killForReason:(NSInteger)arg0 andReport:(BOOL)arg1 withDescription:(id)arg2 completion:(id)arg3 ;


@end


#endif