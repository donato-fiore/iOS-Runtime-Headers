// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMAILBOXUID_H
#define MFMAILBOXUID_H

@class NSString, MFWeakReferenceHolder, NSMutableArray, NSNumber, NSMutableDictionary, NSURL, NSEnumerator, NSArray, EMMailboxObjectID;
@protocol NSCopying, EFPubliclyDescribable, EDIndexableMailbox;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "MFMessageCriterion.h"
#import "MFInvocationQueue.h"
#import "MFMailboxUid.h"

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable, EDIndexableMailbox>

 {
    NSString *uniqueId;
    NSInteger _mailboxID;
    MailAccount *_account;
    NSString *_pathComponent;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSNumber *_pendingLevel;
    uint8_t _type;
    uint8_t _isSendLater;
    NSMutableDictionary *_userInfo;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, nonatomic) MailAccount *account;
@property (readonly, copy, nonatomic) NSString *accountRelativePath;
@property (readonly, nonatomic) MFInvocationQueue *attachmentDownloadQueue;
@property (nonatomic) NSUInteger attributes; // ivar: _attributes
@property (readonly, nonatomic) NSEnumerator *childEnumerator;
@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *decodedName;
@property (readonly, nonatomic) NSEnumerator *depthFirstEnumerator;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) NSArray *extraAttributes; // ivar: _extraAttributes
@property (readonly, nonatomic) BOOL hasChildren;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isRootMailbox;
@property int mailboxType;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger numberOfChildren;
@property (readonly, nonatomic) NSUInteger numberOfDescendants;
@property (readonly, nonatomic) EMMailboxObjectID *objectID;
@property (retain, nonatomic) MFMailboxUid *parent;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, nonatomic) NSUInteger suggestionsLostMessageSearchResultCount;
@property (readonly, nonatomic) CGFloat suggestionsLostMessageSearchTimestamp;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)isDraftsMailboxType:(int)arg0 ;
+(BOOL)isOutgoingMailboxType:(int)arg0 ;
+(BOOL)isSentMailboxType:(int)arg0 ;
+(BOOL)isStandardizedMailboxUidType:(int)arg0 ;
+(BOOL)typeIsValidTransferDestination:(int)arg0 ;
+(id)defaultScheduler;
+(id)fileURLForMailboxURL:(id)arg0 ;
+(id)log;
+(id)specialNameForType:(int)arg0 ;
-(BOOL)alwaysWriteFullMessageFile;
-(BOOL)isContainer;
-(BOOL)isDescendantOfMailbox:(id)arg0 ;
-(BOOL)isNotesMailboxUid;
-(BOOL)isOutgoingMailboxUid;
-(BOOL)isSendLaterMailbox;
-(BOOL)isSentMailboxUid;
-(BOOL)isShared;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isStandardizedMailboxUid;
-(BOOL)isStore;
-(BOOL)isValid;
-(BOOL)isVisible;
-(BOOL)mergeWithUserInfo:(id)arg0 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)shouldUseNonDeletedForUnreadCount;
-(BOOL)userInfoBoolForKey:(id)arg0 ;
-(NSInteger)compareWithMailboxUid:(id)arg0 ;
-(NSInteger)indexToInsertChildMailboxUid:(id)arg0 ;
-(NSInteger)mailboxID;
-(NSUInteger)indexOfChild:(id)arg0 ;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)unreadCount;
-(NSUInteger)unreadCountMatchingCriterion:(id)arg0 ;
-(id)URLWithAccount:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithName:(id)arg0 attributes:(NSUInteger)arg1 forAccount:(id)arg2 ;
-(id)_loadUserInfo;
-(id)_mutableChildren;
-(id)_privacySafeDescription;
-(id)ancestralAccount;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg0 ;
-(id)childWithExtraAttribute:(id)arg0 ;
-(id)childWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)criterion;
-(id)descendantWithExtraAttribute:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)displayNameUsingSpecialNames;
-(id)fullPath;
-(id)fullPathNonNil;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithName:(id)arg0 attributes:(NSUInteger)arg1 forAccount:(id)arg2 extraAttributes:(id)arg3 ;
-(id)initWithName:(id)arg0 attributes:(NSUInteger)arg1 forAccount:(id)arg2 extraAttributes:(id)arg3 type:(int)arg4 ;
-(id)mutableCopyOfChildren;
-(id)mutableDictionaryRepresentation;
-(id)pathRelativeToMailbox:(id)arg0 ;
-(id)pathRelativeToMailboxForDisplay:(id)arg0 ;
-(id)realFullPath;
-(id)redactedName:(id)arg0 ;
-(id)representedAccount;
-(id)rootMailbox;
-(id)store;
-(id)topMailbox;
-(id)uniqueId;
-(id)userInfoDictionary;
-(id)userInfoForSerialization;
-(id)userInfoObjectForKey:(id)arg0 ;
-(void)addToPostOrderTraversal:(id)arg0 ;
-(void)flushCriteria;
-(void)invalidate;
-(void)removeChild:(id)arg0 ;
-(void)saveUserInfo;
-(void)setRepresentedAccount:(id)arg0 ;
-(void)setUserInfoBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;
-(void)setUserInfoWithDictionary:(id)arg0 ;
-(void)sortChildren;
-(void)updateMostRecentStatusCount:(NSUInteger)arg0 ;
-(void)updateSuggestionsLostMessageSearchResultCount:(NSUInteger)arg0 ;


@end


#endif