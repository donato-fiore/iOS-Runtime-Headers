// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H
#define CHIPADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject

@property (retain, nonatomic) NSNumber *commissioningTimeout; // ivar: _commissioningTimeout
@property (retain, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (retain, nonatomic) NSNumber *iterations; // ivar: _iterations
@property (retain, nonatomic) NSData *pakeVerifier; // ivar: _pakeVerifier
@property (retain, nonatomic) NSData *salt; // ivar: _salt


-(id)init;


@end


#endif