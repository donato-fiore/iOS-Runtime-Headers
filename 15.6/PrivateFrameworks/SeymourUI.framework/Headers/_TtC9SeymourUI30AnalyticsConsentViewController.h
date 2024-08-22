// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI30ANALYTICSCONSENTVIEWCONTROLLER_H
#define _TTC9SEYMOURUI30ANALYTICSCONSENTVIEWCONTROLLER_H



#import "SMUOBTextWelcomeController.h"

@interface _TtC9SeymourUI30AnalyticsConsentViewController : SMUOBTextWelcomeController {
    ? privacyPreferenceClient;
    ? version;
    ? isPurchaser;
    ? eventHub;
    ? metricPage;
    ? onConsent;
    ? onDismiss;
}




-(id)initWithTitle:(id)arg0 ;
-(void)didTapLearnMoreButton;
-(void)didTapOptInButton;
-(void)didTapOptOutButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif