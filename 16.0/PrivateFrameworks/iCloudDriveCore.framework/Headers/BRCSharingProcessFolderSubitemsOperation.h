// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSHARINGPROCESSFOLDERSUBITEMSOPERATION_H
#define BRCSHARINGPROCESSFOLDERSUBITEMSOPERATION_H

@class BRCFrameworkOperation, NSMutableArray, NSString;
@protocol BRCListOperationDelegate, BRCOperationSubclass;


#import "BRCPrivateClientZone.h"
#import "BRCItemID.h"
#import "BRCALRowID.h"

@interface BRCSharingProcessFolderSubitemsOperation : BRCFrameworkOperation <BRCListOperationDelegate, BRCOperationSubclass>

 {
    NSUInteger _rowID;
    NSUInteger _batchSize;
    NSUInteger _failedSubitemsLeft;
    NSUInteger _processType;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_sharedServerSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
    NSMutableArray *_activeListOperations;
    BRCPrivateClientZone *_rootClientZone;
    BRCItemID *_rootItemID;
    BRCALRowID *_appLibraryRowID;
    BOOL _isFSRoot;
    BOOL _alreadyHasShareID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_completeAfterProcessingClientTruthIfNecessaryWithError:(id)arg0 ;
-(BOOL)_completeAfterProcessingServerTruthIfNecessaryWithError:(id)arg0 ;
-(BOOL)deleteShareInfoFromZone:(id)arg0 zoneRowID:(id)arg1 itemID:(id)arg2 sharingOptions:(NSUInteger)arg3 itemsTable:(id)arg4 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)computeURLForItemID:(id)arg0 rootURL:(id)arg1 ;
-(id)createActivity;
-(id)initWithItem:(id)arg0 processType:(NSUInteger)arg1 maxSubitemsToFail:(NSUInteger)arg2 ;
-(void)_stopObservingListOperation;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)main;
-(void)processClientTruthWithCompletion:(id)arg0 ;
-(void)processServerItemsUnderItemID:(id)arg0 completion:(id)arg1 ;
-(void)processServerTruthWithCompletion:(id)arg0 ;
-(void)removeSharedSubitemsWithCompletion:(id)arg0 ;


@end


#endif