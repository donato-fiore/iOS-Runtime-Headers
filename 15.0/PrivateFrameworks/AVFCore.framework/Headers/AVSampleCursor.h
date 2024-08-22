// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSAMPLECURSOR_H
#define AVSAMPLECURSOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVSampleCursorInternal.h"

@interface AVSampleCursor : NSObject <NSCopying>

 {
    AVSampleCursorInternal *_sampleCursor;
}




+(id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg0 ;
+(void)initialize;
-(BOOL)canProvideSampleBuffers;
-(BOOL)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)arg0 ;
-(BOOL)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)arg0 ;
-(NSInteger)comparePositionInDecodeOrderWithPositionOfCursor:(id)arg0 ;
-(NSInteger)currentSampleIndexInChunk;
-(NSInteger)samplesRequiredForDecoderRefresh;
-(NSInteger)stepInDecodeOrderByCount:(NSInteger)arg0 ;
-(NSInteger)stepInPresentationOrderByCount:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentChunkStorageURL;
-(id)currentSampleDependencyAttachments;
-(id)description;
-(id)init;
-(id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor *)arg0 ;
-(struct ? )currentChunkInfo;
-(struct ? )currentChunkStorageRange;
-(struct ? )currentSampleAudioDependencyInfo;
-(struct ? )currentSampleDependencyInfo;
-(struct ? )currentSampleDuration;
-(struct ? )currentSampleStorageRange;
-(struct ? )currentSampleSyncInfo;
-(struct ? )decodeTimeStamp;
-(struct ? )presentationTimeStamp;
-(struct ? )stepByDecodeTime:(struct ? )arg0 ;
-(struct ? )stepByDecodeTime:(struct ? )arg0 wasPinned:(*BOOL)arg1 ;
-(struct ? )stepByPresentationTime:(struct ? )arg0 ;
-(struct ? )stepByPresentationTime:(struct ? )arg0 wasPinned:(*BOOL)arg1 ;
-(struct OpaqueFigSampleCursor *)_figSampleCursor;
-(struct opaqueCMFormatDescription *)copyCurrentSampleFormatDescription;
-(struct opaqueCMSampleBuffer *)createSampleBufferForCurrentSampleReturningError:(*id)arg0 ;
-(struct opaqueCMSampleBuffer *)createSampleBufferFromCurrentSampleToEndCursor:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif