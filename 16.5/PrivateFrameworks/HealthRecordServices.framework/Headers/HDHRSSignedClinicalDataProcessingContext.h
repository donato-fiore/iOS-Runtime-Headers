// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXT_H
#define HDHRSSIGNEDCLINICALDATAPROCESSINGCONTEXT_H

@class NSData, NSString, NSDictionary, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDHRSSignedClinicalDataProcessingContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *JWKSData; // ivar: _JWKSData
@property (readonly, nonatomic) NSUInteger JWKSOutcome; // ivar: _JWKSOutcome
@property (readonly, copy, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSData *rawData; // ivar: _rawData
@property (readonly, copy, nonatomic) NSString *signingKeyID; // ivar: _signingKeyID
@property (readonly, nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (readonly, copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawData:(id)arg0 sourceType:(NSInteger)arg1 sourceURL:(id)arg2 issuerIdentifier:(id)arg3 signingKeyID:(id)arg4 JWKSData:(id)arg5 JWKSOutcome:(NSUInteger)arg6 metadata:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif