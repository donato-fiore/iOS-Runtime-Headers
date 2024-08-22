// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIGRADINGFEEDBACKVIEWCONTROLLER_H
#define SEARCHUIGRADINGFEEDBACKVIEWCONTROLLER_H

@class UIAlertController, NSString, SFSearchResult, UIViewController;
@protocol MFMailComposeViewControllerDelegate, SFFeedbackListener;



@interface SearchUIGradingFeedbackViewController : UIAlertController <MFMailComposeViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SFFeedbackListener> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SFSearchResult *result; // ivar: _result
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting; // ivar: _viewControllerForPresenting


-(BOOL)_canShowWhileLocked;
-(id)initWithResult:(id)arg0 feedbackDelegate:(id)arg1 ;
-(void)addActionForGrade:(NSUInteger)arg0 title:(id)arg1 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif