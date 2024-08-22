// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNLINKEDCARDSCELL_H
#define CNLINKEDCARDSCELL_H

@class UILabel;
@protocol CNPropertyCellDelegate;


#import "CNLabeledCell.h"

@interface CNLinkedCardsCell : CNLabeledCell

@property (weak, nonatomic) NSObject<CNPropertyCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (readonly, nonatomic) UILabel *sourceLabel; // ivar: _sourceLabel


+(BOOL)wantsChevron;
-(BOOL)shouldPerformDefaultAction;
-(id)labelView;
-(id)valueView;
-(void)performDefaultAction;
-(void)setCardGroupItem:(id)arg0 ;
-(void)updateConstraints;


@end


#endif