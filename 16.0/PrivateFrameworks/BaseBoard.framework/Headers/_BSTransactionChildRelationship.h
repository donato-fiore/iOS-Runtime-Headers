// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BSTRANSACTIONCHILDRELATIONSHIP_H
#define _BSTRANSACTIONCHILDRELATIONSHIP_H


#import <Foundation/Foundation.h>

#import "BSTransaction.h"

@interface _BSTransactionChildRelationship : NSObject {
    BSTransaction *_childTransaction;
    NSUInteger _schedulingPolicy;
}






@end


#endif