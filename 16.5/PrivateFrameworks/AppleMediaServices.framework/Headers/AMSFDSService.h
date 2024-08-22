// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFDSSERVICE_H
#define AMSFDSSERVICE_H


#import <Foundation/Foundation.h>


@interface AMSFDSService : NSObject



+(id)cacheFDS:(id)arg0 forPurchaseInfo:(id)arg1 ;
+(id)cachedFDSForPurchaseInfo:(id)arg0 ;
+(id)didConsumeFDSForPurchaseInfo:(id)arg0 ;
+(id)generateFDSWithRequest:(id)arg0 ;


@end


#endif