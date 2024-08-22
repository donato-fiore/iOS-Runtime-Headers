// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EARPSRAUDIOPROCESSOR_H
#define EARPSRAUDIOPROCESSOR_H

@class NSString;
@protocol EARPSRAudioProcessorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EARPSRAudioProcessor : NSObject {
    shared_ptr<quasar::PSRAudioProcessor> _audioProcessor;
    SystemConfig _sysConfig;
    NSUInteger _sampleRate;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSString *configRoot; // ivar: _configRoot
@property (weak, nonatomic) NSObject<EARPSRAudioProcessorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(void)initialize;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 ;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)_startComputeTask;
-(void)addAudio:(id)arg0 ;
-(void)dealloc;
-(void)endAudio;
-(void)resetForNewRequest;


@end


#endif