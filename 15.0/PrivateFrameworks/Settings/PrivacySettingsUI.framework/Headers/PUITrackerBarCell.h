// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUITRACKERBARCELL_H
#define PUITRACKERBARCELL_H

@class PSTableCell, UIStackView, UIView, NSArray, UILabel;



@interface PUITrackerBarCell : PSTableCell

@property (retain, nonatomic) UIStackView *barStackView; // ivar: _barStackView
@property (retain, nonatomic) UIView *barView; // ivar: _barView
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) UILabel *tertiaryLabel; // ivar: _tertiaryLabel
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)labelForItems:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif