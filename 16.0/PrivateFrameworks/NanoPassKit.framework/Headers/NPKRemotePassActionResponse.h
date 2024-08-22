// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKREMOTEPASSACTIONRESPONSE_H
#define NPKREMOTEPASSACTIONRESPONSE_H

@class PKCurrencyAmount, NSString;


#import "NPKRemotePassAction.h"

@interface NPKRemotePassActionResponse : NPKRemotePassAction

@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int result;


-(id)description;


@end


#endif