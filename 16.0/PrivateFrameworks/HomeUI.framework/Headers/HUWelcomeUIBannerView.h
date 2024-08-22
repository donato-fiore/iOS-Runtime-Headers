// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUWELCOMEUIBANNERVIEW_H
#define HUWELCOMEUIBANNERVIEW_H

@class UIImageView, NSArray, UIView;


#import "HUBannerView.h"

@interface HUWelcomeUIBannerView : HUBannerView

@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) UIView *welcomeFooterView; // ivar: _welcomeFooterView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_subclass_updateConstraints;
-(void)layoutOptionsDidChange;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif