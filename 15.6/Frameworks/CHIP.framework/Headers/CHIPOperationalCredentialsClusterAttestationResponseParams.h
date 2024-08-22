// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPOPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H
#define CHIPOPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface CHIPOperationalCredentialsClusterAttestationResponseParams : NSObject

@property (retain, nonatomic) NSData *attestationElements; // ivar: _attestationElements
@property (retain, nonatomic) NSData *signature; // ivar: _signature


-(id)init;


@end


#endif