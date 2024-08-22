// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMOCKPURCHASEINTEGRITYCHECKER_H
#define FCMOCKPURCHASEINTEGRITYCHECKER_H

@protocol FCPurchaseIntegrityChecker;

#import <Foundation/Foundation.h>


@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>



@property (nonatomic) NSUInteger mockedCheckResult; // ivar: _mockedCheckResult


+(id)mockPurchaseIntegrityCheckForFailure;
+(id)mockPurchaseIntegrityCheckForSuccess;
-(void)isUserEntitledToSubscriptionForPurchaseID:(id)arg0 completion:(id)arg1 ;


@end


#endif