// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGUTLROIPROCESSOR_H
#define FIGUTLROIPROCESSOR_H

@class FigM2MController;

#import <Foundation/Foundation.h>


@interface FigUtlROIProcessor : NSObject {
    int _originalWidth;
    int _originalHeight;
    CGRect _roiInPixels;
    CGRect _originalRectangle;
    int _orientation;
    FigM2MController *_m2m;
}


@property (readonly, nonatomic) int height; // ivar: _height
@property (readonly, nonatomic) ? originalToRoiMatrix; // ivar: _originalToRoiMatrix
@property (readonly, nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly, nonatomic) CGRect roiRectangle; // ivar: _roiRectangle
@property (readonly, nonatomic) ? roiToOriginalMatrix; // ivar: _roiToOriginalMatrix
@property (readonly, nonatomic) int width; // ivar: _width


-(BOOL)processImage:(struct __CVBuffer *)arg0 orientation:(int)arg1 rect:(struct CGRect )arg2 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 pixelFormat:(unsigned int)arg2 ;
-(struct ? )matrix:(int)arg0 rectangle:(struct CGRect )arg1 scaleX:(CGFloat)arg2 scaleY:(CGFloat)arg3 inverse:(struct ? *)arg4 ;
-(struct CGPoint )originalToRoi:(struct CGPoint )arg0 ;
-(struct CGPoint )originalToRoiPixels:(struct CGPoint )arg0 ;
-(struct CGPoint )roiToOriginal:(struct CGPoint )arg0 ;
-(struct CGPoint )roiToOriginalPixels:(struct CGPoint )arg0 ;
-(void)dealloc;


@end


#endif