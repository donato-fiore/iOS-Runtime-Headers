// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHLIBRARYPODCROSSFADEVIEW_H
#define SBHLIBRARYPODCROSSFADEVIEW_H

@class UIView;


#import "SBHLibraryCategoryStackView.h"
#import "SBIconView.h"

@interface SBHLibraryPodCrossfadeView : UIView {
    SBHLibraryCategoryStackView *_foregroundView;
    UIView *_backgroundView;
}


@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (readonly, nonatomic) SBIconView *podIconView; // ivar: _podIconView


-(id)initWithBackgroundView:(id)arg0 podIconView:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithForegroundView:(id)arg0 podIconView:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setSourceViewCrossfadeFraction:(CGFloat)arg0 ;


@end


#endif