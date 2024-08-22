// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSHARABLEPASSWORD_H
#define SFSHARABLEPASSWORD_H

@class NSString, NSURL, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFSharablePassword : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *highLevelDomain; // ivar: _highLevelDomain
@property (readonly, copy, nonatomic) NSURL *otpAuthURL; // ivar: _otpAuthURL
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSURL *passwordManagerURL;
@property (readonly, copy, nonatomic) NSArray *protectionSpaces; // ivar: _protectionSpaces
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)_decryptedDataForEncryptedData:(id)arg0 encryptionKeyReference:(id)arg1 ;
+(id)sharablePasswordFromData:(id)arg0 ;
+(id)sharablePasswordFromEncryptedData:(id)arg0 encryptionKeyReference:(id)arg1 ;
+(id)sharablePasswordFromURL:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_encryptionInformationWithNewKey;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSavedPassword:(id)arg0 ;
-(id)initWithUsername:(id)arg0 password:(id)arg1 displayName:(id)arg2 highLevelDomain:(id)arg3 protectionSpaces:(id)arg4 ;
-(id)urlRepresentationForAirDrop;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif