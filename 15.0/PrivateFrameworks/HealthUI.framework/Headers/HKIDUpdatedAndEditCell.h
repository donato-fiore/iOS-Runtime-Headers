// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKIDUPDATEDANDEDITCELL_H
#define HKIDUPDATEDANDEDITCELL_H

@class UITableViewCell, NSArray, UIStackView, NSLayoutConstraint, UILabel, NSDate, UIButton, NSString;
@protocol HKIDUpdatedAndEditCellDelegate;



@interface HKIDUpdatedAndEditCell : UITableViewCell {
    NSArray *_regularLayoutConstraints;
    NSArray *_largeTextLayoutConstraints;
    UIStackView *_stackView;
    NSLayoutConstraint *_editFirstBaseLineAnchorConstraint;
}


@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) NSDate *dateSaved; // ivar: _dateSaved
@property (weak, nonatomic) NSObject<HKIDUpdatedAndEditCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEditButtonDisabled) BOOL disableEditButton;
@property (retain, nonatomic) UIButton *editButton; // ivar: _editButton
@property (nonatomic, getter=isEditButtonHidden) BOOL hideEditButton; // ivar: _hideEditButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_editButtonTapped:(id)arg0 ;
-(void)_updateFont;
-(void)_updateForCurrentSizeCategory;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif