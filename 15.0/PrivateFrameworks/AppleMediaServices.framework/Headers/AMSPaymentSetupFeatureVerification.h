// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPAYMENTSETUPFEATUREVERIFICATION_H
#define AMSPAYMENTSETUPFEATUREVERIFICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSPaymentSetupFeatureVerification : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isPaymentSetupFeatureSupportedWithError:(*id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)performPaymentSetupFeatureLookup;


@end


#endif