// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LUILOGFILTERCURRENTPREDICATETABLEVIEWCELL_H
#define LUILOGFILTERCURRENTPREDICATETABLEVIEWCELL_H

@class UITableViewCell, UIButton, UILabel;
@protocol LUILogFilterCurrentPredicateTableViewCellDelegate;



@interface LUILogFilterCurrentPredicateTableViewCell : UITableViewCell

@property (weak, nonatomic) NSObject<LUILogFilterCurrentPredicateTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIButton *deleteButton; // ivar: _deleteButton
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)_createDeleteButton;
-(id)_createTitleLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_deleteButtonTapped:(id)arg0 ;
-(void)_setupUI;
-(void)layoutSubviews;


@end


#endif