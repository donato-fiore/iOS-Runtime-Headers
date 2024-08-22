// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTBOOKLETOPTION_H
#define UIPRINTBOOKLETOPTION_H

@class UISwitch;
@protocol UIPrintOptionViewDelegate;


#import "UIPrintOption.h"

@interface UIPrintBookletOption : UIPrintOption <UIPrintOptionViewDelegate>



@property (retain, nonatomic) UISwitch *bookletSwitch; // ivar: _bookletSwitch


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summaryString;
-(void)bookletSelected:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif