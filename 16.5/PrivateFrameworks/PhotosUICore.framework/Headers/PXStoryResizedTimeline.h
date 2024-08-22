// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYRESIZEDTIMELINE_H
#define PXSTORYRESIZEDTIMELINE_H



#import "PXStoryTransformedTimeline.h"

@interface PXStoryResizedTimeline : PXStoryTransformedTimeline

@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) CGSize targetSize; // ivar: _targetSize


-(id)description;
-(id)initWithOriginalTimeline:(id)arg0 targetSize:(struct CGSize )arg1 options:(NSUInteger)arg2 ;
-(struct CGRect )transformedRectForOriginalClipInfo:(struct ? *)arg0 originalRect:(struct CGRect )arg1 ;
-(struct CGSize )originalSize;


@end


#endif