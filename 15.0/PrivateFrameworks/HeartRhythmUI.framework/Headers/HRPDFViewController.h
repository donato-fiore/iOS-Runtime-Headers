// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRPDFVIEWCONTROLLER_H
#define HRPDFVIEWCONTROLLER_H

@class HKViewController, NSData, PDFDocument;



@interface HRPDFViewController : HKViewController

@property (retain, nonatomic) NSData *pdfData; // ivar: _pdfData
@property (retain, nonatomic) PDFDocument *pdfDocument; // ivar: _pdfDocument


-(id)initWithPDFData:(id)arg0 ;
-(id)pdfView;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif