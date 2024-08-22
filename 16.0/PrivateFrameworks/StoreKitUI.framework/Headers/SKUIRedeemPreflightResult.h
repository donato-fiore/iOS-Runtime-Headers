// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIREDEEMPREFLIGHTRESULT_H
#define SKUIREDEEMPREFLIGHTRESULT_H

@class SSAccount, SSVRedeemCodeMetadata, NSError;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIRedeemConfiguration.h"

@interface SKUIRedeemPreflightResult : NSObject

@property (retain, nonatomic) SSAccount *account; // ivar: _account
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) SSVRedeemCodeMetadata *codeMetadata; // ivar: _codeMetadata
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // ivar: _redeemConfiguration
@property (nonatomic) NSInteger resultType; // ivar: _resultType




@end


#endif