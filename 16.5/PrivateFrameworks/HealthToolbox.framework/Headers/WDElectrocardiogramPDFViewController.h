// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDELECTROCARDIOGRAMPDFVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMPDFVIEWCONTROLLER_H

@class UIViewController, NSString, NSData, PDFDocument, PDFView, NSDate;
@protocol UIInterfaceOrientationMaskOverride;



@interface WDElectrocardiogramPDFViewController : UIViewController <UIInterfaceOrientationMaskOverride>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSData *pdfData; // ivar: _pdfData
@property (readonly, nonatomic) PDFDocument *pdfDocument; // ivar: _pdfDocument
@property (readonly, nonatomic) PDFView *pdfView;
@property (readonly, nonatomic) NSDate *sampleDate; // ivar: _sampleDate
@property (readonly) Class superclass;


-(NSUInteger)overrideMask;
-(id)initWithPDFData:(id)arg0 sampleDate:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(void)didTapDone;
-(void)didTapShare;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif