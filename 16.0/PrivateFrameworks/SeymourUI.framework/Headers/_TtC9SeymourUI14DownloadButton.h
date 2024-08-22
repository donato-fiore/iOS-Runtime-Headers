// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI14DOWNLOADBUTTON_H
#define _TTC9SEYMOURUI14DOWNLOADBUTTON_H

@class UIControl;



@interface _TtC9SeymourUI14DownloadButton : UIControl {
    ? delegate;
    ? backgroundLayer;
    ? contentLayer;
    ? contentView;
    ? iconLayer;
    ? configurationFactory;
    ? alphaAnimator;
    ? configuration;
    ? contentWidthConstraint;
    ? fromWidth;
    ? propertyAnimator;
    ? currentState;
    ? toWidth;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif