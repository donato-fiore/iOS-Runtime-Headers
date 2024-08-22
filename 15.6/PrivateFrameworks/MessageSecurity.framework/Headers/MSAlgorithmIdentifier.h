// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSALGORITHMIDENTIFIER_H
#define MSALGORITHMIDENTIFIER_H

@class NSData;

#import <Foundation/Foundation.h>

#import "MSOID.h"

@interface MSAlgorithmIdentifier : NSObject

@property (readonly) MSOID *algorithm; // ivar: _algorithm
@property (readonly) *AlgorithmIdentifier asn1AlgId; // ivar: _asn1AlgId
@property (readonly) NSData *parameters; // ivar: _parameters


+(id)algorithmIdentifierWithAsn1AlgId:(struct AlgorithmIdentifier *)arg0 error:(*id)arg1 ;
+(id)algorithmIdentifierWithOID:(id)arg0 ;
+(id)digestAlgorithmWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initDigestAlgorithmWithSignatureAlgorithm:(id)arg0 error:(*id)arg1 ;
-(id)initWithAsn1AlgId:(struct AlgorithmIdentifier *)arg0 error:(*id)arg1 ;
-(id)initWithOID:(id)arg0 ;
-(id)initWithOID:(id)arg0 parameters:(id)arg1 ;
-(id)signatureAlgorithmWithDigestAlgorithm:(id)arg0 error:(*id)arg1 ;
-(struct AlgorithmIdentifier *)encode;
-(void)dealloc;


@end


#endif