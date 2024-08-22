// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFBANNERCELL_H
#define SFBANNERCELL_H

@class UICollectionViewCell, UIButton, UILabel, NSArray, NSString;


#import "SFBannerBackgroundView.h"

@interface SFBannerCell : UICollectionViewCell {
    SFBannerBackgroundView *_backgroundView;
    UIButton *_dismissButton;
    UILabel *_messageLabel;
    NSArray *_minimalLayoutConstraints;
    NSArray *_prominentLayoutConstraints;
    UILabel *_titleLabel;
}


@property (nonatomic) NSInteger bannerStyle; // ivar: _bannerStyle
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *title;


+(id)reuseIdentifier;
-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_dismiss:(id)arg0 ;
-(void)_updateStyle;
-(void)configureUsingBanner:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif