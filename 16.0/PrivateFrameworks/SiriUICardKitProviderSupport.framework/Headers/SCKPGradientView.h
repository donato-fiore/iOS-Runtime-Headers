// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCKPGRADIENTVIEW_H
#define SCKPGRADIENTVIEW_H

@class UIView, NSString, CAGradientLayer;



@interface SCKPGradientView : UIView {
    BOOL _isVisible;
}


@property (nonatomic) CGFloat gradientEndOpacity; // ivar: _gradientEndOpacity
@property (nonatomic) CGFloat gradientHeight; // ivar: _gradientHeight
@property (nonatomic) CGPoint gradientOrigin; // ivar: _gradientOrigin
@property (nonatomic) CGFloat gradientStartOpacity; // ivar: _gradientStartOpacity
@property (retain, nonatomic) NSString *gradientType; // ivar: _gradientType
@property (readonly, nonatomic) CAGradientLayer *layer;


-(id)_fadeInAnimation;
-(id)_fadeOutAnimation;
-(id)initWithGradientType:(id)arg0 ;
-(void)_updateGradientOpacity;
-(void)layoutSubviews;
-(void)setVisible:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif