// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSPACEAUTHENTICATIONCONTEXT_H
#define CTCARRIERSPACEAUTHENTICATIONCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceAuthenticationContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *authURL; // ivar: _authURL
@property (retain, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (retain, nonatomic) NSString *clientID; // ivar: _clientID
@property (retain, nonatomic) NSString *iccid; // ivar: _iccid
@property (retain, nonatomic) NSString *scope; // ivar: _scope
@property (retain, nonatomic) NSString *sourceApplicationAccountIdentifier; // ivar: _sourceApplicationAccountIdentifier
@property (nonatomic) BOOL supportsState; // ivar: _supportsState
@property (retain, nonatomic) NSString *tokenURL; // ivar: _tokenURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif