// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVIDIRECTIONALITYSIGNALPROVIDER_H
#define NVIDIRECTIONALITYSIGNALPROVIDER_H

@class NSMutableDictionary, NSString, NSHashTable, SNAudioStreamAnalyzer;
@protocol NviAudioDataReceiver, SNResultsObserving, NviSignalProvider, NviAssetsProvider, NviAudioDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NviAudioFileWriter.h"
#import "NviDirectionalitySignalData.h"
#import "NviContext.h"
#import "NviDataLogger.h"

@interface NviDirectionalitySignalProvider : NSObject <NviAudioDataReceiver, SNResultsObserving, NviSignalProvider>



@property (retain, nonatomic) NSObject<NviAssetsProvider> *assetsProvider; // ivar: _assetsProvider
@property (retain, nonatomic) NviAudioFileWriter *audioFileWriter; // ivar: _audioFileWriter
@property (retain, nonatomic) NSMutableDictionary *azDistribution; // ivar: _azDistribution
@property (nonatomic) float currEstimatedAzimuth; // ivar: _currEstimatedAzimuth
@property (nonatomic) NSUInteger currNumSamplesProcessed; // ivar: _currNumSamplesProcessed
@property (nonatomic) NSInteger currReqFirstSampleId; // ivar: _currReqFirstSampleId
@property (retain, nonatomic) NSObject<NviAudioDataSource> *dataSrc; // ivar: _dataSrc
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property (nonatomic) float dirAzimuthEMAParam; // ivar: _dirAzimuthEMAParam
@property (retain, nonatomic) NviDirectionalitySignalData *dirSigData; // ivar: _dirSigData
@property (nonatomic) BOOL doneProcessing; // ivar: _doneProcessing
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NviContext *nviCtx; // ivar: _nviCtx
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL receiveOnlyProcessedChannelData;
@property (retain, nonatomic) NviDataLogger *sigDataWriter; // ivar: _sigDataWriter
@property (readonly, nonatomic) NSUInteger sigType;
@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer; // ivar: _snAudioStreamAnalyzer
@property (readonly) Class superclass;


-(id)initWithDataSource:(id)arg0 assetsProvider:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)audioChunkAvailable:(id)arg0 numChannels:(NSUInteger)arg1 numSamplesPerChannel:(NSUInteger)arg2 startSampleId:(NSUInteger)arg3 atAbsMachTimestamp:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)request:(id)arg0 didFailWithError:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)reset;
-(void)startWithNviContext:(id)arg0 didStartHandler:(id)arg1 ;
-(void)stopWithDidStopHandler:(id)arg0 ;


@end


#endif