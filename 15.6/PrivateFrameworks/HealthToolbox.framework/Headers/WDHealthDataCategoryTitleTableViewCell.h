// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDHEALTHDATACATEGORYTITLETABLEVIEWCELL_H
#define WDHEALTHDATACATEGORYTITLETABLEVIEWCELL_H

@class UITableViewCell, UILabel, NSLayoutConstraint, NSString;



@interface WDHealthDataCategoryTitleTableViewCell : UITableViewCell {
    UILabel *_titleLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    NSInteger _headerType;
    CGFloat _lastBaselineToBottomDistance;
}


@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(CGFloat)_titleLabelLastBaselineToBottom;
-(CGFloat)_titleLabelTopToFirstBaseline;
-(id)_titleLabelFont;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHeaderType:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupUI;
-(void)_updateFont;
-(void)_updateForCurrentSizeCategory;
-(void)setHeaderType:(NSInteger)arg0 ;
-(void)setLastBaselineToBottomDistance:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif