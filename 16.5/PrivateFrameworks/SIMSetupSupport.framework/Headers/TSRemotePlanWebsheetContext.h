// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSREMOTEPLANWEBSHEETCONTEXT_H
#define TSREMOTEPLANWEBSHEETCONTEXT_H

@class NSString, NSDictionary, CTXPCServiceSubscriptionContext;

#import <Foundation/Foundation.h>


@interface TSRemotePlanWebsheetContext : NSObject

@property (retain) NSString *carrierName; // ivar: _carrierName
@property int flowType; // ivar: _flowType
@property (retain) NSString *iccid; // ivar: _iccid
@property (retain) NSDictionary *postdata; // ivar: _postdata
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (retain) NSString *url; // ivar: _url
@property BOOL useLiveID; // ivar: _useLiveID


-(id)init;


@end


#endif