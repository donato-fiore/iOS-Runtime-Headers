// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSHARINGMODIFYSHAREOPERATION_H
#define BRCSHARINGMODIFYSHAREOPERATION_H

@class BRCFrameworkOperation, CKShare, CKRecord, NSString;
@protocol BRCOperationSubclass;


#import "BRCServerZone.h"
#import "BRCItemID.h"

@interface BRCSharingModifyShareOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    BRCServerZone *_serverZone;
    CKShare *_share;
    BRCItemID *_itemID;
    CKRecord *_sharingIdentityPreparedRecord;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldFetchSharingIdentity:(BOOL)arg0 ;
-(id)createActivity;
-(id)initWithName:(id)arg0 zone:(id)arg1 share:(id)arg2 ;
-(void)_performAfterCopyingPublicSharingKeyWithRecordID:(id)arg0 completion:(id)arg1 ;
-(void)_performAfterFetchingSharingIdentityOnDirectoryItem:(id)arg0 wantRoutingKey:(BOOL)arg1 completion:(id)arg2 ;
-(void)_performAfterFetchingSharingIdentityOnDocumentItem:(id)arg0 wantRoutingKey:(BOOL)arg1 completion:(id)arg2 ;
-(void)_performAfterFetchingiWorkRoutingTokenIfNecessary:(id)arg0 completion:(id)arg1 ;
-(void)_performAfterFetchingiWorkSharingIdentityOnItem:(id)arg0 wantRoutingKey:(BOOL)arg1 completion:(id)arg2 ;
-(void)_performAfterGettingPublicSharingKeyForRecord:(id)arg0 completion:(id)arg1 ;
-(void)_performAfterPreparingSharingIdentityIfNecessaryWhenWantRoutingKey:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updateDBAndSyncDownIfNeededWithShare:(id)arg0 recordsToLearnCKInfo:(id)arg1 ;
-(void)invalidate;
-(void)main;
-(void)performAfterPreparingSharingIdentityIfNecessary:(id)arg0 ;


@end


#endif