// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI20APPLYCONTROLLERMODEL_H
#define _TTC9PASSKITUI20APPLYCONTROLLERMODEL_H

@protocol PKPaymentSetupViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI20ApplyControllerModel : NSObject <PKPaymentSetupViewControllerDelegate>

 {
    ? _nextView;
    ? _accountError;
    ? _hasFieldsSubmitted;
    ? applicationType;
    ? account;
    ? applyController;
}




-(id)init;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;


@end


#endif