// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSFITNESSPLUSANALYTICSCONSENTCOORDINATOR_H
#define PSFITNESSPLUSANALYTICSCONSENTCOORDINATOR_H

@class AMSAcknowledgePrivacyTask;

#import <Foundation/Foundation.h>


@interface PSFitnessPlusAnalyticsConsentCoordinator : NSObject {
    AMSAcknowledgePrivacyTask *_acknowledgePrivacyTask;
}




-(id)init;
-(void)fetchAnalyticsConsentWithCompletion:(id)arg0 ;
-(void)fetchSubscriptionStatusWithCompletion:(id)arg0 ;
-(void)setAnalyticsConsent:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif