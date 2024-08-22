// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMMAILBOX_H
#define EMMAILBOX_H

@class NSString, NSURL;
@protocol EMMailboxBuilder, NSSecureCoding, EFPubliclyDescribable;


#import "EMRepositoryObject.h"
#import "EMReceivingAccount.h"
#import "EMObjectID.h"
#import "EMMailboxCollection.h"
#import "EMMailboxObjectID.h"
#import "EMMailbox.h"
#import "EMMailboxRepository.h"

@interface EMMailbox : EMRepositoryObject <EMMailboxBuilder, NSSecureCoding, EFPubliclyDescribable>

 {
    EMReceivingAccount *_account;
    BOOL _descriptionUsesRealName;
}


@property (readonly, nonatomic) EMReceivingAccount *account;
@property (readonly, nonatomic) EMObjectID *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL canArchive; // ivar: _canArchive
@property (nonatomic) BOOL canContainMessages; // ivar: _canContainMessages
@property (retain, nonatomic) EMMailboxCollection *children; // ivar: _children
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL descriptionUsesRealName;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, nonatomic) NSURL *externalURL;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDraftsMailbox;
@property (readonly, nonatomic) BOOL isInboxMailbox;
@property (readonly, nonatomic) BOOL isOutgoingMailbox;
@property (readonly, nonatomic) BOOL isSendLaterMailbox;
@property (readonly, nonatomic) BOOL isSentMailbox;
@property (readonly, nonatomic) BOOL isSmartMailbox;
@property (readonly, nonatomic) BOOL isTopLevelMailbox;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) EMMailboxObjectID *objectID;
@property (weak, nonatomic) EMMailbox *parent; // ivar: _parent
@property (readonly, nonatomic) EMMailboxObjectID *parentID; // ivar: _parentID
@property (readonly, copy, nonatomic) NSString *redactedName; // ivar: _redactedName
@property (retain, nonatomic) EMMailboxRepository *repository;
@property (readonly, nonatomic) BOOL shouldArchiveByDefault;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsSelectAll;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)_isOutgoingMailboxType:(NSInteger)arg0 ;
+(BOOL)deleteMovesToTrashForMailboxes:(id)arg0 ;
+(BOOL)shouldArchiveByDefaultForMailboxes:(id)arg0 ;
+(BOOL)supportsArchivingForMailboxes:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(BOOL)supportsSelectAllForMailboxes:(id)arg0 ;
+(BOOL)typeIsValidTransferDestination:(NSInteger)arg0 ;
+(id)_predicateForSmartMailboxes:(BOOL)arg0 ;
+(id)predicateForMailboxAccount:(id)arg0 ;
+(id)predicateForMailboxAccount:(id)arg0 topLevelOnly:(BOOL)arg1 ;
+(id)predicateForMailboxAccountIdentifier:(id)arg0 topLevelOnly:(BOOL)arg1 ;
+(id)predicateForMailboxChildren:(id)arg0 ;
+(id)predicateForMailboxName:(id)arg0 ;
+(id)predicateForMailboxType:(NSInteger)arg0 ;
+(id)predicateForPrimaryMailboxWithAccount:(id)arg0 ;
+(id)predicateForRegularMailboxes;
+(id)predicateForSmartMailboxes;
+(id)predicateForTopLevelMailboxes;
+(id)sortDescriptorForDisplayOrder;
+(id)sortDescriptorForNameAscending:(BOOL)arg0 ;
-(BOOL)_canArchiveForMailboxType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 accountIdentifier:(id)arg2 type:(NSInteger)arg3 builder:(id)arg4 ;
-(id)initWithObjectID:(id)arg0 repository:(id)arg1 name:(id)arg2 accountIdentifier:(id)arg3 type:(NSInteger)arg4 builder:(id)arg5 ;
-(void)_commonInitName:(id)arg0 accountIdentifier:(id)arg1 type:(NSInteger)arg2 canContainMessages:(BOOL)arg3 children:(id)arg4 parentID:(id)arg5 builder:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif