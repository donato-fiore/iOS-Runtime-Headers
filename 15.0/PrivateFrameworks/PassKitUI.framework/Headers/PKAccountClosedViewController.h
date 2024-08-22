// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTCLOSEDVIEWCONTROLLER_H
#define PKACCOUNTCLOSEDVIEWCONTROLLER_H

@class PKAccount, PKAccountUserCollection, PKFamilyMemberCollection;


#import "PKExplanationViewController.h"

@interface PKAccountClosedViewController : PKExplanationViewController {
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKFamilyMemberCollection *_familyMemberCollection;
}




-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 familyMemberCollection:(id)arg2 context:(NSInteger)arg3 ;
-(void)explanationViewDidSelectBodyButton:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif