// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCPURCHASEINTEGRITYCHECKER_H
#define FCPURCHASEINTEGRITYCHECKER_H

@protocol FCPurchaseIntegrityChecker;

#import <Foundation/Foundation.h>


@interface FCPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>





-(void)isUserEntitledToSubscriptionForPurchaseID:(id)arg0 completion:(id)arg1 ;


@end


#endif