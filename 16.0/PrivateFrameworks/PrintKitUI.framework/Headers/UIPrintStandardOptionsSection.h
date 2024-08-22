// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTSTANDARDOPTIONSSECTION_H
#define UIPRINTSTANDARDOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintPresetsOption.h"
#import "UIPrinterSelectionOption.h"

@interface UIPrintStandardOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintPresetsOption *presetsOption; // ivar: _presetsOption
@property (retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption; // ivar: _printerSelectionOption


-(BOOL)updatePrintOptionsList;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setShowContactingPrinter:(BOOL)arg0 ;


@end


#endif