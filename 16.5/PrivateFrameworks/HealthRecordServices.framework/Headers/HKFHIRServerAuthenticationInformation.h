// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFHIRSERVERAUTHENTICATIONINFORMATION_H
#define HKFHIRSERVERAUTHENTICATIONINFORMATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFHIRServerAuthenticationInformation : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger PKCEAlgorithm; // ivar: _PKCEAlgorithm
@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, copy, nonatomic) NSString *clientSecret; // ivar: _clientSecret


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClientID:(id)arg0 clientSecret:(id)arg1 PKCEAlgorithm:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif