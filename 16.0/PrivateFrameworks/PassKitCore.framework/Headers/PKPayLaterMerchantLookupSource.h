// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERMERCHANTLOOKUPSOURCE_H
#define PKPAYLATERMERCHANTLOOKUPSOURCE_H

@class NSString;
@protocol PKMerchantLookupRequestSource;

#import <Foundation/Foundation.h>

#import "PKPayLaterFinancingPlan.h"

@interface PKPayLaterMerchantLookupSource : NSObject <PKMerchantLookupRequestSource>

 {
    PKPayLaterFinancingPlan *_financingPlan;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isRefund;
-(BOOL)isSettlement;
-(NSInteger)type;
-(id)identifier;
-(id)initWithFinancingPlan:(id)arg0 ;
-(id)mapsMerchantLookupRequest;
-(id)mapsURL;


@end


#endif