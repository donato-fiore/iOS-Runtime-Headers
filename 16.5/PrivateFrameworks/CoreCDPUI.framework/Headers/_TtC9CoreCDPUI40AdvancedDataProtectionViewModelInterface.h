// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9CORECDPUI40ADVANCEDDATAPROTECTIONVIEWMODELINTERFACE_H
#define _TTC9CORECDPUI40ADVANCEDDATAPROTECTIONVIEWMODELINTERFACE_H


#import <Foundation/Foundation.h>


@interface _TtC9CoreCDPUI40AdvancedDataProtectionViewModelInterface : NSObject {
    ? cdpContext;
    ? _progressViewIsDisplayed;
    ? _isWalrusEnabled;
    ? _isWalrusAvailableForPrimaryAccount;
    ? _adpState;
    ? accountRecoveryRowViewModel;
    ? adpViewModelHelper;
    ? advancedDataProtectionDataClassViewModel;
    ? walrusStatePublisher;
    ? walrusStateSubscription;
    ? contextProvider;
}




-(id)init;


@end


#endif