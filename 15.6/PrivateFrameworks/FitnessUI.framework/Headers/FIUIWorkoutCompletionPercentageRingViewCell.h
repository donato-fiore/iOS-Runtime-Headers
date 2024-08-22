// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIUIWORKOUTCOMPLETIONPERCENTAGERINGVIEWCELL_H
#define FIUIWORKOUTCOMPLETIONPERCENTAGERINGVIEWCELL_H

@class UITableViewCell, UIImageView, ARUIRingsView, UILabel, HKWorkout;


#import "FIUIDividerView.h"

@interface FIUIWorkoutCompletionPercentageRingViewCell : UITableViewCell

@property (nonatomic) CGFloat currentCompletionFactor; // ivar: _currentCompletionFactor
@property (retain, nonatomic) UIImageView *gradientBackgroundImageView; // ivar: _gradientBackgroundImageView
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) ARUIRingsView *ringsView; // ivar: _ringsView
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) FIUIDividerView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) UILabel *typeLabel; // ivar: _typeLabel
@property (retain, nonatomic) HKWorkout *workout; // ivar: _workout


+(CGFloat)_ringDiameter;
+(CGFloat)_ringToTypeSpacing;
+(CGFloat)_ringTopPadding;
+(CGFloat)_typeToSecondaryLabelSpacing;
+(CGFloat)rowHeightForWorkout:(id)arg0 width:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ringsViewRenderer:(id)arg2 ;
-(void)animateRingWithCompletion:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif