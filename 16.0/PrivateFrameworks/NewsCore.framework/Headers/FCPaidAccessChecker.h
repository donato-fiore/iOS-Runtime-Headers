// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPAIDACCESSCHECKER_H
#define FCPAIDACCESSCHECKER_H

@protocol FCPaidAccessCheckerType, FCCoreConfigurationManager, FCBundleSubscriptionProviderType, FCPurchaseProviderType;

#import <Foundation/Foundation.h>


@interface FCPaidAccessChecker : NSObject <FCPaidAccessCheckerType>

 {
    id<FCCoreConfigurationManager> *_configurationManager;
}


@property (readonly, nonatomic) NSObject<FCBundleSubscriptionProviderType> *bundleSubscriptionProvider; // ivar: _bundleSubscriptionProvider
@property (readonly, nonatomic) NSObject<FCPurchaseProviderType> *purchaseProvider; // ivar: _purchaseProvider


-(BOOL)canGetAccessToItemPaid:(BOOL)arg0 bundlePaid:(BOOL)arg1 channel:(id)arg2 ;
-(BOOL)canGetBundleSubscriptionToChannel:(id)arg0 ;
-(BOOL)canGetSubscriptionToChannel:(id)arg0 ;
-(BOOL)isPreparedForUse;
-(id)initWithPurchaseProvider:(id)arg0 bundleSubscriptionProvider:(id)arg1 configurationManager:(id)arg2 ;
-(void)prepareForUseWithCompletion:(id)arg0 ;


@end


#endif