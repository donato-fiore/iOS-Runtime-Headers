// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXCOLORANALYSISREQUEST_H
#define PIPARALLAXCOLORANALYSISREQUEST_H

@class NURenderRequest;
@protocol NUImageBuffer;



@interface PIParallaxColorAnalysisRequest : NURenderRequest

@property (nonatomic) BOOL analyzeBackground; // ivar: _analyzeBackground
@property (nonatomic) CGFloat chromaThreshold; // ivar: _chromaThreshold
@property (nonatomic) CGFloat dominanceThreshold; // ivar: _dominanceThreshold
@property (nonatomic) NSInteger maxDominantColors; // ivar: _maxDominantColors
@property (nonatomic) CGRect normalizedClipRect; // ivar: _normalizedClipRect
@property (retain, nonatomic) NSObject<NUImageBuffer> *segmentationMatte; // ivar: _segmentationMatte


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif