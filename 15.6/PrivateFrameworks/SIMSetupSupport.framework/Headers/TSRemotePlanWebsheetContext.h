// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSREMOTEPLANWEBSHEETCONTEXT_H
#define TSREMOTEPLANWEBSHEETCONTEXT_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TSRemotePlanWebsheetContext : NSObject <NSCopying, NSSecureCoding>



@property (retain) NSString *carrierName; // ivar: _carrierName
@property int flowType; // ivar: _flowType
@property (retain) NSString *iccid; // ivar: _iccid
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property BOOL useLiveID; // ivar: _useLiveID


-(id)init;


@end


#endif