// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTFINISHINGOPTIONSSECTION_H
#define UIPRINTFINISHINGOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintFinishingsOption.h"

@interface UIPrintFinishingOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintFinishingsOption *finishingPrintOption; // ivar: _finishingPrintOption


-(BOOL)updatePrintOptionsList;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)currentPrinterChanged;
-(void)dealloc;
-(void)didSelectPrintOptionSection;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif