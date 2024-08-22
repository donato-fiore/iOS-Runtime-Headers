// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUFEEDBACKCONSENTVIEWCONTROLLER_H
#define HUFEEDBACKCONSENTVIEWCONTROLLER_H

@class UIViewController, WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;



@interface HUFeedbackConsentViewController : UIViewController

@property (retain, nonatomic) NSObject<HUFeedbackConsentViewControllerDelegate> *consentDelegate; // ivar: _consentDelegate
@property (retain, nonatomic) WKWebView *consentView; // ivar: _consentView
@property (nonatomic) BOOL isFamilyAndFriendsConsent; // ivar: _isFamilyAndFriendsConsent


-(id)consentFormFilePath;
-(id)htmlString;
-(id)initWithConsentDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didAcceptConsent;
-(void)didDeclineConsent;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;


@end


#endif