// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H
#define MTRADMINISTRATORCOMMISSIONINGCLUSTEROPENCOMMISSIONINGWINDOWPARAMS_H

@class NSNumber, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *commissioningTimeout; // ivar: _commissioningTimeout
@property (copy, nonatomic) NSNumber *discriminator; // ivar: _discriminator
@property (copy, nonatomic) NSNumber *iterations; // ivar: _iterations
@property (copy, nonatomic) NSData *pakePasscodeVerifier; // ivar: _pakePasscodeVerifier
@property (copy, nonatomic) NSData *pakeVerifier;
@property (copy, nonatomic) NSData *salt; // ivar: _salt
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif