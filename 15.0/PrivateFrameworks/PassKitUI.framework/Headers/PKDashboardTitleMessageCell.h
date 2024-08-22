// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDTITLEMESSAGECELL_H
#define PKDASHBOARDTITLEMESSAGECELL_H

@class UILabel;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardTitleMessageCell : PKDashboardCollectionViewCell

@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif