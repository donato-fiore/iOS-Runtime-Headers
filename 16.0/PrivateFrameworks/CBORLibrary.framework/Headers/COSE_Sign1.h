// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COSE_SIGN1_H
#define COSE_SIGN1_H

@class NSData, NSArray, NSString;


#import "COSE.h"

@interface COSE_Sign1 : COSE

@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSArray *x509bag;
@property (readonly, nonatomic) NSArray *x509chain;
@property (readonly, nonatomic) NSString *x509hashAlgorithmIdentifier;
@property (readonly, nonatomic) NSData *x509hashValue;
@property (readonly, nonatomic) NSString *x509uri;


-(id)description;
-(id)initWithCBOR:(id)arg0 ;
-(id)initWithProtectedHeaders:(id)arg0 unprotectedHeaders:(id)arg1 payload:(id)arg2 signature:(id)arg3 includeCBORTag:(BOOL)arg4 ;


@end


#endif