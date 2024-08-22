// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGSHIGHLIGHTESTIMATESEXPORTVIEWCONTROLLER_H
#define PXSETTINGSHIGHLIGHTESTIMATESEXPORTVIEWCONTROLLER_H

@class UIViewController, NSString, NSDictionary, UITextView;
@protocol MFMailComposeViewControllerDelegate;



@interface PXSettingsHighlightEstimatesExportViewController : UIViewController <MFMailComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL exportHighlightEstimatesOnViewDidAppear; // ivar: _exportHighlightEstimatesOnViewDidAppear
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *highlightEstimatesDictionary; // ivar: _highlightEstimatesDictionary
@property (readonly) Class superclass;
@property (retain) UITextView *textView; // ivar: _textView


-(void)_fetchHighlightEstimatesDictionary;
-(void)_sendEmail:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif