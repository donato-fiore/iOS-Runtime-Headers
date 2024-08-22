// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEDACCOUNT_H
#define WBSSAVEDACCOUNT_H

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSDate, NSArray, NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningHideMarker.h"

@interface WBSSavedAccount : NSObject {
    os_unfair_lock_s _lock;
    NSMutableArray *_sites;
    NSMutableDictionary *_siteToProtectionSpaces;
    NSMutableSet *_sitesForWhichSelfIsDefault;
    NSDate *_earliestPasswordCredentialModificationDate;
    NSDate *_earliestCreationDate;
    NSMutableDictionary *_sitesToSidecars;
}


@property (readonly, copy, nonatomic) NSMutableArray *_allPasswordSidecarsAsMutableArray;
@property (readonly, nonatomic) NSArray *allPasswordSidecars;
@property (readonly, nonatomic) NSArray *allSidecars;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *creationDateForPasskey; // ivar: _creationDateForPasskey
@property (readonly, nonatomic) NSInteger credentialTypes;
@property (readonly, nonatomic) NSString *currentOneTimeCode;
@property (readonly, nonatomic) BOOL hasPasskeySidecars;
@property (readonly, nonatomic) BOOL hasPasswordSidecars;
@property (readonly, nonatomic) BOOL hasSidecarData;
@property (readonly, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (readonly, nonatomic) NSString *highLevelDomain; // ivar: _highLevelDomain
@property (readonly, nonatomic) BOOL isOneTimeSharable;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *lastModifiedDateForPasskey; // ivar: _lastModifiedDateForPasskey
@property (readonly, copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey;
@property (copy, nonatomic) NSDate *lastUsedDateForPasskey; // ivar: _lastUsedDateForPasskey
@property (readonly, copy, nonatomic) NSString *monogramCharacter;
@property (copy, nonatomic) NSString *notesEntry;
@property (copy, nonatomic) NSString *passkeyCredentialID; // ivar: _passkeyCredentialID
@property (copy, nonatomic) NSDictionary *passkeyCredentialSidecarsDictionary; // ivar: _passkeyCredentialSidecarsDictionary
@property (copy, nonatomic) NSString *passkeyRelyingPartyID; // ivar: _passkeyRelyingPartyID
@property (copy, nonatomic) NSString *passkeyUserHandle; // ivar: _passkeyUserHandle
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSArray *persistentIdentifiersForWarningManager; // ivar: _persistentIdentifiersForWarningManager
@property (readonly, nonatomic) NSArray *protectionSpaces;
@property (nonatomic) BOOL shouldShowSpecificSubdomainForUserVisibleDomain; // ivar: _shouldShowSpecificSubdomainForUserVisibleDomain
@property (readonly, nonatomic) NSArray *sites;
@property (readonly, nonatomic) NSArray *totpGenerators;
@property (readonly, nonatomic) NSString *user; // ivar: _user
@property (readonly, nonatomic) BOOL userIsNeverSaveMarker; // ivar: _userIsNeverSaveMarker
@property (readonly, nonatomic) NSString *userVisibleDomain;
@property (readonly, nonatomic) NSArray *userVisibleSites;
@property (readonly, copy, nonatomic) NSURL *wellKnownChangePasswordURL;


+(BOOL)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer *)arg0 string:(id)arg1 pattern:(id)arg2 matchingType:(NSInteger)arg3 ;
+(id)searchPatternForWebsiteComparisonFromSearchPattern:(id)arg0 ;
+(void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer *)arg0 string:(id)arg1 pattern:(id)arg2 matchingType:(NSInteger)arg3 withBlock:(id)arg4 ;
-(BOOL)_allSitesHaveSameNonDefaultPort:(*NSInteger)arg0 ;
-(BOOL)_containsProtectionSpace:(id)arg0 ;
-(BOOL)_matchesSearchPattern:(id)arg0 matchAgainstUser:(BOOL)arg1 associatedDomains:(id)arg2 ;
-(BOOL)hasProtectionSpace:(id)arg0 ;
-(BOOL)hasProtectionSpaceWithHighLevelDomainMatchingProtectionSpace:(id)arg0 ;
-(BOOL)isDefaultCredentialForFullyQualifiedHostname:(id)arg0 ;
-(BOOL)isDuplicateWithoutUserNameOfSavedAccount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDomain:(id)arg0 associatedDomains:(id)arg1 ;
-(BOOL)matchesServiceNameHintString:(id)arg0 ;
-(BOOL)matchesUserTypedSearchPattern:(id)arg0 associatedDomains:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_allSidecarsForSite:(id)arg0 ;
-(id)_exportPasskeyCredential;
-(id)_firstSidecarForAnySiteOfType:(NSInteger)arg0 ;
-(id)_initWithHighLevelDomain:(id)arg0 passkeyRelyingPartyID:(id)arg1 user:(id)arg2 password:(id)arg3 passkeyUserHandle:(id)arg4 passkeyCredentialID:(id)arg5 siteToProtectionSpaces:(id)arg6 sitesToSidecars:(id)arg7 ;
-(id)_initWithHighLevelDomain:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)_initWithPasskeyRelyingPartyID:(id)arg0 user:(id)arg1 passkeyUserHandle:(id)arg2 passkeyCredentialID:(id)arg3 ;
-(id)_passkeySidecarOfType:(NSInteger)arg0 ;
-(id)_sidecarForSite:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)description;
-(id)totpGeneratorForSite:(id)arg0 ;
-(void)_addCreationDate:(id)arg0 ;
-(void)_addPasskeySidecar:(id)arg0 ;
-(void)_addPasswordCredentialModificationDate:(id)arg0 ;
-(void)_addProtectionSpace:(id)arg0 forSite:(id)arg1 isDefaultCredentialForSite:(BOOL)arg2 ;
-(void)_addSidecar:(id)arg0 forSite:(id)arg1 ;
-(void)_adoptSitesFromSavedAccount:(id)arg0 ;
-(void)_deleteCredentialForProtectionSpace:(id)arg0 fromStorage:(id)arg1 ;
-(void)_deleteCredentialTypes:(NSInteger)arg0 ;
-(void)_deletePasskeyCredentialRemovingCachedCredentialData:(BOOL)arg0 ;
-(void)_deletePasswordCredentialsForSite:(id)arg0 ;
-(void)_deletePasswordCredentialsRemovingCachedCredentialData:(BOOL)arg0 ;
-(void)_deleteSidecarForProtectionSpace:(id)arg0 fromStorage:(id)arg1 ;
-(void)_deleteSidecarsForPasskey;
-(void)_deleteTOTPGeneratorIfNecessary;
-(void)_mergePasskeySidecarsFromSavedAccount:(id)arg0 ;
-(void)_removePasskeyCredentialAndSidecars;
-(void)_removePasswordCredentialAndSidecars;
-(void)_updatePasskeySidecarsIfNecessaryWithBlock:(id)arg0 ;
-(void)_updatePasswordSidecarsIfNecessaryWithBlock:(id)arg0 ;
-(void)enumeratePasskeySidecarsWithBlock:(id)arg0 ;
-(void)enumeratePasswordSidecarsWithBlock:(id)arg0 ;
-(void)setTOTPGenerator:(id)arg0 ;


@end


#endif