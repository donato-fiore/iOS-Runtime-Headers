// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBCONTENTVIEW_H
#define OBCONTENTVIEW_H

@class UIView, UIColor;



@interface OBContentView : UIView

@property (nonatomic) BOOL aboveHeaderLayout; // ivar: _aboveHeaderLayout
@property (weak, nonatomic) UIView *bleedView; // ivar: _bleedView
@property (nonatomic) BOOL customizedBackgroundColor; // ivar: _customizedBackgroundColor
@property (retain, nonatomic) UIColor *darkColor; // ivar: _darkColor
@property (retain, nonatomic) UIColor *lightColor; // ivar: _lightColor


-(BOOL)_colorIsDefault:(id)arg0 ;
-(id)_defaultColorForCurrentTraitCollection;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 aboveHeaderLayout:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif