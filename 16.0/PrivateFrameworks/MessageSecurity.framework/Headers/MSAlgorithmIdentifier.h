// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSALGORITHMIDENTIFIER_H
#define MSALGORITHMIDENTIFIER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSAlgorithmIdentifier : NSObject {
    ? _asn1AlgId;
}


@property (readonly) MSOID *algorithm; // ivar: _algorithm
@property ? asn1AlgId;
@property (readonly) NSData *parameters; // ivar: _parameters


+(?)algorithmIdentifierWithAsn1AlgIderror;
+(id)algorithmIdentifierWithOID:(id)arg0 ;
+(id)digestAlgorithmWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
-(?)initWithAsn1AlgIderror;
-(BOOL)isEqual:(id)arg0 ;
-(id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)initWithOID:(id)arg0 ;
-(id)initWithOID:(id)arg0 parameters:(id)arg1 ;
-(id)signatureAlgorithmWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
-(unsigned int)ccAlgorithm:(*id)arg0 ;
-(unsigned int)ccMode:(*id)arg0 ;


@end


#endif