// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUACCESSORYDIAGNOSTICSCONSENTVIEWCONTROLLER_H
#define HUACCESSORYDIAGNOSTICSCONSENTVIEWCONTROLLER_H

@class UIViewController, NSString, UITextView, NSURL, UIButton;
@protocol UITextViewDelegate;



@interface HUAccessoryDiagnosticsConsentViewController : UIViewController <UITextViewDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) NSInteger consentTextVersion; // ivar: _consentTextVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITextView *descriptionTextView; // ivar: _descriptionTextView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSURL *privacyPolicyURL; // ivar: _privacyPolicyURL
@property (retain, nonatomic) UIButton *submitButton; // ivar: _submitButton
@property (readonly) Class superclass;


-(id)initWithItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)_addConstraints;
-(void)cancelSubmission;
-(void)submitLog;
-(void)viewDidLoad;


@end


#endif