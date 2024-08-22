// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLEPAYTRUSTKEY_H
#define PKAPPLEPAYTRUSTKEY_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKApplePayTrustKey : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *certificate; // ivar: _certificate
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (readonly, copy, nonatomic) NSData *signedEnrollmentData; // ivar: _signedEnrollmentData


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif