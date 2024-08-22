// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAMEMBERCARDCONTAINERTABLEVIEWCELL_H
#define FAMEMBERCARDCONTAINERTABLEVIEWCELL_H

@class PSTableCell, UIStackView;
@protocol FAMemberStackViewDelegate, FAFamilyMemberCardTapHandler;


#import "FAMemberStackView.h"

@interface FAMemberCardContainerTableViewCell : PSTableCell <FAMemberStackViewDelegate>

 {
    UIStackView *cardRowView;
    FAMemberStackView *cardOneView;
    FAMemberStackView *cardTwoView;
}


@property (retain) NSObject<FAFamilyMemberCardTapHandler> *tapHandler; // ivar: _tapHandler


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)memberCardTappedInStackViewWith:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setupCardRowView;
-(void)setupCellView;
-(void)setupConstraints;


@end


#endif