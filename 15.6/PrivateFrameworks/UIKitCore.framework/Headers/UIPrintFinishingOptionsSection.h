// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTFINISHINGOPTIONSSECTION_H
#define UIPRINTFINISHINGOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintFinishingsOption.h"

@interface UIPrintFinishingOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintFinishingsOption *finishingPrintOption; // ivar: _finishingPrintOption


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)didSelectPrintOptionSection;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)updatePrintOptionsList;
-(void)updatePrinterInfo;


@end


#endif