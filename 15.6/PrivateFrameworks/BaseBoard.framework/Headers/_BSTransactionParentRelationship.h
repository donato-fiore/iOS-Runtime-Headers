// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _BSTRANSACTIONPARENTRELATIONSHIP_H
#define _BSTRANSACTIONPARENTRELATIONSHIP_H


#import <Foundation/Foundation.h>

#import "BSTransaction.h"

@interface _BSTransactionParentRelationship : NSObject {
    BSTransaction *_parentTransaction;
    NSUInteger _schedulingPolicy;
}






@end


#endif