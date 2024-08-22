// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LOCALACCOUNT_H
#define LOCALACCOUNT_H



#import "MailAccount.h"

@interface LocalAccount : MailAccount



+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)csAccountTypeString;
+(id)defaultPathNameForAccountWithHostname:(id)arg0 username:(id)arg1 ;
+(id)localAccount;
-(BOOL)_setChildren:(id)arg0 forMailboxUid:(id)arg1 ;
-(BOOL)_shouldConfigureMailboxCache;
-(BOOL)canFetch;
-(BOOL)canGoOffline;
-(BOOL)deleteInPlaceForMailbox:(id)arg0 ;
-(BOOL)isActive;
-(BOOL)renameMailbox:(id)arg0 newName:(id)arg1 parent:(id)arg2 ;
-(BOOL)supportsAppend;
-(BOOL)supportsArchiving;
-(BOOL)supportsPurge;
-(Class)storeClass;
-(id)_URLScheme;
-(id)_copyMailboxUidWithParent:(id)arg0 name:(id)arg1 attributes:(unsigned int)arg2 existingMailboxUid:(id)arg3 dictionary:(id)arg4 ;
-(id)_infoForMatchingURL:(id)arg0 ;
-(id)displayName;
-(id)initWithLibrary:(id)arg0 persistentAccount:(id)arg1 ;
-(id)mailboxPathExtension;
-(id)mailboxUidForFileSystemPath:(id)arg0 ;
-(id)primaryMailboxUid;
-(id)pushedMailboxUids;
-(id)transientDraftsFolder;
-(id)transientDraftsFolderShouldCreate:(BOOL)arg0 ;
-(id)uniqueId;
-(void)_synchronouslyLoadListingForParent:(id)arg0 ;
-(void)resetSpecialMailboxes;
-(void)setHostname:(id)arg0 ;
-(void)setPassword:(id)arg0 ;
-(void)setUsername:(id)arg0 ;


@end


#endif