// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERELIGIBLESPENDVIEWCONTROLLER_H
#define PKPAYLATERELIGIBLESPENDVIEWCONTROLLER_H



#import "PKPayLaterViewController.h"
#import "PKPayLaterEligibleSpendSectionController.h"

@interface PKPayLaterEligibleSpendViewController : PKPayLaterViewController {
    PKPayLaterEligibleSpendSectionController *_sectionController;
}




-(id)initWithPayLaterAccount:(id)arg0 ;
-(id)pageTag;
-(void)didUpdatePayLaterAccount:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif