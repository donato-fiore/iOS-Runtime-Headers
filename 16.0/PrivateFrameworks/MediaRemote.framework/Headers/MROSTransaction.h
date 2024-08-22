// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MROSTRANSACTION_H
#define MROSTRANSACTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MROSTransaction : NSObject {
    NSObject<OS_os_transaction> *_containedTransaction;
}


@property (readonly, nonatomic) NSString *transactionName; // ivar: _transactionName


-(id)description;
-(id)initWithName:(id)arg0 ;
-(void)invalidateTransaction;


@end


#endif