// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTMOREOPTIONSSECTION_H
#define UIPRINTMOREOPTIONSSECTION_H



#import "UIPrintOptionSection.h"
#import "UIPrintAccountInfoOption.h"
#import "UIPrintInColorOption.h"
#import "UIPrintCopiesOption.h"
#import "UIPrintImagePDFAnnotationsOption.h"
#import "UIPrintOrientationOption.h"
#import "UIPrintPageRangeOption.h"
#import "UIPrintPaperSizeOption.h"
#import "UIPrintScalingOption.h"
#import "UIPrintTwoSidedOption.h"

@interface UIPrintMoreOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintAccountInfoOption *accountInfoPrintOption; // ivar: _accountInfoPrintOption
@property (retain, nonatomic) UIPrintInColorOption *blackWhiteOption; // ivar: _blackWhiteOption
@property (retain, nonatomic) UIPrintCopiesOption *copiesOption; // ivar: _copiesOption
@property (retain, nonatomic) UIPrintImagePDFAnnotationsOption *imagePDFAnnotationsPrintOption; // ivar: _imagePDFAnnotationsPrintOption
@property (retain, nonatomic) UIPrintOrientationOption *orientationPrintOption; // ivar: _orientationPrintOption
@property (retain, nonatomic) UIPrintPageRangeOption *pageRangeOption; // ivar: _pageRangeOption
@property (retain, nonatomic) UIPrintPaperSizeOption *paperSizePrintOption; // ivar: _paperSizePrintOption
@property BOOL printOptionListNeedsUpdate; // ivar: _printOptionListNeedsUpdate
@property (retain, nonatomic) UIPrintScalingOption *scalingPrintOption; // ivar: _scalingPrintOption
@property (retain, nonatomic) UIPrintTwoSidedOption *twoSidedOption; // ivar: _twoSidedOption


-(BOOL)keyboardShowing;
-(BOOL)updatePrintOptionsList;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(void)dealloc;
-(void)dismissKeyboard;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif