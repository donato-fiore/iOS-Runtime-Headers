// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIPRINTMOREOPTIONSSECTION_H
#define UIPRINTMOREOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintAccountInfoOption.h"
#import "UIPrintBlackWhiteOption.h"
#import "UIPrintCopiesOption.h"
#import "UIPrintImagePDFAnnotationsOption.h"
#import "UIPrintOrientationOption.h"
#import "UIPrintPageRangeOption.h"
#import "UIPrintPaperSizeOption.h"
#import "UIPrintTwoSidedOption.h"

@interface UIPrintMoreOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintAccountInfoOption *accountInfoPrintOption; // ivar: _accountInfoPrintOption
@property (retain, nonatomic) UIPrintBlackWhiteOption *blackWhiteOption; // ivar: _blackWhiteOption
@property (retain, nonatomic) UIPrintCopiesOption *copiesOption; // ivar: _copiesOption
@property (retain, nonatomic) UIPrintImagePDFAnnotationsOption *imagePDFAnnotationsPrintOption; // ivar: _imagePDFAnnotationsPrintOption
@property (retain, nonatomic) UIPrintOrientationOption *orientationPrintOption; // ivar: _orientationPrintOption
@property (retain, nonatomic) UIPrintPageRangeOption *pageRangeOption; // ivar: _pageRangeOption
@property (retain, nonatomic) UIPrintPaperSizeOption *paperSizePrintOption; // ivar: _paperSizePrintOption
@property (retain, nonatomic) UIPrintTwoSidedOption *twoSidedOption; // ivar: _twoSidedOption


-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)dealloc;
-(void)setCurrentPrinter:(id)arg0 ;
-(void)updatePrintOptionsList;
-(void)updatePrinterInfo;


@end


#endif