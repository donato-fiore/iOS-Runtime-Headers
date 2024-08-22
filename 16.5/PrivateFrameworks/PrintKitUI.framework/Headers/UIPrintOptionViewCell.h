// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTOPTIONVIEWCELL_H
#define UIPRINTOPTIONVIEWCELL_H

@class UIView;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOptionCell.h"

@interface UIPrintOptionViewCell : UIPrintOptionCell

@property (weak, nonatomic) NSObject<UIPrintOptionViewDelegate> *optionViewDelegate; // ivar: _optionViewDelegate
@property (retain, nonatomic) UIView *printOptionView; // ivar: _printOptionView


-(void)prepareForReuse;
-(void)printOptionCellTapped;


@end


#endif