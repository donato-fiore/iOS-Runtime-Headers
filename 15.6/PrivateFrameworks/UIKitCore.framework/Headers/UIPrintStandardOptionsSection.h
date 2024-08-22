// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTSTANDARDOPTIONSSECTION_H
#define UIPRINTSTANDARDOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintPresetsOption.h"
#import "UIPrinterSelectionOption.h"

@interface UIPrintStandardOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintPresetsOption *presetsOption; // ivar: _presetsOption
@property (retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption; // ivar: _printerSelectionOption


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)setShowContactingPrinter:(BOOL)arg0 ;
-(void)updatePrintOptionsList;
-(void)updatePrinterInfo;


@end


#endif