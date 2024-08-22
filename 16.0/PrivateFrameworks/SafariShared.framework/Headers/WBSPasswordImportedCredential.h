// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDIMPORTEDCREDENTIAL_H
#define WBSPASSWORDIMPORTEDCREDENTIAL_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (readonly, copy, nonatomic) NSURL *otpAuthURL; // ivar: _otpAuthURL
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSString *user; // ivar: _user


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)encryptedURLCredentialWithPersistence:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 url:(id)arg2 ;
-(id)initWithUser:(id)arg0 password:(id)arg1 url:(id)arg2 sidecarData:(id)arg3 ;
-(id)urlCredentialWithPersistence:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif