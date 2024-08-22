// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSEGMENTVIEW_H
#define STSEGMENTVIEW_H

@class UIView, NSLayoutConstraint, UIImageView, UILabel;


#import "STSegmentItem.h"

@interface STSegmentView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *detailImageHeightConstraint; // ivar: _detailImageHeightConstraint
@property (readonly, nonatomic) UIImageView *detailImageView; // ivar: _detailImageView
@property (readonly, nonatomic) NSLayoutConstraint *detailImageWidthConstraint; // ivar: _detailImageWidthConstraint
@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (readonly, nonatomic) NSLayoutConstraint *detailLabelLeadingConstraint; // ivar: _detailLabelLeadingConstraint
@property (retain, nonatomic) STSegmentItem *item; // ivar: _item
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (readonly) BOOL useVibrancy; // ivar: _useVibrancy


-(id)initWithItem:(id)arg0 useVibrancy:(BOOL)arg1 truncateLabels:(BOOL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif