// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSHARABLEPASSWORD_H
#define SFSHARABLEPASSWORD_H

@class NSString, NSURL, NSData, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFSharablePassword : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasAnyCredentialData;
@property (readonly, nonatomic) BOOL hasPasswordWithConflicts;
@property (readonly, copy, nonatomic) NSString *highLevelDomain; // ivar: _highLevelDomain
@property (readonly, copy, nonatomic) NSString *notesEntry; // ivar: _notesEntry
@property (readonly, copy, nonatomic) NSURL *otpAuthURL; // ivar: _otpAuthURL
@property (readonly, copy, nonatomic) NSData *passkeyCredential; // ivar: _passkeyCredential
@property (readonly, copy, nonatomic) NSData *passkeyCredentialID; // ivar: _passkeyCredentialID
@property (readonly, copy, nonatomic) NSString *passkeyRelyingPartyID; // ivar: _passkeyRelyingPartyID
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURL *passwordManagerURL;
@property (readonly, copy, nonatomic) NSArray *protectionSpaces; // ivar: _protectionSpaces
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)safariCredentialURLHasPasskey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_decryptedDataForEncryptedData:(id)arg0 encryptionKeyReference:(id)arg1 ;
+(id)sharablePasswordFromData:(id)arg0 ;
+(id)sharablePasswordFromEncryptedData:(id)arg0 encryptionKeyReference:(id)arg1 ;
+(id)sharablePasswordFromURL:(id)arg0 ;
-(BOOL)_hasPasskeyData;
-(BOOL)_hasPasswordData;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_encryptionInformationWithNewKey;
-(id)_queryItemsForAirDropRepresentationWithEncryptionInformation:(id)arg0 ;
-(id)_savePasskeyAccount;
-(id)_savePasswordAccount;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSavedPassword:(id)arg0 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 displayName:(id)arg2 highLevelDomain:(id)arg3 passkeyRelyingPartyID:(id)arg4 protectionSpaces:(id)arg5 ;
-(id)saveToKeychain;
-(id)urlRepresentationForAirDrop;
-(void)_saveNotesEntryForSavedAccount:(id)arg0 ;
-(void)_saveOneTimeCodeForSavedAccount:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)savePasskeyAccountAndMergeIntoSavedPasswordAccountIfNeeded:(id)arg0 ;


@end


#endif