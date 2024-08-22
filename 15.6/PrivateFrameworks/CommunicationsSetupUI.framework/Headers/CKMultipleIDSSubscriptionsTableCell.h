// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMULTIPLEIDSSUBSCRIPTIONSTABLECELL_H
#define CKMULTIPLEIDSSUBSCRIPTIONSTABLECELL_H

@class PSTableCell, UILabel;



@interface CKMultipleIDSSubscriptionsTableCell : PSTableCell

@property (retain, nonatomic) UILabel *centeredNameLabel; // ivar: _centeredNameLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *numberLabel; // ivar: _numberLabel


+(NSInteger)cellStyle;
-(BOOL)canBeChecked;
-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif