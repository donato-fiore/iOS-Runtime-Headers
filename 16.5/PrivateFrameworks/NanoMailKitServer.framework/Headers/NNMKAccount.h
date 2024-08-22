// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKACCOUNT_H
#define NNMKACCOUNT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NNMKAccount : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (copy, nonatomic) NSString *defaultEmailAddress; // ivar: _defaultEmailAddress
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *emailAddressToken; // ivar: _emailAddressToken
@property (retain, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *localId; // ivar: _localId
@property (retain, nonatomic) NSArray *mailboxes; // ivar: _mailboxes
@property (retain, nonatomic) NSString *parentAccountIdentifier; // ivar: _parentAccountIdentifier
@property (retain, nonatomic) NSString *pccEmailAddress; // ivar: _pccEmailAddress
@property (nonatomic) BOOL shouldArchive; // ivar: _shouldArchive
@property (nonatomic) NSUInteger sourceType; // ivar: _sourceType
@property (nonatomic) NSUInteger standaloneState; // ivar: _standaloneState
@property (retain, nonatomic) NSString *typeIdentifier; // ivar: _typeIdentifier
@property (retain, nonatomic) NSString *username; // ivar: _username


+(BOOL)isiCloudEmailAddress:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)generateAccountIdForAccount:(id)arg0 ;
+(id)generateIdentifierFromEmailsAddresses:(id)arg0 ;
+(id)inboxesFromAccounts:(id)arg0 ;
-(BOOL)_isGmail;
-(BOOL)_isHotmail;
-(BOOL)_isiCloud;
-(BOOL)areStandaloneNotificationsEnabledWithCloudNotificationsEnabled:(BOOL)arg0 ;
-(BOOL)directPushNotificationsSupported;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)maySupportStandaloneMode;
-(BOOL)supportsCloudNotifications;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif