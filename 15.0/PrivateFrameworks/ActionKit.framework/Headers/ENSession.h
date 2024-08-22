// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENSESSION_H
#define ENSESSION_H

@class NSString, NSArray, NSDate;
@protocol ENLinkedNoteStoreClientDelegate, ENBusinessNoteStoreClientDelegate, ENAuthenticatorDelegate, ENAuthenticator, ENSDKLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ENAuthCache.h"
#import "ENBusinessNoteStoreClient.h"
#import "EDAMUser.h"
#import "ENPreferencesStore.h"
#import "ENNoteStoreClient.h"
#import "ENUserStoreClient.h"

@interface ENSession : NSObject <ENLinkedNoteStoreClientDelegate, ENBusinessNoteStoreClientDelegate, ENAuthenticatorDelegate>



@property (retain, nonatomic) ENAuthCache *authCache; // ivar: _authCache
@property (copy, nonatomic) id *authenticationCompletion; // ivar: _authenticationCompletion
@property (retain, nonatomic) NSObject<ENAuthenticator> *authenticator; // ivar: _authenticator
@property (readonly, nonatomic) NSString *businessDisplayName;
@property (retain, nonatomic) ENBusinessNoteStoreClient *businessNoteStore; // ivar: _businessNoteStore
@property (nonatomic) NSInteger businessUploadLimit; // ivar: _businessUploadLimit
@property (nonatomic) NSInteger businessUploadUsage; // ivar: _businessUploadUsage
@property (retain, nonatomic) EDAMUser *businessUser; // ivar: _businessUser
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAuthenticated; // ivar: _isAuthenticated
@property (readonly, nonatomic) BOOL isAuthenticationInProgress;
@property (readonly, nonatomic) BOOL isBusinessUser;
@property (readonly, nonatomic) BOOL isPremiumUser;
@property (retain, nonatomic) NSObject<ENSDKLogging> *logger; // ivar: _logger
@property (retain, nonatomic) NSArray *notebooksCache; // ivar: _notebooksCache
@property (retain, nonatomic) NSDate *notebooksCacheDate; // ivar: _notebooksCacheDate
@property (nonatomic) NSInteger personalUploadLimit; // ivar: _personalUploadLimit
@property (nonatomic) NSInteger personalUploadUsage; // ivar: _personalUploadUsage
@property (retain, nonatomic) ENPreferencesStore *preferences; // ivar: _preferences
@property (copy, nonatomic) NSString *primaryAuthenticationToken; // ivar: _primaryAuthenticationToken
@property (retain, nonatomic) ENNoteStoreClient *primaryNoteStore; // ivar: _primaryNoteStore
@property (copy, nonatomic) NSString *sessionHost; // ivar: _sessionHost
@property (copy, nonatomic) NSString *sourceApplication; // ivar: _sourceApplication
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsLinkedAppNotebook; // ivar: _supportsLinkedAppNotebook
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *thumbnailQueue; // ivar: _thumbnailQueue
@property (retain, nonatomic) EDAMUser *user; // ivar: _user
@property (readonly, nonatomic) NSString *userDisplayName;
@property (retain, nonatomic) ENUserStoreClient *userStore; // ivar: _userStore
@property (retain, nonatomic) ENUserStoreClient *userStorePendingRevocation; // ivar: _userStorePendingRevocation


+(BOOL)checkSharedSessionSettings;
+(id)bundleSeedID;
+(id)consumerKey;
+(id)consumerSecret;
+(id)developerToken;
+(id)keychainAccessGroup;
+(id)sharedSession;
+(void)setDisableRefreshingNotebooksCacheOnLaunch:(BOOL)arg0 ;
+(void)setKeychainGroup:(id)arg0 ;
+(void)setSecurityApplicationGroupIdentifier:(id)arg0 ;
+(void)setSharedSessionConsumerKey:(id)arg0 consumerSecret:(id)arg1 optionalHost:(id)arg2 ;
+(void)setSharedSessionDeveloperToken:(id)arg0 noteStoreUrl:(id)arg1 ;
-(BOOL)appNotebookIsLinked;
-(BOOL)handleOpenURL:(id)arg0 ;
-(BOOL)isErrorDueToRestrictedAuth:(id)arg0 ;
-(id)authenticationTokenForBusinessStoreClient:(id)arg0 ;
-(id)authenticationTokenForLinkedNotebookRef:(id)arg0 ;
-(id)authenticationTokenForNoteRef:(id)arg0 ;
-(id)credentialStore;
-(id)credentialsForHost:(id)arg0 ;
-(id)currentProfileName;
-(id)init;
-(id)noteStoreForLinkedNotebook:(id)arg0 ;
-(id)noteStoreForNoteRef:(id)arg0 ;
-(id)noteStoreForNotebook:(id)arg0 ;
-(id)noteStoreUrlForBusinessStoreClient:(id)arg0 ;
-(id)primaryCredentials;
-(id)shardIdForNoteRef:(id)arg0 ;
-(id)validBusinessAuthenticationResult;
-(void)addCredentials:(id)arg0 ;
-(void)authenticatorDidAuthenticateWithCredentials:(id)arg0 authInfo:(id)arg1 ;
-(void)authenticatorDidFailWithError:(id)arg0 ;
-(void)completeAuthenticationWithError:(id)arg0 ;
-(void)dealloc;
-(void)deleteNote:(id)arg0 completion:(id)arg1 ;
// -(void)downloadNote:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
-(void)downloadThumbnailForNote:(id)arg0 maxDimension:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)findNotesWithSearch:(id)arg0 inNotebook:(id)arg1 orScope:(NSUInteger)arg2 sortOrder:(NSUInteger)arg3 maxResults:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)findNotes_completeWithContext:(id)arg0 error:(id)arg1 ;
-(void)findNotes_findInBusinessScopeWithContext:(id)arg0 ;
-(void)findNotes_findInLinkedScopeWithContext:(id)arg0 ;
-(void)findNotes_findInPersonalScopeWithContext:(id)arg0 ;
-(void)findNotes_listNotebooksWithContext:(id)arg0 ;
-(void)findNotes_nextFindInLinkedScopeWithContext:(id)arg0 ;
-(void)findNotes_processResultsWithContext:(id)arg0 ;
-(void)listNotebooksWithCompletion:(id)arg0 ;
-(void)listNotebooks_cleanCache;
-(void)listNotebooks_completePendingSharedNotebookWithContext:(id)arg0 ;
-(void)listNotebooks_completeWithContext:(id)arg0 error:(id)arg1 ;
-(void)listNotebooks_fetchBusinessNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_fetchSharedBusinessNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_fetchSharedNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_listLinkedNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_listNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_listSharedNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_prepareResultsWithContext:(id)arg0 ;
-(void)listNotebooks_processBusinessNotebooksWithContext:(id)arg0 ;
-(void)listNotebooks_processSharedNotebooksWithContext:(id)arg0 ;
-(void)listWritableNotebooksWithCompletion:(id)arg0 ;
-(void)notifyAuthenticationChanged;
-(void)performPostAuthentication;
-(void)refreshUploadUsage;
-(void)saveCredentialStore:(id)arg0 ;
-(void)selectInitialSessionHost;
-(void)setCurrentProfileNameFromHost:(id)arg0 ;
-(void)shareNote:(id)arg0 completion:(id)arg1 ;
-(void)startup;
-(void)storeClientFailedAuthentication:(id)arg0 ;
-(void)unauthenticate;
-(void)unauthenticateAndRevokeAccessToken:(BOOL)arg0 ;
-(void)unauthenticateWithoutRevokingAccessToken;
-(void)uploadNote:(id)arg0 notebook:(id)arg1 completion:(id)arg2 ;
// -(void)uploadNote:(id)arg0 policy:(NSInteger)arg1 toNotebook:(id)arg2 orReplaceNote:(id)arg3 progress:(id)arg4 completion:(unk)arg5  ;
-(void)uploadNote_completeWithContext:(id)arg0 error:(id)arg1 ;
-(void)uploadNote_createWithContext:(id)arg0 ;
-(void)uploadNote_determineDestinationWithContext:(id)arg0 ;
-(void)uploadNote_findLinkedAppNotebookWithContext:(id)arg0 ;
-(void)uploadNote_findSharedAppNotebookWithContext:(id)arg0 ;
-(void)uploadNote_updateWithContext:(id)arg0 ;


@end


#endif