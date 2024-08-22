// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERCERTIFICATECHAINRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERCERTIFICATECHAINRESPONSEPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSData *certificate; // ivar: _certificate
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif