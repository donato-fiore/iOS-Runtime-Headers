// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERCERTIFICATECHAINRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERCERTIFICATECHAINRESPONSEPARAMS_H

@class NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterCertificateChainResponseParams : NSObject

@property (retain, nonatomic) NSData *certificate; // ivar: _certificate
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif