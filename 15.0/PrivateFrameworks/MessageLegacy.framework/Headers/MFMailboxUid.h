// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILBOXUID_H
#define MFMAILBOXUID_H

@class NSString, MFWeakReferenceHolder, NSMutableArray, NSNumber, NSMutableDictionary, NSArray;
@protocol NSCopying, EFPubliclyDescribable;

#import <Foundation/Foundation.h>

#import "MailAccount.h"
#import "MFMessageCriterion.h"
#import "MFInvocationQueue.h"

@interface MFMailboxUid : NSObject <NSCopying, EFPubliclyDescribable>

 {
    NSString *uniqueId;
    unsigned int _mailboxID;
    MFWeakReferenceHolder *_account;
    NSString *_pathComponent;
    unsigned int _attributes;
    MFWeakReferenceHolder *_parent;
    NSMutableArray *_children;
    MailAccount *_representedAccount;
    MFMessageCriterion *_criterion;
    BOOL allCriteriaMustBeSatisfied;
    NSString *_realFullPath;
    NSNumber *_pendingLevel;
    int _type;
    NSMutableDictionary *_userInfo;
}


@property (readonly, nonatomic) MFInvocationQueue *attachmentDownloadQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) NSArray *extraAttributes; // ivar: _extraAttributes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger suggestionsLostMessageSearchResultCount;
@property (readonly, nonatomic) CGFloat suggestionsLostMessageSearchTimestamp;
@property (readonly) Class superclass;


+(BOOL)isDraftsMailboxType:(int)arg0 ;
+(BOOL)isOutgoingMailboxType:(int)arg0 ;
+(BOOL)isSentMailboxType:(int)arg0 ;
+(BOOL)isStandardizedMailboxUidType:(int)arg0 ;
+(BOOL)typeIsValidTransferDestination:(int)arg0 ;
+(id)fileURLForMailboxURL:(id)arg0 ;
+(id)specialNameForType:(int)arg0 ;
-(BOOL)alwaysWriteFullMessageFile;
-(BOOL)hasChildren;
-(BOOL)isContainer;
-(BOOL)isDescendantOfMailbox:(id)arg0 ;
-(BOOL)isNotesMailboxUid;
-(BOOL)isOutgoingMailboxUid;
-(BOOL)isSentMailboxUid;
-(BOOL)isShared;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isStandardizedMailboxUid;
-(BOOL)isStore;
-(BOOL)isValid;
-(BOOL)isVisible;
-(BOOL)mergeWithUserInfo:(id)arg0 ;
-(BOOL)setChildren:(id)arg0 ;
-(BOOL)shouldRestoreMessagesAfterFailedDelete;
-(BOOL)shouldUseNonDeletedForUnreadCount;
-(BOOL)userInfoBoolForKey:(id)arg0 ;
-(NSInteger)compareWithMailboxUid:(id)arg0 ;
-(NSInteger)indexToInsertChildMailboxUid:(id)arg0 ;
-(NSInteger)statusCountDelta;
-(NSUInteger)indexOfChild:(id)arg0 ;
-(NSUInteger)nonDeletedCount;
-(NSUInteger)numberOfChildren;
-(NSUInteger)numberOfDescendants;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(NSUInteger)unreadCount;
-(NSUInteger)unreadCountMatchingCriterion:(id)arg0 ;
-(id)URL;
-(id)URLString;
-(id)URLStringNonNil;
-(id)URLStringWithAccount:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithName:(id)arg0 attributes:(unsigned int)arg1 forAccount:(id)arg2 ;
-(id)_loadUserInfo;
-(id)_mutableChildren;
-(id)_privacySafeDescription;
-(id)account;
-(id)accountDisplayName;
-(id)accountRelativePath;
-(id)ancestralAccount;
-(id)childAtIndex:(NSUInteger)arg0 ;
-(id)childEnumerator;
-(id)childEnumeratorIncludingHiddenChildren:(BOOL)arg0 ;
-(id)childWithExtraAttribute:(id)arg0 ;
-(id)childWithName:(id)arg0 ;
-(id)children;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)criterion;
-(id)depthFirstEnumerator;
-(id)descendantWithExtraAttribute:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)displayNameUsingSpecialNames;
-(id)fullPath;
-(id)fullPathNonNil;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithName:(id)arg0 attributes:(unsigned int)arg1 forAccount:(id)arg2 extraAttributes:(id)arg3 ;
-(id)lastViewedMessageDate;
-(id)lastViewedMessageID;
-(id)mutableCopyOfChildren;
-(id)mutableDictionaryRepresentation;
-(id)name;
-(id)oldURLString;
-(id)parent;
-(id)pathRelativeToMailbox:(id)arg0 ;
-(id)pathRelativeToMailboxForDisplay:(id)arg0 ;
-(id)realFullPath;
-(id)representedAccount;
-(id)rootMailbox;
-(id)store;
-(id)tildeAbbreviatedPath;
-(id)topMailbox;
-(id)uniqueId;
-(id)userInfoDictionary;
-(id)userInfoForSerialization;
-(id)userInfoObjectForKey:(id)arg0 ;
-(int)type;
-(unsigned int)attributes;
-(unsigned int)mailboxID;
-(void)addToPostOrderTraversal:(id)arg0 ;
-(void)dealloc;
-(void)flushCriteria;
-(void)invalidate;
-(void)removeChild:(id)arg0 ;
-(void)saveUserInfo;
-(void)setAttributes:(unsigned int)arg0 ;
-(void)setCriterion:(id)arg0 ;
-(void)setLastViewedMessageID:(id)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setParent:(id)arg0 ;
-(void)setRepresentedAccount:(id)arg0 ;
-(void)setType:(int)arg0 ;
-(void)setUserInfoBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg0 forKey:(id)arg1 ;
-(void)setUserInfoWithDictionary:(id)arg0 ;
-(void)sortChildren;
-(void)updateMostRecentStatusCount:(NSUInteger)arg0 ;
-(void)updateSuggestionsLostMessageSearchResultCount:(NSUInteger)arg0 ;


@end


#endif