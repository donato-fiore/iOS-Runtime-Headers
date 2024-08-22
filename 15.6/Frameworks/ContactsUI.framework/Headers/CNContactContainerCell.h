// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTCONTAINERCELL_H
#define CNCONTACTCONTAINERCELL_H

@class UILabel;
@protocol CNPropertyCellDelegate;


#import "CNLabeledCell.h"

@interface CNContactContainerCell : CNLabeledCell

@property (readonly, nonatomic) UILabel *accountLabel; // ivar: _accountLabel
@property (readonly, nonatomic) UILabel *accountNameLabel; // ivar: _accountNameLabel
@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate


+(BOOL)wantsChevron;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
-(id)valueView;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg0 ;
-(void)updateConstraints;


@end


#endif