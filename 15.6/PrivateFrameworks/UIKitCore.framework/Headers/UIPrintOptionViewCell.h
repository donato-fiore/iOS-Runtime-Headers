// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTOPTIONVIEWCELL_H
#define UIPRINTOPTIONVIEWCELL_H

@protocol UIPrintOptionViewDelegate;


#import "UIPrintOptionCell.h"
#import "UIView.h"

@interface UIPrintOptionViewCell : UIPrintOptionCell

@property (weak, nonatomic) NSObject<UIPrintOptionViewDelegate> *optionViewDelegate; // ivar: _optionViewDelegate
@property (retain, nonatomic) UIView *printOptionView; // ivar: _printOptionView


-(void)prepareForReuse;
-(void)printOptionCellTapped;


@end


#endif