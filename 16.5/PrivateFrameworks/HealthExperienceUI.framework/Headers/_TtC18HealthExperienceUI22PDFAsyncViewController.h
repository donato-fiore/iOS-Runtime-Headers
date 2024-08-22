// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI22PDFASYNCVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI22PDFASYNCVIEWCONTROLLER_H

@class UIViewController;
@protocol PDFDocumentDelegate;



@interface _TtC18HealthExperienceUI22PDFAsyncViewController : UIViewController <PDFDocumentDelegate>

 {
    ? pdfFileNameProvider;
    ? pageNumberFormat;
    ? shareButtonBehavior;
    ? configuration;
    ? analyticsDelegate;
    ? shareItemSource;
    ? $__lazy_storage_$_spinner;
}




-(Class)classForPage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapDone;
-(void)didTapShare;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif