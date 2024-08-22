// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H
#define MTROPERATIONALCREDENTIALSCLUSTERATTESTATIONRESPONSEPARAMS_H

@class NSData, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTROperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying>



@property (copy, nonatomic) NSData *attestationElements; // ivar: _attestationElements
@property (copy, nonatomic) NSData *attestationSignature; // ivar: _attestationSignature
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif