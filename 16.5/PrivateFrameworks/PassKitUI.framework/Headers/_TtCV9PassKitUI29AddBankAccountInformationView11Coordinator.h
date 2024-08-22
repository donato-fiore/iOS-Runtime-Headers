// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCV9PASSKITUI29ADDBANKACCOUNTINFORMATIONVIEW11COORDINATOR_H
#define _TTCV9PASSKITUI29ADDBANKACCOUNTINFORMATIONVIEW11COORDINATOR_H

@protocol PKAddBankAccountInformationViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCV9PassKitUI29AddBankAccountInformationView11Coordinator : NSObject <PKAddBankAccountInformationViewControllerDelegate>

 {
    ? completionAction;
    ? fundingSourceAdded;
}




-(id)init;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;


@end


#endif