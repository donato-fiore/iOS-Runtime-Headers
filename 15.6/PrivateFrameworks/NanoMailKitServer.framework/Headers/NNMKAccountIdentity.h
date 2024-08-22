// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKACCOUNTIDENTITY_H
#define NNMKACCOUNTIDENTITY_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NNMKAccountIdentity : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountId; // ivar: _accountId
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSUInteger identityType; // ivar: _identityType
@property (copy, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (copy, nonatomic) NSString *token; // ivar: _token
@property (copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif