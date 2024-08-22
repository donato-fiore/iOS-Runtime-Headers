// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EARCAESURASILENCEPOSTERIORGENERATOR_H
#define EARCAESURASILENCEPOSTERIORGENERATOR_H

@class NSString;
@protocol OS_dispatch_queue, EARCaesuraSilencePosteriorGeneratorDelegate;

#import <Foundation/Foundation.h>


@interface EARCaesuraSilencePosteriorGenerator : NSObject {
    shared_ptr<quasar::SilencePosteriorGenerator> _silenceGenerator;
    NSString *_configFile;
    NSUInteger _samplingRate;
    NSObject<OS_dispatch_queue> *_spgQueue;
}


@property (weak, nonatomic) NSObject<EARCaesuraSilencePosteriorGeneratorDelegate> *delegate; // ivar: _delegate


+(void)initialize;
-(NSInteger)getFrameDurationMs;
-(id)initWithConfigFile:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 samplingRate:(NSUInteger)arg1 ;
-(id)initWithConfigFile:(id)arg0 samplingRate:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)_startComputeTask;
-(void)addAudio:(id)arg0 numSamples:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)endAudio;
-(void)resetForNewRequest;


@end


#endif