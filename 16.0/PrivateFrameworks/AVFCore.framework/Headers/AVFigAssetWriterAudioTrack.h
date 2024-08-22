// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFIGASSETWRITERAUDIOTRACK_H
#define AVFIGASSETWRITERAUDIOTRACK_H

@class NSMutableArray;


#import "AVFigAssetWriterTrack.h"

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
    NSMutableArray *_pendingAudioSampleBuffers;
}




-(BOOL)_flushPendingSampleBuffersReturningError:(*id)arg0 ;
-(BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(BOOL)markEndOfDataReturningError:(*id)arg0 ;
-(id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaType:(id)arg1 mediaFileType:(id)arg2 formatSpecification:(id)arg3 sourcePixelBufferAttributes:(id)arg4 multiPass:(BOOL)arg5 error:(*id)arg6 ;
-(int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg0 sourcePixelBufferAttributes:(id)arg1 multiPass:(BOOL)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)prepareToEndSession;


@end


#endif