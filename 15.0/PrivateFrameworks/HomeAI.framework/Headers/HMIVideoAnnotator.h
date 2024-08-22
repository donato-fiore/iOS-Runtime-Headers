// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANNOTATOR_H
#define HMIVIDEOANNOTATOR_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIVideoAnnotator : HMFObject <HMFLogging>

 {
    *opaqueCMSampleBuffer _sbuf;
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
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(struct __CTFont *)_createFontWithSize:(CGFloat)arg0 ;
-(void)dealloc;
-(void)draw:(id)arg0 ;
-(void)drawPolygonWithNormalizedPoints:(id)arg0 ;
-(void)drawRectWithCGRect:(struct CGRect )arg0 scale:(float)arg1 ;
-(void)drawText:(id)arg0 at:(struct CGPoint )arg1 ;
-(void)drawTextHeaderBar:(id)arg0 ;


@end


#endif