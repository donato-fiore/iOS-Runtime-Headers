// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTENTATTRIBUTIONTABLEVIEWCELL_H
#define WFCONTENTATTRIBUTIONTABLEVIEWCELL_H

@class UITableViewCell, UILabel, UIStackView, NSLayoutConstraint;



@interface WFContentAttributionTableViewCell : UITableViewCell

@property (retain, nonatomic) UILabel *accountIdentifierLabel; // ivar: _accountIdentifierLabel
@property (retain, nonatomic) UILabel *bundleNameLabel; // ivar: _bundleNameLabel
@property (retain, nonatomic) UILabel *contentItemsCountLabel; // ivar: _contentItemsCountLabel
@property (retain, nonatomic) UIStackView *contentStackView; // ivar: _contentStackView
@property (retain, nonatomic) UILabel *disclosureLevelLabel; // ivar: _disclosureLevelLabel
@property (retain, nonatomic) NSLayoutConstraint *firstLineBaseLineConstaint; // ivar: _firstLineBaseLineConstaint
@property (retain, nonatomic) UILabel *managedLevelLabel; // ivar: _managedLevelLabel
@property (retain, nonatomic) NSLayoutConstraint *secondLineBaseLineConstaint; // ivar: _secondLineBaseLineConstaint


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)updateCellWithContentAttribution:(id)arg0 ;


@end


#endif