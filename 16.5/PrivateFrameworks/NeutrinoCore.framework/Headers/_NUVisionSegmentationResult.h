// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUVISIONSEGMENTATIONRESULT_H
#define _NUVISIONSEGMENTATIONRESULT_H

@class NURenderResult, NSString;
@protocol NUVisionSegmentationResult, NUImageBuffer, NURenderStatistics;



@interface _NUVisionSegmentationResult : NURenderResult <NUVisionSegmentationResult>

 {
    id<NUImageBuffer> *_buffer;
    id<NUImageBuffer> *_confidenceBuffer;
}


@property (readonly, nonatomic) NSObject<NUImageBuffer> *confidenceMapBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NUImageBuffer> *matteImageBuffer;
@property (nonatomic) NSInteger segmentationType; // ivar: _segmentationType
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSegmentedMatteBuffer:(id)arg0 confidenceMapBuffer:(id)arg1 ;


@end


#endif