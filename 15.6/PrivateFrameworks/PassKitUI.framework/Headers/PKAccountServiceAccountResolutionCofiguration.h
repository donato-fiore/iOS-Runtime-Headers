// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTSERVICEACCOUNTRESOLUTIONCOFIGURATION_H
#define PKACCOUNTSERVICEACCOUNTRESOLUTIONCOFIGURATION_H

@class PKCreditInstallmentPlan;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKAccountServiceAccountResolutionCofiguration : NSObject

@property (retain, nonatomic) NSObject<PKBusinessChatContext> *businessChatContext; // ivar: _businessChatContext
@property (retain, nonatomic) PKCreditInstallmentPlan *earlyInstallmentPlan; // ivar: _earlyInstallmentPlan


-(id)description;


@end


#endif