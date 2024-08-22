// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDDSPSTREAM_H
#define ASDDSPSTREAM_H

@class NSString, NSUserDefaults, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;


#import "ASDStream.h"
#import "ASDAudioDevice.h"
#import "ASDStreamDSPConfiguration.h"
#import "ASDDSPGraph.h"

@interface ASDDSPStream : ASDStream {
    ASDAudioDevice *_owningDevice;
    unique_ptr<ASDDSPStreamHelper, std::default_delete<ASDDSPStreamHelper>> _streamHelper;
    list<ASDDSPGraphHelper, std::allocator<ASDDSPGraphHelper>> _graphHelpers;
    unique_ptr<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>, std::default_delete<caulk::concurrent::guarded_lookup_hash_table<unsigned long long, ASDDSPGraphHelper *, caulk::concurrent::guarded_lookup_hash_table_must_count_dereferences>>> _clientToGraphMap;
    NSObject<OS_dispatch_queue> *_dspQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSInteger _DSPCaptureType;
    NSString *_DSPCaptureDirectory;
    NSInteger _maximumFramesPerIOCycle;
    NSUserDefaults *_defaults;
    NSArray *_underlyingStreams;
    NSInteger _graphAudioValidationMode;
    NSInteger _ioReferenceCount;
    NSObject<OS_dispatch_source> *mHUPSource;
    AudioServerPlugInIOCycleInfo _lastIoCycleInfo;
    unsigned int _lastIoBufferFrameSizeSamples;
    NSUInteger _lastIoBufferWriteTime;
    *void _bufferOfZeroes;
    unsigned int _bufferOfZeroesSizeSamples;
    unsigned int _bufferOfZeroesSizeBytes;
    unsigned int _tailProcessingLengthInMs;
    unsigned int _tailMuteAUGraphParamID;
}


@property (retain, nonatomic) ASDStreamDSPConfiguration *currentDSPConfiguration; // ivar: _currentDSPConfiguration
@property (nonatomic) NSInteger graphAudioValidationMode;
@property (readonly, nonatomic) ASDDSPGraph *hardwareDSP;
@property (readonly, nonatomic) BOOL isRunning; // ivar: _isRunning
@property (nonatomic) BOOL keepGraphInitialized; // ivar: _keepGraphInitialized
@property (readonly, nonatomic) NSInteger maximumFramesPerIOCycle;
@property (nonatomic) BOOL processGraphOutputTailOnStop; // ivar: _processGraphOutputTailOnStop
@property (nonatomic) NSUInteger underlyingInputStreamCount; // ivar: _underlyingInputStreamCount
@property (nonatomic) NSUInteger underlyingOutputStreamCount; // ivar: _underlyingOutputStreamCount
@property (copy, nonatomic) NSArray *underlyingStreams;


-(BOOL)_allocateStreamingResources;
-(BOOL)addClientDSP:(id)arg0 forClient:(unsigned int)arg1 ;
-(BOOL)addClientDSP:(id)arg0 withKey:(NSUInteger)arg1 ;
-(BOOL)addHardwareDSP:(id)arg0 ;
-(BOOL)changePhysicalFormat:(id)arg0 ;
-(BOOL)enableBasicDSPCaptureOnGraph:(id)arg0 withLevel:(id)arg1 andDebugType:(NSInteger)arg2 ;
-(BOOL)graphStructureIsValid:(id)arg0 clientID:(NSUInteger)arg1 ;
-(BOOL)removeClientDSPForClient:(unsigned int)arg0 ;
-(BOOL)removeClientDSPwithKey:(NSUInteger)arg0 ;
-(BOOL)removeHardwareDSP;
-(NSInteger)getAudioDebugTypeWithDict:(id)arg0 ;
-(NSInteger)getDSPCaptureTypeFromDefault;
-(id)clientDSPForClient:(unsigned int)arg0 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)getASDAudioDefaultsPath;
-(id)getDSPCaptureDirectory;
-(id)initWithDirection:(unsigned int)arg0 withPlugin:(id)arg1 ;
-(id)initWithOwningDevice:(id)arg0 underlyingStreams:(id)arg1 direction:(unsigned int)arg2 plugin:(id)arg3 ;
-(id)processOutputBlock:(SEL)arg0 ;
-(id)readInputBlock:(SEL)arg0 ;
-(id)writeMixBlock:(SEL)arg0 ;
-(void)_allocateStreamingResourcesForGraphHelper:(*void)arg0 ;
-(void)_deallocateStreamingResources;
-(void)_resumeProcessing;
-(void)_suspendProcessing;
-(void)_updateLatency;
-(void)_updateMaximumFramesPerIOCycle;
-(void)dealloc;
-(void)disableMuteOnStop;
-(void)doSetUnderlyingStreams:(id)arg0 ;
-(void)enableDSPCaptureByType:(NSInteger)arg0 withGraph:(id)arg1 ;
-(void)enableDSPCaptureInAction;
-(void)enableDSPFileInjectionOnGraph:(id)arg0 withFormat:(id)arg1 ;
-(void)enableMuteOnStopUsingParam:(unsigned int)arg0 duration:(unsigned int)arg1 ;
-(void)resumeProcessing;
-(void)sleepForNumberOfSamples:(NSUInteger)arg0 ;
-(void)startStream;
-(void)stopStream;
-(void)suspendProcessing;
-(void)updateLatency;


@end


#endif