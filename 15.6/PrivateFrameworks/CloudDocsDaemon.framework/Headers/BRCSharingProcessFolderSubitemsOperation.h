// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHARINGPROCESSFOLDERSUBITEMSOPERATION_H
#define BRCSHARINGPROCESSFOLDERSUBITEMSOPERATION_H

@class BRCFrameworkOperation, NSMutableArray, NSString;
@protocol BRCOperationSubclass;


#import "BRCPrivateClientZone.h"
#import "BRCItemID.h"
#import "BRCALRowID.h"

@interface BRCSharingProcessFolderSubitemsOperation : BRCFrameworkOperation <BRCOperationSubclass>

 {
    NSUInteger _rowID;
    NSUInteger _processType;
    NSUInteger _batchSize;
    NSUInteger _failedSubitemsLeft;
    NSMutableArray *_sharedClientSubitems;
    NSMutableArray *_aliasItemsToDelete;
    NSMutableArray *_shareIDsToDelete;
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
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)computeURLForItemID:(id)arg0 rootURL:(id)arg1 ;
-(id)createActivity;
-(id)initWithItem:(id)arg0 processType:(NSUInteger)arg1 maxSubitemsToFail:(NSUInteger)arg2 ;
-(void)main;
-(void)processClientTruthWithCompletion:(id)arg0 ;
-(void)processServerTruthWithCompletion:(id)arg0 ;
-(void)removeSharedSubitemsWithCompletion:(id)arg0 ;


@end


#endif