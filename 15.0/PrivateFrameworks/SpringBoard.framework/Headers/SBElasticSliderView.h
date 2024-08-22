// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBELASTICSLIDERVIEW_H
#define SBELASTICSLIDERVIEW_H

@class CCUIContinuousSliderView, UIView, NSString;
@protocol SBElasticGlyphView;



@interface SBElasticSliderView : CCUIContinuousSliderView <SBElasticGlyphView>

 {
    UIView *_backgroundView;
}


@property (nonatomic) CGFloat additiveGlyphScaleFactor; // ivar: _additiveGlyphScaleFactor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )glyphCenter;
-(void)layoutSubviews;
-(void)setAxis:(NSUInteger)arg0 ;
-(void)setContinuousSliderCornerRadius:(CGFloat)arg0 ;


@end


#endif