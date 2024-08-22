// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAACTIVITYINDICATORLAYER_H
#define CAACTIVITYINDICATORLAYER_H

@class CALayer, UIColor;



@interface CAActivityIndicatorLayer : CALayer {
    *CGColor _color;
    UIColor *_uiColor;
}


@property (readonly, nonatomic, getter=_spokeCount) NSInteger spokeCount; // ivar: _spokeCount
@property (readonly, nonatomic, getter=_spokeFrameRatio) NSInteger spokeFrameRatio; // ivar: _spokeFrameRatio


-(BOOL)isAnimating;
-(CGFloat)_alphaValueForStep:(NSInteger)arg0 ;
-(CGFloat)_spokeLengthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_spokeWidthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_widthForGearWidth:(CGFloat)arg0 ;
-(id)imageForStep:(NSInteger)arg0 withColor:(struct CGColor *)arg1 ;
-(id)initWithColor:(id)arg0 ;
-(id)spinnerImages;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif