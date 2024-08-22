// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASVTRACKINGSTATESTATUSLABEL_H
#define ASVTRACKINGSTATESTATUSLABEL_H

@class UIView, UILabel, NSString, NSLayoutConstraint;


#import "ASVBlurredBackgroundView.h"

@interface ASVTrackingStateStatusLabel : UIView

@property (retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView; // ivar: _blurredBackgroundView
@property (nonatomic) NSInteger controlStyle; // ivar: _controlStyle
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSLayoutConstraint *viewWidthConstraint; // ivar: _viewWidthConstraint


-(id)initWithFrame:(struct CGRect )arg0 controlStyle:(NSInteger)arg1 ;


@end


#endif