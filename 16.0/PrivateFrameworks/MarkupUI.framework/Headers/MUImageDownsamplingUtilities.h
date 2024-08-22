// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIMAGEDOWNSAMPLINGUTILITIES_H
#define MUIMAGEDOWNSAMPLINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface MUImageDownsamplingUtilities : NSObject



+(BOOL)_flattenEXIFOrientationOfImage:(id)arg0 toDestination:(id)arg1 ;
+(CGFloat)_maxDimensionOfSize:(struct CGSize )arg0 fittingToArea:(CGFloat)arg1 ;
+(id)_flattenEXIFOrientation:(BOOL)arg0 withDownsampling:(BOOL)arg1 sourceContent:(id)arg2 withContentType:(id)arg3 ;
+(id)_flattenRotation:(BOOL)arg0 withDownsampling:(BOOL)arg1 sourceImage:(id)arg2 ;
+(id)_preferredFileDisplayNameForSourceContent:(id)arg0 ;
+(id)_sourceContentType:(id)arg0 ;
+(id)_uniqueTemporaryDirectory;
+(struct CGImageSource *)_newImageSourceWithSourceContent:(id)arg0 ;
+(struct CGSize )_sizeFittingArea:(CGFloat)arg0 withSize:(struct CGSize )arg1 ;
+(void)_shouldFlattenEXIFOrientation:(*BOOL)arg0 andDownsample:(*BOOL)arg1 sourceContent:(id)arg2 ;


@end


#endif