// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSSAVEDACCOUNT_H
#define WBSSAVEDACCOUNT_H

@class NSMutableDictionary, NSMutableArray, NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "WBSPasswordWarningHideMarker.h"

@interface WBSSavedAccount : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_siteToProtectionSpaces;
    NSMutableArray *_sites;
    NSDate *_earliestPasswordCredentialModificationDate;
    NSMutableDictionary *_sitesToSidecars;
}


@property (readonly, nonatomic) NSInteger credentialTypes;
@property (readonly, nonatomic) NSString *currentOneTimeCode;
@property (readonly, nonatomic) BOOL hasSidecarData;
@property (readonly, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (readonly, nonatomic) NSString *highLevelDomain; // ivar: _highLevelDomain
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *notesEntry;
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSArray *persistentIdentifiersForWarningManager; // ivar: _persistentIdentifiersForWarningManager
@property (readonly, nonatomic) NSArray *protectionSpaces;
@property (nonatomic) BOOL shouldShowSpecificSubdomainForUserVisibleDomain; // ivar: _shouldShowSpecificSubdomainForUserVisibleDomain
@property (readonly, nonatomic) NSArray *sidecars;
@property (readonly, nonatomic) NSArray *sites;
@property (readonly, nonatomic) NSArray *totpGenerators;
@property (readonly, nonatomic) NSString *user; // ivar: _user
@property (readonly, nonatomic) BOOL userIsNeverSaveMarker; // ivar: _userIsNeverSaveMarker
@property (readonly, nonatomic) NSString *userVisibleDomain;
@property (readonly, nonatomic) NSArray *userVisibleSites;


+(BOOL)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer *)arg0 string:(id)arg1 pattern:(id)arg2 matchingType:(NSInteger)arg3 ;
+(void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer *)arg0 string:(id)arg1 pattern:(id)arg2 matchingType:(NSInteger)arg3 withBlock:(id)arg4 ;
-(BOOL)_containsProtectionSpace:(id)arg0 ;
-(BOOL)_matchesSearchPattern:(id)arg0 matchAgainstUser:(BOOL)arg1 associatedDomains:(id)arg2 ;
-(BOOL)isDuplicateWithoutUserNameOfSavedAccount:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesDomain:(id)arg0 associatedDomains:(id)arg1 ;
-(BOOL)matchesServiceNameHintString:(id)arg0 ;
-(BOOL)matchesUserTypedSearchPattern:(id)arg0 associatedDomains:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithHighLevelDomain:(id)arg0 user:(id)arg1 password:(id)arg2 ;
-(id)_sidecarForSite:(id)arg0 ;
-(id)description;
-(id)totpGeneratorForSite:(id)arg0 ;
-(void)_addPasswordCredentialModificationDate:(id)arg0 ;
-(void)_addProtectionSpace:(id)arg0 forSite:(id)arg1 ;
-(void)_addSidecar:(id)arg0 forSite:(id)arg1 ;
-(void)_adoptSitesFromSavedAccount:(id)arg0 ;
-(void)_deleteCredentialForProtectionSpace:(id)arg0 fromStorage:(id)arg1 ;
-(void)_deletePasswordCredentials;
-(void)_deletePasswordCredentialsForSite:(id)arg0 ;
-(void)_deleteSidecarForProtectionSpace:(id)arg0 fromStorage:(id)arg1 ;


@end


#endif