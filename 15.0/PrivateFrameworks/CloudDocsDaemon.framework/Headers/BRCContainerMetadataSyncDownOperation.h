// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCCONTAINERMETADATASYNCDOWNOPERATION_H
#define BRCCONTAINERMETADATASYNCDOWNOPERATION_H

@class BRCOperation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol BRCOperationSubclass;


#import "BRCAccountSession.h"
#import "BRCContainerMetadataSyncPersistedState.h"

@interface BRCContainerMetadataSyncDownOperation : BRCOperation <BRCOperationSubclass>

 {
    BRCAccountSession *_session;
    BRCContainerMetadataSyncPersistedState *_state;
    NSMutableArray *_recordIDsForDesiredAssets;
    NSMutableArray *_desiredKeysForDesiredAssets;
    NSMutableDictionary *_recordIDsToVersionETagsForDesiredAssets;
    NSMutableSet *_containerIDsUpdated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldFetchAnotherBatch; // ivar: _shouldFetchAnotherBatch
@property (readonly) Class superclass;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithSession:(id)arg0 state:(id)arg1 ;
-(void)_completedWithServerChangeToken:(id)arg0 requestID:(NSUInteger)arg1 ;
-(void)main;
-(void)performAfterCreatingZoneIfNeeded:(id)arg0 ;
-(void)performAfterFetchingAssetContents:(id)arg0 ;
-(void)performAfterFetchingRecordChanges:(id)arg0 ;


@end


#endif