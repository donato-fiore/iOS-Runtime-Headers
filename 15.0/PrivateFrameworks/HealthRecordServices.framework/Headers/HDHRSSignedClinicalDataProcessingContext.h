// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXT_H
#define HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXT_H

@class NSData, NSString, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSSignedClinicalDataProcessingContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *JWKSData; // ivar: _JWKSData
@property (readonly, copy, nonatomic) NSData *JWSData; // ivar: _JWSData
@property (readonly, copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJWSData:(id)arg0 sourceURL:(id)arg1 issuerIdentifier:(id)arg2 JWKSData:(id)arg3 metadata:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif