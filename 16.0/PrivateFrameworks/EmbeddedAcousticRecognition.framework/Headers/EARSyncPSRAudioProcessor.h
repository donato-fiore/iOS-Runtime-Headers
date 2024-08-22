// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EARSYNCPSRAUDIOPROCESSOR_H
#define EARSYNCPSRAUDIOPROCESSOR_H

@class NSString;
@protocol EARSyncPSRAudioProcessorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EARSyncPSRAudioProcessor : NSObject {
    shared_ptr<quasar::SyncPSRAudioProcessor> _audioProcessor;
    SystemConfig _sysConfig;
    NSUInteger _sampleRate;
    CGFloat _scoreReportTimestamp;
    NSInteger _maxBufferSizeSeconds;
}


@property (retain, nonatomic) NSString *configRoot; // ivar: _configRoot
@property (weak, nonatomic) NSObject<EARSyncPSRAudioProcessorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(void)initialize;
-(NSUInteger)getProcessedAudioDurationMs;
-(id)getLatestSuperVector;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 queue:(id)arg4 maxBufferSizeSeconds:(NSInteger)arg5 ;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 queue:(id)arg4 maxBufferSizeSeconds:(NSInteger)arg5 memoryLock:(BOOL)arg6 ;
-(void)addAudio:(id)arg0 ;
-(void)endAudio;
-(void)resetForNewRequest;


@end


#endif