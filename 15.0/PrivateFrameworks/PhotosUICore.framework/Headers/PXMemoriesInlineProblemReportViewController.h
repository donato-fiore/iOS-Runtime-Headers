// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESINLINEPROBLEMREPORTVIEWCONTROLLER_H
#define PXMEMORIESINLINEPROBLEMREPORTVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, PHMemory, UIActivityIndicatorView, UILabel;
@protocol MFMailComposeViewControllerDelegate;



@interface PXMemoriesInlineProblemReportViewController : UIViewController <MFMailComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didDismissMailWindow; // ivar: _didDismissMailWindow
@property (retain, nonatomic) NSArray *features; // ivar: _features
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHMemory *memory; // ivar: _memory
@property (retain, nonatomic) UIActivityIndicatorView *reportCaptureInProgressActivityIndicator; // ivar: _reportCaptureInProgressActivityIndicator
@property (retain, nonatomic) UILabel *reportCaptureInProgressLabel; // ivar: _reportCaptureInProgressLabel
@property (readonly) Class superclass;


-(id)initWithMemory:(id)arg0 features:(id)arg1 ;
-(void)_showMailComposeWindow;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif