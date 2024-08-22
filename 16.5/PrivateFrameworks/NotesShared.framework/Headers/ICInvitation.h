// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICINVITATION_H
#define ICINVITATION_H

@class NSManagedObject, NSDate, NSString, CKShare, NSData, NSURL;


#import "ICAccount.h"
#import "ICCloudSyncingObject.h"

@interface ICInvitation : NSManagedObject

@property (retain, nonatomic) ICAccount *account;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) NSInteger noteCount;
@property (nonatomic) NSInteger noteCountRecursive;
@property (copy, nonatomic) NSDate *receivedDate;
@property (retain, nonatomic) ICCloudSyncingObject *rootObject;
@property (copy, nonatomic) NSString *rootObjectType;
@property (retain, nonatomic) CKShare *serverShare; // ivar: _serverShare
@property (copy, nonatomic) NSData *serverShareData;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *snippet;
@property (nonatomic) NSInteger snippetAttachmentCount;
@property (nonatomic) short snippetAttachmentType;
@property (nonatomic) NSInteger subfolderCount;
@property (nonatomic) NSInteger subfolderCountRecursive;
@property (copy, nonatomic) NSData *thumbnailDataDark;
@property (copy, nonatomic) NSData *thumbnailDataLight;
@property (copy, nonatomic) NSString *title;


+(id)allInvitationsInContext:(id)arg0 ;
+(id)invitationWithShareURL:(id)arg0 context:(id)arg1 ;
+(id)invitationsMatchingPredicate:(id)arg0 context:(id)arg1 ;
+(id)makeInvitationIfNeededWithShareURL:(id)arg0 account:(id)arg1 context:(id)arg2 ;
+(id)makeInvitationWithShareURL:(id)arg0 account:(id)arg1 context:(id)arg2 ;
+(id)predicateForPendingInvitationsInAccount:(id)arg0 ;
+(id)predicateForPendingInvitationsInAccount:(id)arg0 receivedSince:(id)arg1 ;
+(id)shareSystemFieldsTransformer;


@end


#endif