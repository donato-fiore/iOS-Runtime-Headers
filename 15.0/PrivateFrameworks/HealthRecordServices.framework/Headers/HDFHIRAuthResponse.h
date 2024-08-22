// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDFHIRAUTHRESPONSE_H
#define HDFHIRAUTHRESPONSE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDFHIRAuthResponse : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, copy, nonatomic) NSDate *expiration; // ivar: _expiration
@property (readonly, copy, nonatomic) NSString *patientID; // ivar: _patientID
@property (readonly, copy, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, copy, nonatomic) NSString *scope; // ivar: _scope


+(BOOL)supportsSecureCoding;
+(id)authResponseFromServerResponseDictionary:(id)arg0 baseURL:(id)arg1 previousCredential:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToAuthResponse:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessToken:(id)arg0 refreshToken:(id)arg1 patientID:(id)arg2 expiration:(id)arg3 scope:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif