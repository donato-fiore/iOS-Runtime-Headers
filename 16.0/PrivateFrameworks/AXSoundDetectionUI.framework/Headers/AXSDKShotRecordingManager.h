// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSDKSHOTRECORDINGMANAGER_H
#define AXSDKSHOTRECORDINGMANAGER_H

@class NSMutableDictionary, NSArray, NSDictionary, SNDetectionResult, NSString, NSTimer;
@protocol SNResultsObserving, OS_dispatch_queue, AXSDKShotRecordingManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXHARingBuffer.h"
#import "AXSDKShotDetector.h"

@interface AXSDKShotRecordingManager : NSObject <SNResultsObserving>

 {
    CGFloat _sampleLength;
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;
    AXHARingBuffer *_audioRingBuffer;
    NSMutableDictionary *_detectionResultCollection;
}


@property (retain, nonatomic) NSArray *cachedCurrentAudio; // ivar: _cachedCurrentAudio
@property (retain, nonatomic) NSDictionary *cachedCurrentResults; // ivar: _cachedCurrentResults
@property (retain, nonatomic) SNDetectionResult *cachedDetectionResult; // ivar: _cachedDetectionResult
@property (retain, nonatomic) NSString *currentDetectionType; // ivar: _currentDetectionType
@property (retain, nonatomic) NSMutableDictionary *currentDetections; // ivar: _currentDetections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXSDKShotRecordingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDetectionInProgress; // ivar: _isDetectionInProgress
@property (nonatomic) int numNonDetections; // ivar: _numNonDetections
@property (nonatomic) int numObservations; // ivar: _numObservations
@property (nonatomic) BOOL shouldSendSimilarityWarning; // ivar: _shouldSendSimilarityWarning
@property (readonly) Class superclass;
@property (retain, nonatomic) AXSDKShotDetector *targetDetector; // ivar: _targetDetector
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


+(BOOL)_cleanupKShotFiles:(id)arg0 ;
+(id)_retrieveFilesOlderThan:(CGFloat)arg0 ;
+(id)defaults;
+(id)modelPathForDetector:(id)arg0 ;
+(id)requestForDetector:(id)arg0 ;
+(void)cleanupKShotFiles;
-(NSUInteger)nRecordingsSoFar;
-(id)_directory;
-(id)audioFileSettings;
-(id)initWithSampleLength:(CGFloat)arg0 bufferSize:(CGFloat)arg1 ;
-(id)path;
-(void)_cacheResultAndWaitForSave:(id)arg0 ;
-(void)_kShotShouldSaveCurrentSoundDidChange;
-(void)_recordCachedResultToFile;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;
-(void)request:(id)arg0 didProduceResult:(id)arg1 ;
-(void)reset;
-(void)saveDetectionResult:(id)arg0 ;
-(void)trackBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)updateShouldSendSimilarityWarning:(id)arg0 ;


@end


#endif