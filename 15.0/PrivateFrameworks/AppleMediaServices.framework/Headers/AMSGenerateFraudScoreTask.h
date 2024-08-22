// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSGENERATEFRAUDSCORETASK_H
#define AMSGENERATEFRAUDSCORETASK_H

@class ACAccount, NSString;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSGenerateFraudScoreTask : AMSTask

@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, nonatomic) BOOL deviceSupportsFraudScores;
@property (readonly, nonatomic) BOOL deviceSupportsFraudScoresV2;
@property (readonly, nonatomic) NSString *logKey; // ivar: _logKey


+(BOOL)deviceSupportsFraudScoresV2WithBag:(id)arg0 logKey:(id)arg1 ;
-(id)initWithAction:(NSUInteger)arg0 account:(id)arg1 bag:(id)arg2 logKey:(id)arg3 ;
-(id)initWithPurchaseInfo:(id)arg0 bag:(id)arg1 ;
-(id)runTask;


@end


#endif