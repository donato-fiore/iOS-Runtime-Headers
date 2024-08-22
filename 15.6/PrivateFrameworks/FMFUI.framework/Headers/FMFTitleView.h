// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMFTITLEVIEW_H
#define FMFTITLEVIEW_H

@class UIView, FMFLocation, UILabel, NSLayoutConstraint;



@interface FMFTitleView : UIView

@property (retain, nonatomic) FMFLocation *location; // ivar: _location
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) NSLayoutConstraint *titleBottomConstraint; // ivar: _titleBottomConstraint
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initFromNib;
-(void)_updateLabels:(id)arg0 ;
-(void)updateLocation:(id)arg0 ;


@end


#endif