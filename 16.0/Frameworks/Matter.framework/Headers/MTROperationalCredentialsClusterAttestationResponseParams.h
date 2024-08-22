// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterAttestationResponseParams : NSObject

@property (retain, nonatomic) NSData *attestationElements; // ivar: _attestationElements
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif