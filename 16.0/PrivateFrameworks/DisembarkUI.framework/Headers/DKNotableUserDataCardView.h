// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKNOTABLEUSERDATACARDVIEW_H
#define DKNOTABLEUSERDATACARDVIEW_H

@class UIView, NSLayoutConstraint, NSMutableArray, UIStackView;


#import "DKNotableUserDataCardPrimaryCell.h"

@interface DKNotableUserDataCardView : UIView

@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewConstraint; // ivar: _bottomStackViewConstraint
@property (retain, nonatomic) NSMutableArray *cells; // ivar: _cells
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) DKNotableUserDataCardPrimaryCell *primaryCell; // ivar: _primaryCell
@property (retain, nonatomic) UIStackView *secondaryStackView; // ivar: _secondaryStackView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 icon:(id)arg2 ;
-(void)_toggleExpanded;
-(void)addCardCell:(id)arg0 ;


@end


#endif