// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONREQUESTPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONREQUESTPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterAttestationRequestParams : NSObject

@property (retain, nonatomic) NSData *attestationNonce; // ivar: _attestationNonce
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif