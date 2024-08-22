// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTINCOLOROPTION_H
#define UIPRINTINCOLOROPTION_H

@class UISwitch;


#import "UIPrintOption.h"

@interface UIPrintInColorOption : UIPrintOption

@property (nonatomic) BOOL canShowColor; // ivar: _canShowColor
@property (retain, nonatomic) UISwitch *printInColorSwitch; // ivar: _printInColorSwitch
@property (nonatomic) NSInteger savedOutputType; // ivar: _savedOutputType


-(BOOL)printInColor;
-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)changePrintInColor:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setPrintInColor:(BOOL)arg0 ;
-(void)updateFromPrintInfo;


@end


#endif