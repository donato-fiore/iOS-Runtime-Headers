// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NAARTICLENAVIGATIONBARPALETTECONTENT_H
#define NAARTICLENAVIGATIONBARPALETTECONTENT_H

@class UIView;
@protocol TUBarPaletteContents;



@interface NAArticleNavigationBarPaletteContent : UIView <TUBarPaletteContents>

 {
    ? opaqueBar;
    ? horizontalScrollOffset;
    ? bottomPaletteButtonLocation;
}




+(CGFloat)paletteHeight;
-(CGFloat)paletteHeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)setPaletteColorWithPrimaryColor:(id)arg0 secondaryColor:(id)arg1 primaryVisibilityFactor:(CGFloat)arg2 ;
-(void)compressWithScale:(CGFloat)arg0 opacity:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)setBarColor:(id)arg0 ;
-(void)setBarColorFor:(id)arg0 primaryColor:(id)arg1 secondaryColor:(id)arg2 primaryVisibilityFactor:(CGFloat)arg3 ;


@end


#endif