// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISVECTORGLYPHDRAWING_H
#define UISVECTORGLYPHDRAWING_H

@class NSString;
@protocol UISDrawing;

#import <Foundation/Foundation.h>


@interface UISVectorGlyphDrawing : NSObject <UISDrawing>

 {
    *CGImage _image;
    *CGColor _tintColor;
    CGRect _imageFrame;
    CGSize _size;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize drawingSize;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithVectorGlyph:(id)arg0 tintColor:(struct CGColor *)arg1 ;
-(void)dealloc;
-(void)drawInContext:(struct CGContext *)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif