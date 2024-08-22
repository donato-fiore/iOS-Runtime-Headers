// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTFLIPHORIZONTALOPTION_H
#define UIPRINTFLIPHORIZONTALOPTION_H

@class UISwitch;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOption.h"

@interface UIPrintFlipHorizontalOption : UIPrintOption <UIPrintOptionViewDelegate>



@property (retain, nonatomic) UISwitch *flipHorizontalSwitch; // ivar: _flipHorizontalSwitch


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summaryString;
-(void)dealloc;
-(void)flipHorizontalSelected:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif