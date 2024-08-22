// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCLINICALONBOARDINGRETRIEVINGRECORDSMESSAGECELL_H
#define WDCLINICALONBOARDINGRETRIEVINGRECORDSMESSAGECELL_H

@class UITableViewCell, NSLayoutConstraint, UILabel;



@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell

@property (retain, nonatomic) NSLayoutConstraint *bottomLayoutConstraint; // ivar: _bottomLayoutConstraint
@property (nonatomic) CGFloat bottomPadding;
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupConstraints;
-(void)_setupSubviews;


@end


#endif