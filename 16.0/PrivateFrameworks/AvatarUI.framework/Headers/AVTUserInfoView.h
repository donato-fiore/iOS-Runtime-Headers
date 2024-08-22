// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTUSERINFOVIEW_H
#define AVTUSERINFOVIEW_H

@class UIView, NSArray, UIColor, NSString, UIVisualEffectView, UILabel;



@interface AVTUserInfoView : UIView

@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (nonatomic) UIColor *containerBackgroundColor; // ivar: _containerBackgroundColor
@property (nonatomic) BOOL isRegisteredForCategorySizeChange; // ivar: _isRegisteredForCategorySizeChange
@property (retain, nonatomic) NSString *text;
@property (nonatomic) NSDirectionalEdgeInsets textInsets; // ivar: _textInsets
@property (retain, nonatomic) UIVisualEffectView *userInfoEffectView; // ivar: _userInfoEffectView
@property (retain, nonatomic) UILabel *userInfoLabel; // ivar: _userInfoLabel


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configure;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateConstraints;


@end


#endif