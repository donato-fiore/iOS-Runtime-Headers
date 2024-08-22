// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARAUDIORESULTSGENERATOR_H
#define EARAUDIORESULTSGENERATOR_H

@class NSMutableData, NSString;
@protocol EARAudioResultsGeneratorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EARAudioResultsGenerator : NSObject {
    shared_ptr<quasar::SyncPSRAudioProcessor> _audioProcessor;
    SystemConfig _sysConfig;
    NSUInteger _sampleRate;
    BOOL _isAudioSessionLive;
    NSMutableData *_entireResultMatrix;
    NSUInteger _globalNumVectors;
    NSUInteger _vectorSize;
    NSUInteger _sessionFrameCount;
}


@property (retain, nonatomic) NSString *configRoot; // ivar: _configRoot
@property (weak, nonatomic) NSObject<EARAudioResultsGeneratorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(void)initialize;
-(id)audioResultLastVector;
-(id)audioResultMatrix;
-(id)initWithConfigFile:(id)arg0 configRoot:(id)arg1 sampleRate:(NSUInteger)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(void)addAudio:(id)arg0 ;
-(void)endAudio;
-(void)resetForNewRequest;


@end


#endif