// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCPUBLICKEYCREDENTIALCREATIONOPTIONS_H
#define ASCPUBLICKEYCREDENTIALCREATIONOPTIONS_H

@class NSData, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *challenge; // ivar: _challenge
@property (copy, nonatomic) NSArray *excludedCredentials; // ivar: _excludedCredentials
@property (copy, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (nonatomic) BOOL shouldRequireResidentKey; // ivar: _shouldRequireResidentKey
@property (copy, nonatomic) NSArray *supportedAlgorithmIdentifiers; // ivar: _supportedAlgorithmIdentifiers
@property (copy, nonatomic) NSString *userDisplayName; // ivar: _userDisplayName
@property (copy, nonatomic) NSData *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) NSString *userName; // ivar: _userName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif