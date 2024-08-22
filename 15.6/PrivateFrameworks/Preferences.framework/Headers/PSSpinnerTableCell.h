// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSPINNERTABLECELL_H
#define PSSPINNERTABLECELL_H

@class UIActivityIndicatorView;


#import "PSTableCell.h"

@interface PSSpinnerTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
}


@property (readonly, nonatomic) UIActivityIndicatorView *spinner;


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif