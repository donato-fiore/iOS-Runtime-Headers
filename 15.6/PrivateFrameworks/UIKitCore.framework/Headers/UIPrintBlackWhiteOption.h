// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTBLACKWHITEOPTION_H
#define UIPRINTBLACKWHITEOPTION_H



#import "UIPrintOption.h"
#import "UISwitch.h"

@interface UIPrintBlackWhiteOption : UIPrintOption

@property (retain, nonatomic) UISwitch *bwswitch; // ivar: _bwswitch
@property (nonatomic) BOOL canShowColor; // ivar: _canShowColor


-(BOOL)blackWhite;
-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)changeBlackWhite:(id)arg0 ;
-(void)dealloc;
-(void)setBlackWhite:(BOOL)arg0 ;
-(void)updateBlackWhite;


@end


#endif