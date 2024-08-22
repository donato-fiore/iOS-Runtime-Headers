// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUBTITLECELLWITHADDITIONALDETAIL_H
#define SUBTITLECELLWITHADDITIONALDETAIL_H

@class UILabel;


#import "EKUITableViewCell.h"

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell {
    UILabel *_additionalDetailLabel;
}


@property (readonly, retain, nonatomic) UILabel *additionalDetailLabel;
@property id *source; // ivar: _source


-(BOOL)leftFrame:(struct CGRect )arg0 overlapsRightFrame:(struct CGRect )arg1 difference:(*CGFloat)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif