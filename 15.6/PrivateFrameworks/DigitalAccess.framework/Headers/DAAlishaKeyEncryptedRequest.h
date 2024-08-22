// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAALISHAKEYENCRYPTEDREQUEST_H
#define DAALISHAKEYENCRYPTEDREQUEST_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAAlishaKeyEncryptedRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *encryptedRequest; // ivar: _encryptedRequest
@property (readonly, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (readonly, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)decodeWithData:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)encodeWithError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 ephemeralPublicKey:(id)arg1 publicKeyHash:(id)arg2 encryptedRequest:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif