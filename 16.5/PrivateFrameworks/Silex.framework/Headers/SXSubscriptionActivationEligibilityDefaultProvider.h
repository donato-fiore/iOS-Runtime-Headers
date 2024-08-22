// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSUBSCRIPTIONACTIVATIONELIGIBILITYDEFAULTPROVIDER_H
#define SXSUBSCRIPTIONACTIVATIONELIGIBILITYDEFAULTPROVIDER_H

@class NSString;
@protocol SXSubscriptionActivationEligibilityProviding;

#import <Foundation/Foundation.h>


@interface SXSubscriptionActivationEligibilityDefaultProvider : NSObject <SXSubscriptionActivationEligibilityProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger eligibility;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif