// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPURCHASEQUEUECONFIGURATION_H
#define AMSPURCHASEQUEUECONFIGURATION_H

@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;

#import <Foundation/Foundation.h>


@interface AMSPurchaseQueueConfiguration : NSObject

@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) NSObject<AMSPurchaseResponseProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) Class purchaseTaskClass; // ivar: _purchaseTaskClass


-(id)initWithBag:(id)arg0 ;


@end


#endif