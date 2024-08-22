// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETEOSTRANSACTIONPRIMITIVES_H
#define CRKCONCRETEOSTRANSACTIONPRIMITIVES_H

@protocol CRKOSTransactionPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteOSTransactionPrimitives : NSObject <CRKOSTransactionPrimitives>



@property (readonly, nonatomic) NSInteger transactionCount;


-(id)transactionWithReverseDNSReason:(id)arg0 ;
-(void)decrementCount;
-(void)incrementCount;


@end


#endif