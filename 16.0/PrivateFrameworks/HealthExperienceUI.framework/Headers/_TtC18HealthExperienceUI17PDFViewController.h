// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI17PDFVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI17PDFVIEWCONTROLLER_H

@class UIViewController;
@protocol PDFDocumentDelegate;



@interface _TtC18HealthExperienceUI17PDFViewController : UIViewController <PDFDocumentDelegate>

 {
    ? pdfDocument;
    ? pdfData;
    ? pdfFilename;
    ? pageNumberFormat;
    ? delegate;
    ? shareItemSource;
}




-(Class)classForPage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapDone;
-(void)didTapShare;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif