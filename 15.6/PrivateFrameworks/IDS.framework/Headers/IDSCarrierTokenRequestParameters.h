// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCARRIERTOKENREQUESTPARAMETERS_H
#define IDSCARRIERTOKENREQUESTPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSCarrierTokenRequestParameters : NSObject

@property (readonly, nonatomic) NSString *IMEI; // ivar: _IMEI
@property (readonly, nonatomic) NSString *carrierNonce; // ivar: _carrierNonce
@property (readonly, nonatomic) NSInteger subscriptionSource; // ivar: _subscriptionSource


-(id)initWithSubscriptionSource:(NSInteger)arg0 IMEI:(id)arg1 carrierNonce:(id)arg2 ;


@end


#endif