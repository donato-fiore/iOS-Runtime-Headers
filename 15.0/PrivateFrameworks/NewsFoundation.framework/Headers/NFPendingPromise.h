// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFPENDINGPROMISE_H
#define NFPENDINGPROMISE_H


#import <Foundation/Foundation.h>

#import "NFPromise.h"

@interface NFPendingPromise : NSObject

@property (retain, nonatomic) NFPromise *promise; // ivar: _promise
@property (copy, nonatomic) id *reject; // ivar: _reject
@property (copy, nonatomic) id *resolve; // ivar: _resolve


-(id)init;


@end


#endif