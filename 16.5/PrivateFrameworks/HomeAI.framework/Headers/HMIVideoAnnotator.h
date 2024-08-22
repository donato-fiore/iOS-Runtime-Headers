// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANNOTATOR_H
#define HMIVIDEOANNOTATOR_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIVideoAnnotator : HMFObject <HMFLogging>

 {
    *__CVBuffer _pixelBuffer;
    *CGContext _context;
    *CGColorSpace _colorSpace;
    *__CTFont _font;
    CGSize _size;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 fontSize:(CGFloat)arg1 ;
-(struct __CTFont *)_createFontWithSize:(CGFloat)arg0 ;
-(void)dealloc;
-(void)draw:(id)arg0 ;
-(void)drawBoundingBox:(struct CGRect )arg0 lineWidth:(CGFloat)arg1 text:(id)arg2 color:(*CGFloat)arg3 ;
-(void)drawPolygonWithNormalizedPoints:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 width:(CGFloat)arg1 color:(*CGFloat)arg2 ;
-(void)drawText:(id)arg0 at:(struct CGPoint )arg1 color:(*CGFloat)arg2 ;
-(void)drawTextHeaderBar:(id)arg0 ;


@end


#endif