// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACACCOUNTCREDENTIAL_H
#define ACACCOUNTCREDENTIAL_H

@class NSDictionary, NSString, NSMutableSet, NSSet, NSDate;
@protocol ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ACAccount.h"

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding>

 {
    NSDictionary *_credentialItems;
    NSString *_credentialType;
    NSMutableSet *_dirtyProperties;
    ACAccount *_owningAccount;
}


@property (copy, nonatomic) NSString *credentialType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (readonly, nonatomic) NSSet *dirtyProperties;
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *findMyiPhoneToken;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *hsaToken;
@property (copy, nonatomic) NSString *mapsToken;
@property (copy, nonatomic) NSString *mdmServerToken;
@property (copy, nonatomic) NSString *oauthRefreshToken;
@property (copy, nonatomic) NSString *oauthToken;
@property (copy, nonatomic) NSString *oauthTokenNoSync;
@property (copy, nonatomic) NSString *oauthTokenSecret;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL requiresTouchID; // ivar: _requiresTouchID
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDate *tokenExpiryDate;


+(BOOL)credentialPolicyIsMixedForAccountTypeIdentifier:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg0 ;
+(id)allSupportedKeys;
+(id)credentialPolicyForAccountTypeIdentifier:(id)arg0 key:(id)arg1 clientID:(id)arg2 ;
+(id)credentialWithOAuthToken:(id)arg0 tokenSecret:(id)arg1 ;
+(id)credentialWithPassword:(id)arg0 ;
+(id)nonPersistentKeysForAccountTypeIdentifier:(id)arg0 credentialType:(id)arg1 ;
+(id)supportedKeysForAccountTypeIdentifier:(id)arg0 credentialType:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_encodeProtobuf;
-(id)_encodeProtobufData;
-(id)_initWithProtobuf:(id)arg0 ;
-(id)_initWithProtobufData:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)credentialItemForKey:(id)arg0 ;
-(id)credentialItems;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOAuth2Token:(id)arg0 refreshToken:(id)arg1 expiryDate:(id)arg2 ;
-(id)initWithOAuthToken:(id)arg0 tokenSecret:(id)arg1 ;
-(id)initWithPassword:(id)arg0 ;
-(id)keysForCredentialItems;
-(void)_clearDirtyProperties;
-(void)_markPropertyDirty:(id)arg0 ;
-(void)_setOwningAccount:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCredentialItem:(id)arg0 forKey:(id)arg1 ;


@end


#endif