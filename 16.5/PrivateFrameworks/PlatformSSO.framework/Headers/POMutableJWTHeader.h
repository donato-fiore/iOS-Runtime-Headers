// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMUTABLEJWTHEADER_H
#define POMUTABLEJWTHEADER_H

@class NSString, NSDictionary, NSNumber;


#import "POJWTHeader.h"

@interface POMutableJWTHeader : POJWTHeader

@property (retain) NSString *alg;
@property (retain) NSString *apu;
@property (retain) NSString *apv;
@property (retain) NSString *cty;
@property (retain) NSString *enc;
@property (retain) NSDictionary *epk;
@property (retain) NSString *kid;
@property (retain) NSNumber *p2c;
@property (retain) NSString *p2s;
@property (retain) NSString *typ;
@property (retain) NSString *x5c;
@property (retain) NSString *x5t;


-(void)addCustomClaims:(id)arg0 ;
-(void)addEphemeralPublicKey:(struct __SecKey *)arg0 ;


@end


#endif