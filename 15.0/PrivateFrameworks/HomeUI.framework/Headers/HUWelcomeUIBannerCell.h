// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWELCOMEUIBANNERCELL_H
#define HUWELCOMEUIBANNERCELL_H

@class UIImageView;


#import "HUBannerCell.h"
#import "HUGridStatusBannerCellLayoutOptions.h"
#import "HUGridWelcomeUIBannerCellLayoutOptions.h"

@interface HUWelcomeUIBannerCell : HUBannerCell {
    HUGridStatusBannerCellLayoutOptions *_layoutOptions;
}


@property (retain, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (retain, nonatomic) HUGridWelcomeUIBannerCellLayoutOptions *welcomeUIBannerLayoutOptions; // ivar: _welcomeUIBannerLayoutOptions


-(id)layoutOptions;
-(void)layoutOptionsDidChange;
-(void)setBackgroundColor;
-(void)setLayoutOptions:(id)arg0 ;
-(void)setupCustomCellAppearence;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif