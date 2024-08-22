// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRACCOUNTDESCRIPTOR_H
#define BRACCOUNTDESCRIPTOR_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRAccountDescriptor : NSObject <NSSecureCoding>

 {
    NSString *_personaIdentifier;
}


@property (readonly, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) BOOL isDataSeparated; // ivar: _isDataSeparated
@property (readonly, nonatomic) BOOL isLoggedInToCloudDocs; // ivar: _isLoggedInToCloudDocs
@property (readonly, nonatomic) NSString *organizationName; // ivar: _organizationName


+(BOOL)mightHaveDataSeparatedAccountDescriptor;
+(BOOL)supportsSecureCoding;
+(id)accountDescriptorForAccountID:(id)arg0 ;
+(id)accountDescriptorForAccountID:(id)arg0 mustBeLoggedIn:(BOOL)arg1 ;
+(id)accountDescriptorForPersonaID:(id)arg0 ;
+(id)accountDescriptorForPersonaID:(id)arg0 mustBeLoggedIn:(BOOL)arg1 ;
+(id)accountDescriptorForURL:(id)arg0 ;
+(id)accountDescriptorForURL:(id)arg0 mustBeLoggedIn:(BOOL)arg1 ;
+(id)allEligibleAccountDescriptors;
+(id)allLoggedInAccountDescriptors;
+(id)matchDomainWithAccountAndStampDomainIfNeeded:(id)arg0 withAccounts:(id)arg1 persistDomain:(*BOOL)arg2 ;
+(void)clearAccountDescriptorCache;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersonaIdentifier:(id)arg0 accountIdentifier:(id)arg1 domainIdentifier:(id)arg2 organizationName:(id)arg3 dataSeparated:(BOOL)arg4 loggedInToCloudDocs:(BOOL)arg5 ;
-(id)personaIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif