// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIWORKOUTSIMPLECOMPLETIONRINGCELL_H
#define FIUIWORKOUTSIMPLECOMPLETIONRINGCELL_H

@class UITableViewCell, UIImageView, UIView, ARUIRingsView, UILabel;



@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) UIView *lineView; // ivar: _lineView
@property (retain, nonatomic) UIImageView *ringImageView; // ivar: _ringImageView
@property (retain, nonatomic) ARUIRingsView *ringsView; // ivar: _ringsView
@property (retain, nonatomic) UILabel *typeLabel; // ivar: _typeLabel


+(CGFloat)preferredHeightForWorkout:(id)arg0 fittingWidth:(CGFloat)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)configureWithWorkout:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif