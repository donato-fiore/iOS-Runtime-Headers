// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTUSERLIMITREACHEDVIEWCONTROLLER_H
#define PKACCOUNTUSERLIMITREACHEDVIEWCONTROLLER_H

@class PKAccount, NSNumberFormatter;


#import "PKExplanationViewController.h"

@interface PKAccountUserLimitReachedViewController : PKExplanationViewController {
    PKAccount *_account;
    NSNumberFormatter *_maximumAccountUsersFormatter;
}




-(id)initWithAccount:(id)arg0 context:(NSInteger)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif