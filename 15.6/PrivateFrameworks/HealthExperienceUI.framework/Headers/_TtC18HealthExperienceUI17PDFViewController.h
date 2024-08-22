// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI17PDFVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI17PDFVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC18HealthExperienceUI17PDFViewController : UIViewController {
    ? pdfDocument;
    ? pdfData;
    ? pdfFilename;
    ? delegate;
    ? shareItemSource;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapDone;
-(void)didTapShare;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif