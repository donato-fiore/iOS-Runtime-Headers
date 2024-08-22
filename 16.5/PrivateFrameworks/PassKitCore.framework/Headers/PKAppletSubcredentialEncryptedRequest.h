// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALENCRYPTEDREQUEST_H
#define PKAPPLETSUBCREDENTIALENCRYPTEDREQUEST_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *encryptionScheme; // ivar: _encryptionScheme
@property (readonly, nonatomic) NSString *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (readonly, nonatomic) NSString *publicKeyHash; // ivar: _publicKeyHash


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEncryptionScheme:(id)arg0 ephemeralPublicKey:(id)arg1 publicKeyHash:(id)arg2 data:(id)arg3 ;
-(id)initWithRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif