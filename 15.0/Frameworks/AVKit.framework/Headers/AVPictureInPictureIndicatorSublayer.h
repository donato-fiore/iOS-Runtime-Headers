// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVPICTUREINPICTUREINDICATORSUBLAYER_H
#define AVPICTUREINPICTUREINDICATORSUBLAYER_H

@class CALayer, NSAttributedString, CATextLayer, NSString;



@interface AVPictureInPictureIndicatorSublayer : CALayer {
    NSAttributedString *_attributedText;
    CGSize _imageSize;
    NSEdgeInsets _languageAwareOutsets;
    CGFloat _lineHeight;
    CGFloat _baselineOffset;
    CATextLayer *_textLayer;
    CALayer *_imageLayer;
}


@property (copy, nonatomic) NSString *customText; // ivar: _customText


-(BOOL)canRenderAttributedTextWithoutTruncationInsideRect:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithDisplayScale:(CGFloat)arg0 placeholderImage:(struct CGImage *)arg1 opaque:(BOOL)arg2 ;
-(struct CGRect )textBoundingRectWhenDrawnInRect:(struct CGRect )arg0 ;
-(void)layoutSublayers;
-(void)layoutSublayersWithTextAndImageUsingInsetBounds:(struct CGRect )arg0 ;


@end


#endif