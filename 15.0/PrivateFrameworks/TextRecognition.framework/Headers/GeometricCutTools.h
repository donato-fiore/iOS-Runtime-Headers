// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMETRICCUTTOOLS_H
#define GEOMETRICCUTTOOLS_H


#import <Foundation/Foundation.h>


@interface GeometricCutTools : NSObject



+(BOOL)derotateContentsOf:(id)arg0 inImage:(struct vImage_Buffer )arg1 andOutputTo:(struct vImage_Buffer *)arg2 withPadding:(struct CGPoint )arg3 networkInputSize:(struct CGSize )arg4 ;
+(BOOL)isPointArrayARectangle:(id)arg0 ;
+(BOOL)lineThroughPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 andImageWithSize:(struct CGSize )arg2 intersectAtPoint:(struct CGPoint *)arg3 andPoint:(struct CGPoint *)arg4 ;
+(BOOL)lineThroughPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 andLineThroughPoint:(struct CGPoint )arg2 andPoint:(struct CGPoint )arg3 intersectAt:(struct CGPoint *)arg4 ;
+(BOOL)lineThroughPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 andRectangle:(struct CGRect )arg2 intersectAtPoint:(struct CGPoint *)arg3 andPoint:(struct CGPoint *)arg4 ;
+(BOOL)lineThroughPoint:(struct CGPoint )arg0 andPoint:(struct CGPoint )arg1 andSegmentStartingAt:(struct CGPoint )arg2 andEndingAt:(struct CGPoint )arg3 intersectAt:(struct CGPoint *)arg4 ;
+(id)boxInNormalizedSpace:(id)arg0 toImageSpaceWithSize:(struct CGSize )arg1 plusPadding:(struct CGPoint )arg2 destSize:(struct CGSize *)arg3 networkInputSize:(struct CGSize )arg4 ;
+(id)cleanTextDetectorOutput:(id)arg0 ;
+(id)findCorrectedBoundingBoxOfTextFeature:(id)arg0 inImageWithSize:(struct CGSize )arg1 ;
+(id)geometricRecognitionCandidatesOf:(id)arg0 inDerotatedRegion:(struct vImage_Buffer )arg1 withPadding:(struct CGPoint )arg2 fromCorrectedBoundingBox:(id)arg3 inImageWithSize:(struct CGSize )arg4 withNetwork:(*void)arg5 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )arg6 invert:(BOOL)arg7 recognitionWindowSize:(struct CGSize )arg8 ;
+(id)geometricRecognitionOf:(id)arg0 inDerotatedRegion:(struct vImage_Buffer )arg1 withPadding:(struct CGPoint )arg2 fromCorrectedBoundingBox:(id)arg3 inImageWithSize:(struct CGSize )arg4 withCodeMap:(*int)arg5 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )arg6 invert:(BOOL)arg7 networkInputSize:(struct CGSize )arg8 ;
+(id)geometricRecognitionOf:(id)arg0 inDerotatedRegion:(struct vImage_Buffer )arg1 withPadding:(struct CGPoint )arg2 fromCorrectedBoundingBox:(id)arg3 inImageWithSize:(struct CGSize )arg4 withCodeMap:(*int)arg5 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )arg6 invert:(BOOL)arg7 networkInputSize:(struct CGSize )arg8 garbageSymbol:(unsigned short)arg9 ;
+(id)geometricRecognitionOf:(id)arg0 inDerotatedRegion:(struct vImage_Buffer )arg1 withPadding:(struct CGPoint )arg2 fromCorrectedBoundingBox:(id)arg3 inImageWithSize:(struct CGSize )arg4 withNetwork:(*void)arg5 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )arg6 invert:(BOOL)arg7 ;
+(id)geometricRecognitionOf:(id)arg0 inDerotatedRegion:(struct vImage_Buffer )arg1 withPadding:(struct CGPoint )arg2 fromCorrectedBoundingBox:(id)arg3 inImageWithSize:(struct CGSize )arg4 withNetwork:(*void)arg5 activations:(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )arg6 invert:(BOOL)arg7 garbageSymbol:(unsigned short)arg8 ;
+(id)stringByInjectingSpaces:(id)arg0 textFeatures:(id)arg1 improved:(BOOL)arg2 ;
+(id)widestVersionOfRect:(id)arg0 insideImageWithSize:(struct CGSize )arg1 ;


@end


#endif