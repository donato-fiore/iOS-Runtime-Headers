// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFIGASSETWRITERTRACK_H
#define AVFIGASSETWRITERTRACK_H

@class NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVMediaFileType.h"

@interface AVFigAssetWriterTrack : NSObject {
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_queue> *_aboveHighWaterLevelQueue;
    BOOL _aboveHighWaterLevel;
    NSOperationQueue *_operationQueue;
}


@property (readonly, getter=isAboveHighWaterLevel) BOOL aboveHighWaterLevel;
@property (readonly, nonatomic) BOOL encoderSupportsMultiPass;
@property (readonly, nonatomic) *OpaqueFigAssetWriter figAssetWriter; // ivar: _figAssetWriter
@property (readonly, nonatomic) AVMediaFileType *mediaFileType; // ivar: _mediaFileType
@property (readonly, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (readonly, nonatomic) *__CVPixelBufferPool pixelBufferPool;
@property (nonatomic) ? sampleBufferCoalescingInterval; // ivar: _sampleBufferCoalescingInterval
@property (readonly, nonatomic) int trackID; // ivar: _trackID


+(id)assetWriterTrackWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(id)arg1 mediaFileType:(id)arg2 formatSpecification:(id)arg3 sourcePixelBufferAttributes:(id)arg4 multiPass:(BOOL)arg5 attachedAdaptor:(id)arg6 error:(*id)arg7 ;
-(BOOL)addPixelBuffer:(struct __CVBuffer *)arg0 atPresentationTime:(struct ? )arg1 error:(*id)arg2 ;
-(BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)beginPassReturningError:(*id)arg0 ;
-(BOOL)markEndOfDataReturningError:(*id)arg0 ;
-(id)init;
-(id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(id)arg1 mediaFileType:(id)arg2 formatSpecification:(id)arg3 sourcePixelBufferAttributes:(id)arg4 multiPass:(BOOL)arg5 error:(*id)arg6 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg0 sourcePixelBufferAttributes:(id)arg1 multiPass:(BOOL)arg2 error:(*id)arg3 ;
-(void)_figAssetWriterDidDropBelowLowWaterLevelForTrackID:(int)arg0 ;
-(void)_refreshAboveHighWaterLevel;
-(void)dealloc;
-(void)endPassWithCompletionHandler:(id)arg0 ;
-(void)prepareToEndSession;
-(void)setAlternateGroupID:(short)arg0 ;
-(void)setExcludeFromAutoSelection:(BOOL)arg0 ;
-(void)setExtendedLanguageTag:(id)arg0 ;
-(void)setFigDimensions:(id)arg0 ;
-(void)setFigMetadata:(id)arg0 ;
-(void)setFigTrackMatrix:(id)arg0 ;
-(void)setFormatDescriptions:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setLayer:(NSInteger)arg0 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg0 ;
-(void)setMediaDataLocation:(id)arg0 ;
-(void)setMediaTimeScale:(int)arg0 ;
-(void)setPreferredChunkAlignment:(NSInteger)arg0 ;
-(void)setPreferredChunkDuration:(struct ? )arg0 ;
-(void)setPreferredChunkSize:(NSInteger)arg0 ;
-(void)setProvisionalAlternateGroupID:(short)arg0 ;
-(void)setSampleReferenceBaseURL:(id)arg0 ;
-(void)setTrackVolume:(float)arg0 ;


@end


#endif