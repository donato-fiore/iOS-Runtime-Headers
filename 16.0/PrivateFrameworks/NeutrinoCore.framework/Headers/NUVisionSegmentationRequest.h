// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUVISIONSEGMENTATIONREQUEST_H
#define NUVISIONSEGMENTATIONREQUEST_H

@protocol NUScalePolicy;


#import "NURenderRequest.h"

@interface NUVisionSegmentationRequest : NURenderRequest

@property (nonatomic) BOOL produceConfidenceMap; // ivar: _produceConfidenceMap
@property (retain, nonatomic) NSObject<NUScalePolicy> *scalePolicy; // ivar: _scalePolicy
@property (nonatomic) NSInteger segmentationType; // ivar: _segmentationType
@property (nonatomic) NSInteger visionSegmentationPolicy; // ivar: _visionSegmentationPolicy


+(void)warmUp;
-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif