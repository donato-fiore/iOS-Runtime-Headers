// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSYNTHESISPROVIDERREQUESTHANDLER_H
#define TTSSYNTHESISPROVIDERREQUESTHANDLER_H

@class AVSpeechSynthesisProviderRequest, NSMutableArray;
@protocol TTSSynthesisProviderHandlerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderRequestHandler : NSObject

@property (nonatomic) NSUInteger bytesPerFrame; // ivar: _bytesPerFrame
@property (nonatomic) unsigned int currentAudioBufferFrameCount; // ivar: _currentAudioBufferFrameCount
@property (nonatomic) NSInteger currentMarkerFrameLimit; // ivar: _currentMarkerFrameLimit
@property (weak, nonatomic) NSObject<TTSSynthesisProviderHandlerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger effectiveMarkerFrameLimit; // ivar: _effectiveMarkerFrameLimit
@property (nonatomic) unsigned int generatedPlayableFrames; // ivar: _generatedPlayableFrames
@property (nonatomic) BOOL isFinishedReceivingBuffers; // ivar: _isFinishedReceivingBuffers
@property (retain, nonatomic) AVSpeechSynthesisProviderRequest *managingSpeechRequest; // ivar: _managingSpeechRequest
@property (nonatomic) NSUInteger minimumFrameCushion; // ivar: _minimumFrameCushion
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSMutableArray *queuedBuffers; // ivar: _queuedBuffers
@property (retain, nonatomic) NSMutableArray *queuedMarkers; // ivar: _queuedMarkers


-(id)_dequeueMarkersForFrameRange:(NSInteger)arg0 end:(NSInteger)arg1 ;
-(id)initWithRequest:(id)arg0 bytesPerFrame:(NSUInteger)arg1 ;
-(void)addBuffers:(id)arg0 ;
-(void)addMarkers:(id)arg0 ;
-(void)completedRequestRendering;
-(void)setFrameCushion:(unsigned int)arg0 ;
-(void)updatePlayableBuffers;


@end


#endif