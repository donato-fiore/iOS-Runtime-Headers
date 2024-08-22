// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11POSTERBOARD27HOMESCREENCONFIGURATIONVIEW_H
#define _TTC11POSTERBOARD27HOMESCREENCONFIGURATIONVIEW_H

@class UIView;



@interface _TtC11PosterBoard27HomeScreenConfigurationView : UIView {
    ? delegate;
    ? posterPair;
    ? controls;
    ? lockPosterPreviewView;
    ? gradientPreviewView;
    ? solidColorPreviewView;
    ? homePosterPreviewView;
    ? blurButton;
    ? stackView;
    ? homeScreenConfiguration;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didSelectControl:(id)arg0 ;
-(void)toggleLegibilityBlur:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif