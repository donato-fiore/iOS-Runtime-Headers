// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H
#define MTRADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject

@property (retain, nonatomic) NSNumber *commissioningTimeout; // ivar: _commissioningTimeout
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (retain, nonatomic) NSNumber *iterations; // ivar: _iterations
@property (retain, nonatomic) NSData *pakeVerifier; // ivar: _pakeVerifier
@property (retain, nonatomic) NSData *salt; // ivar: _salt
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif