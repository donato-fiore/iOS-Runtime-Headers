// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDCBUILDERSIGNATUREDETAILS_H
#define CIDCBUILDERSIGNATUREDETAILS_H

@class NSArray, NSData;

#import <Foundation/Foundation.h>


@interface CIDCBuilderSignatureDetails : NSObject

@property (retain) NSArray *issuerCertificate; // ivar: _issuerCertificate
@property (retain) NSData *issuerKey; // ivar: _issuerKey
@property (retain) NSData *signature; // ivar: _signature
@property NSInteger signingAlgorithm; // ivar: _signingAlgorithm


-(id)initWithSigningAlgorithm:(NSInteger)arg0 issuerCertificate:(id)arg1 issuerKey:(id)arg2 signature:(id)arg3 ;
-(id)initWithSigningAlgorithm:(NSInteger)arg0 issuerCertificate:(id)arg1 signature:(id)arg2 ;
-(id)initWithSigningAlgorithm:(NSInteger)arg0 issuerKey:(id)arg1 signature:(id)arg2 ;


@end


#endif