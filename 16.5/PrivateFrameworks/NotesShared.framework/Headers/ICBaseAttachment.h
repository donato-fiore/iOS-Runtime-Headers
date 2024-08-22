// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICBASEATTACHMENT_H
#define ICBASEATTACHMENT_H

@class NSString;


#import "ICCloudSyncingObject.h"
#import "ICAccount.h"
#import "ICNote.h"
#import "ICAttachment.h"
#import "ICBaseAttachment.h"

@interface ICBaseAttachment : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) ICNote *note;
@property (retain, nonatomic) ICAttachment *parentAttachment;
@property (readonly, nonatomic) ICBaseAttachment *rootParentAttachment;
@property (copy, nonatomic) NSString *typeUTI;


+(id)attachmentWithIdentifier:(id)arg0 context:(id)arg1 ;
+(id)attachmentWithIdentifier:(id)arg0 includeDeleted:(BOOL)arg1 context:(id)arg2 ;
+(id)attachmentsMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)newAttachmentWithIdentifier:(id)arg0 note:(id)arg1 ;
+(id)notDeletedPredicate;
+(id)predicateForUnsupportedAttachmentsInContext:(id)arg0 ;
+(id)predicateForVisibleAttachmentsInContext:(id)arg0 ;
+(id)predicateForVisibleAttachmentsIncludingTrash:(BOOL)arg0 inContext:(id)arg1 ;
+(id)predicateForVisibleAttachmentsIncludingTrashInContext:(id)arg0 ;
+(id)predicateForVisibleObjects;
+(void)deleteAttachment:(id)arg0 ;
+(void)purgeAttachment:(id)arg0 ;
+(void)undeleteAttachment:(id)arg0 ;
-(BOOL)isVisible;
-(id)cloudAccount;
-(id)parentCloudObject;
-(id)parentCloudObjectForMinimumSupportedVersionPropagation;


@end


#endif