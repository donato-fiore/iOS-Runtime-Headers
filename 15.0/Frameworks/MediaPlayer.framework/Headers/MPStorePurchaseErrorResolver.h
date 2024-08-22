// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREPURCHASEERRORRESOLVER_H
#define MPSTOREPURCHASEERRORRESOLVER_H

@class NSNumber;


#import "MPAVErrorResolver.h"

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver

@property (readonly, copy, nonatomic) NSNumber *storeAccountIdentifier; // ivar: _storeAccountIdentifier


-(id)initWithStoreAccountIdentifier:(id)arg0 ;
-(void)resolveError:(id)arg0 ;


@end


#endif