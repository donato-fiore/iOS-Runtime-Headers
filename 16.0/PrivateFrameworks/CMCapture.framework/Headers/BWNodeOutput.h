// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEOUTPUT_H
#define BWNODEOUTPUT_H

@class NSMutableArray, NSMutableDictionary, NSString, NSArray;
@protocol BWNodeOutputConsumer;

#import <Foundation/Foundation.h>

#import "BWNodeConnection.h"
#import "BWFormat.h"
#import "BWFormatRequirements.h"
#import "BWDataBufferPool.h"
#import "BWPixelBufferPool.h"
#import "BWMemoryPool.h"
#import "BWNode.h"
#import "BWPointCloudFormat.h"
#import "BWNodeOutputMediaConfiguration.h"
#import "BWNodeOutputMediaProperties.h"
#import "BWVideoFormat.h"

@interface BWNodeOutput : NSObject {
    id<BWNodeOutputConsumer> *_consumer;
    BOOL _consumerIsANodeConnection;
    ? _lastValidPTS;
    ? _lastEmittedPTS;
    *OpaqueFigSimpleMutex _poolPreallocationMutex;
    NSMutableArray *_poolPreallocationCompletionHandlers;
    BOOL _poolPreallocationDone;
    BOOL _receivedEOD;
    NSMutableDictionary *_attachedMediaConfigurations;
    NSMutableDictionary *_attachedMediaProperties;
}


@property (nonatomic) NSInteger configurationID; // ivar: _configurationID
@property (readonly, nonatomic) BWNodeConnection *connection;
@property (nonatomic) NSObject<BWNodeOutputConsumer> *consumer;
@property (nonatomic) BOOL discardsSampleData; // ivar: _discardsSampleData
@property (nonatomic) BOOL dropsSampleBuffersWithUnexpectedPTS; // ivar: _dropsSampleBuffersWithUnexpectedPTS
@property (copy, nonatomic) BWFormat *format;
@property (copy, nonatomic) BWFormatRequirements *formatRequirements;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (readonly, nonatomic) NSInteger liveConfigurationID; // ivar: _liveConfigurationID
@property (readonly, nonatomic) BWDataBufferPool *liveDataBufferPool;
@property (readonly, nonatomic) BWFormat *liveFormat;
@property (readonly, nonatomic) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) float maxSampleDataOutputRate; // ivar: _maxSampleDataOutputRate
@property (readonly, nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (readonly, nonatomic) BOOL mediaTypeIsPointCloud; // ivar: _mediaTypeIsPointCloud
@property (readonly, nonatomic) BOOL mediaTypeIsVideo; // ivar: _mediaTypeIsVideo
@property (retain, nonatomic) BWMemoryPool *memoryPool; // ivar: _memoryPool
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BWNode *node; // ivar: _node
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped; // ivar: _numberOfBuffersDropped
@property (readonly, nonatomic) unsigned int numberOfBuffersEmitted; // ivar: _numberOfBuffersEmitted
@property (nonatomic) int owningNodeRetainedBufferCount;
@property (nonatomic) int passthroughMode;
@property (nonatomic) BOOL pixelBufferPoolProvidesBackPressure;
@property (readonly, nonatomic) BWPointCloudFormat *pointCloudFormat;
@property (nonatomic) BOOL poolPreallocationEnabled; // ivar: _poolPreallocationEnabled
@property (readonly, nonatomic) BWDataBufferPool *preparedDataBufferPool;
@property (readonly, nonatomic) BWPixelBufferPool *preparedPixelBufferPool;
@property (readonly, nonatomic) BWNodeOutputMediaConfiguration *primaryMediaConfiguration; // ivar: _primaryMediaConfiguration
@property (readonly, nonatomic) BWNodeOutputMediaProperties *primaryMediaProperties; // ivar: _primaryMediaProperties
@property (nonatomic) BOOL providesDataBufferPool;
@property (nonatomic) BOOL providesPixelBufferPool;
@property (readonly, nonatomic) NSArray *resolvedAttachedMediaKeys;
@property (nonatomic) int retainedBufferCount;
@property (readonly, nonatomic) NSArray *specifiedAttachedMediaKeys;
@property (retain, nonatomic) BWNodeOutputMediaConfiguration *unspecifiedAttachedMediaConfiguration; // ivar: _unspecifiedAttachedMediaConfiguration
@property (readonly, nonatomic) BWVideoFormat *videoFormat;


+(void)initialize;
-(id)_mediaConfigurationForBufferCountOfPossiblyUnspecifiedAttachedMediaKey:(id)arg0 ;
-(id)_mediaConfigurationForPossiblyUnspecifiedAttachedMediaKey:(id)arg0 ;
-(id)_mediaPropertiesForPossiblyUnspecifiedAttachedMediaKey:(id)arg0 ;
-(id)attachedMediaKeyDrivenByInputAttachedMediaKey:(id)arg0 inputIndex:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithMediaType:(unsigned int)arg0 node:(id)arg1 ;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg0 ;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg0 ;
-(int)_passthroughModeForAttachedMediaKey:(id)arg0 ;
-(void)_clearAllMediaProperties;
-(void)_setMediaProperties:(id)arg0 forAttachedMediaKey:(id)arg1 ;
-(void)addPoolPreallocationCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)emitDroppedSample:(id)arg0 ;
-(void)emitNodeError:(id)arg0 ;
-(void)emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)emitStillImagePrewarmMessageWithSettings:(id)arg0 ;
-(void)emitStillImageReferenceFrameBracketedCaptureSequenceNumberMessageWithSequenceNumber:(int)arg0 ;
-(void)invalidate;
-(void)makeConfiguredFormatLive;
-(void)markEndOfLiveOutput;
-(void)prepareForConfiguredFormatToBecomeLive;
-(void)setMediaConfiguration:(id)arg0 forAttachedMediaKey:(id)arg1 ;
-(void)setPreparedSharedDataBufferPool:(id)arg0 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg0 ;
-(void)suspendResources;


@end


#endif