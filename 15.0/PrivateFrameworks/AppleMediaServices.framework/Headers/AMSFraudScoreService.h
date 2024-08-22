// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSFRAUDSCORESERVICE_H
#define AMSFRAUDSCORESERVICE_H


#import <Foundation/Foundation.h>


@interface AMSFraudScoreService : NSObject



+(id)cacheFraudScore:(id)arg0 forPurchaseInfo:(id)arg1 ;
+(id)cachedFraudScoreForPurchaseInfo:(id)arg0 ;
+(id)generateFraudScoreForAction:(NSUInteger)arg0 account:(id)arg1 logKey:(id)arg2 ;


@end


#endif