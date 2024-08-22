// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAACTIVITYINDICATORLAYER_H
#define CAACTIVITYINDICATORLAYER_H

@class CALayer;



@interface CAActivityIndicatorLayer : CALayer {
    *CGColor _color;
}


@property (readonly, nonatomic, getter=_spokeCount) NSInteger spokeCount; // ivar: _spokeCount
@property (readonly, nonatomic, getter=_spokeFrameRatio) NSInteger spokeFrameRatio; // ivar: _spokeFrameRatio


-(CGFloat)_alphaValueForStep:(NSInteger)arg0 ;
-(CGFloat)_spokeLengthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_spokeWidthForGearWidth:(CGFloat)arg0 ;
-(CGFloat)_widthForGearWidth:(CGFloat)arg0 ;
-(id)imageForStep:(NSInteger)arg0 withColor:(struct CGColor *)arg1 ;
-(id)initWithColor:(struct CGColor *)arg0 ;
-(id)spinnerImages;
-(void)startAnimating;
-(void)stopAnimating;


@end


#endif