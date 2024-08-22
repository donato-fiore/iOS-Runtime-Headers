// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIKEV2AUTHENTICATIONPROTOCOL_H
#define NEIKEV2AUTHENTICATIONPROTOCOL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2AuthenticationProtocol : NSObject <NSCopying>



@property (nonatomic) NSUInteger digitalSignatureAlgorithm; // ivar: _digitalSignatureAlgorithm
@property (readonly, nonatomic) BOOL isCertificate;
@property (readonly, nonatomic) BOOL isDigitalSignature;
@property (nonatomic) NSUInteger method; // ivar: _method


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDigitalSignature:(NSUInteger)arg0 ;
-(id)initWithMethod:(NSUInteger)arg0 ;


@end


#endif