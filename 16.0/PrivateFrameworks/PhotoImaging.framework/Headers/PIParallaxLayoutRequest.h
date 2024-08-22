// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXLAYOUTREQUEST_H
#define PIPARALLAXLAYOUTREQUEST_H

@class NURenderRequest;
@protocol PFParallaxLayoutConfiguration, PFParallaxAssetRegions, NUImageBuffer;



@interface PIParallaxLayoutRequest : NURenderRequest

@property (retain, nonatomic) NSObject<PFParallaxLayoutConfiguration> *layoutConfiguration; // ivar: _layoutConfiguration
@property (retain, nonatomic) NSObject<PFParallaxAssetRegions> *layoutRegions; // ivar: _layoutRegions
@property (nonatomic) NSUInteger segmentationClassification; // ivar: _segmentationClassification
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationConfidenceMap; // ivar: _segmentationConfidenceMap
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationMatte; // ivar: _segmentationMatte


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif