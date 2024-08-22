// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKMARKERANNOTATIONBASEIMAGEVIEW_H
#define _MKMARKERANNOTATIONBASEIMAGEVIEW_H

@class UIImageView;


#import "_MKMarkerAnnotationBaseImageContent.h"

@interface _MKMarkerAnnotationBaseImageView : UIImageView {
    CGFloat _tailLength;
}


@property (retain, nonatomic, getter=_baseImageContent, setter=_setBaseImageContent:) _MKMarkerAnnotationBaseImageContent *baseImageContent; // ivar: _baseImageContent


+(id)_gradientImageName:(NSInteger)arg0 ;
+(struct CGPath *)_pathForBaseImageType:(NSInteger)arg0 radius:(CGFloat)arg1 tailLength:(CGFloat)arg2 ;
-(BOOL)_isFillColorClear;
-(id)_renderBaseImage:(struct CGContext *)arg0 inRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
-(id)initWithBalloonRadius:(CGFloat)arg0 tailLength:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOvalInSize:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 inRect:(struct CGRect )arg2 scale:(CGFloat)arg3 ;
-(void)_renderBaseContent;
-(void)_renderContentUsingGraphicsPath:(struct CGPath *)arg0 ;
-(void)_renderGradientForRectaloon;
-(void)_strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 scale:(CGFloat)arg2 ;


@end


#endif