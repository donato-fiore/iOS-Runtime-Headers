// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTIMAGEPDFANNOTATIONSOPTION_H
#define UIPRINTIMAGEPDFANNOTATIONSOPTION_H

@class UISwitch;


#import "UIPrintOption.h"

@interface UIPrintImagePDFAnnotationsOption : UIPrintOption

@property (retain, nonatomic) UISwitch *imagePDFAnnotationsSwitch; // ivar: _imagePDFAnnotationsSwitch


-(BOOL)shouldShow;
-(id)initWithPrintInfo:(id)arg0 printPanelViewController:(id)arg1 ;
-(id)printOptionTableViewCell;
-(id)summary;
-(void)changeImagePDFAnnotations:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateFromPrintInfo;


@end


#endif