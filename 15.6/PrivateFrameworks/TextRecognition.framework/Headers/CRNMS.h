// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRNMS_H
#define CRNMS_H


#import <Foundation/Foundation.h>


@interface CRNMS : NSObject {
    deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> _preNMSForests;
    PyramidNMS<unsigned short, double, unsigned char> _pyrNMS;
    deque<nms::RectForest<unsigned short, double>, std::allocator<nms::RectForest<unsigned short, double>>> _postNMSForests;
    NSUInteger _forestFeatureType;
    NSUInteger _outputTextFeatureLevel;
}




-(BOOL)addTextDetectorQuadFeatures:(*void)arg0 withInputSize:(struct CGSize )arg1 andScoreMap:(struct vImage_Buffer *)arg2 options:(id)arg3 ;
-(BOOL)addTextDetectorQuadFeatures:(*void)arg0 withInputSize:(struct CGSize )arg1 scoreMap:(struct vImage_Buffer *)arg2 andScoreMapScaleFactor:(CGFloat)arg3 options:(id)arg4 ;
-(BOOL)addTextDetectorQuadFeatures:(*void)arg0 withInputSize:(struct CGSize )arg1 scoreMap:(struct vImage_Buffer *)arg2 scoreMapScaleFactor:(CGFloat)arg3 andTileRects:(id)arg4 options:(id)arg5 ;
-(BOOL)buildRectForest:(*void)arg0 fromTextDetectorQuadFeatures:(*void)arg1 forestFeatureType:(NSUInteger)arg2 withInputSize:(struct CGSize )arg3 scoreMap:(struct vImage_Buffer *)arg4 andScoreMapScaleFactor:(CGFloat)arg5 options:(id)arg6 ;
-(BOOL)buildRectForest:(*void)arg0 fromTextDetectorQuadFeatures:(*void)arg1 forestFeatureType:(NSUInteger)arg2 withInputSize:(struct CGSize )arg3 scoreMap:(struct vImage_Buffer *)arg4 scoreMapScaleFactor:(CGFloat)arg5 andTileRects:(id)arg6 options:(id)arg7 ;
-(BOOL)preprocessScoreMaps;
-(NSUInteger)convertSubTextFeatures:(id)arg0 toRects:(*void)arg1 ;
-(id)buildTextFeaturesFromRectForest:(*void)arg0 byEdge:(NSUInteger)arg1 options:(id)arg2 ;
-(id)generateConsolidatedTextFeatures:(id)arg0 ;
-(id)generateConsolidatedTextFeatures:(id)arg0 withScaleIds:(*void)arg1 ;
-(id)getTextFeatureFromQuadAngleDatum:(*void)arg0 ;
-(id)initForRevision:(NSUInteger)arg0 ;
-(id)initWithNMSMethodType:(NSUInteger)arg0 NMSScoreType:(NSUInteger)arg1 ;
-(void)fillRectForestDatum:(*void)arg0 asDimType:(NSUInteger)arg1 withCGRect:(struct CGRect *)arg2 ;
-(void)fillRectForestDatum:(*void)arg0 asDimType:(NSUInteger)arg1 withCRTextDetectorQuad:(struct CRTextDetectorQuad *)arg2 andInputSize:(struct CGSize )arg3 ;
-(void)fillRectForestDatum:(*void)arg0 asDimType:(NSUInteger)arg1 withQuad:(*void)arg2 andDimType:(NSUInteger)arg3 ;
-(void)fillTextFeature:(id)arg0 withRectDatum:(*void)arg1 ;


@end


#endif