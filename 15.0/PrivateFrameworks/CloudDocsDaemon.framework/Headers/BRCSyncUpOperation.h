// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSYNCUPOPERATION_H
#define BRCSYNCUPOPERATION_H

@class BRCOperation, NSMutableDictionary, NSMutableArray, NSString, NSMutableOrderedSet;
@protocol BRCOperationSubclass;


#import "BRCLocalItem.h"
#import "BRCServerZone.h"

@interface BRCSyncUpOperation : BRCOperation <BRCOperationSubclass>

 {
    NSUInteger _requestID;
}


@property (retain, nonatomic) NSMutableDictionary *conflictLosersToResolveByRecordID; // ivar: _conflictLosersToResolveByRecordID
@property (readonly, nonatomic) float cost; // ivar: _cost
@property (readonly, nonatomic) NSMutableArray *createdAppLibraryNames; // ivar: _createdAppLibraryNames
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableOrderedSet *deletedRecordIDs; // ivar: _deletedRecordIDs
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL encounteredErrorOnPCSChainedItem; // ivar: _encounteredErrorOnPCSChainedItem
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BRCLocalItem *itemNeedingPCSChaining; // ivar: _itemNeedingPCSChaining
@property (retain, nonatomic) NSMutableArray *iworkUnsharedShareIDs; // ivar: _iworkUnsharedShareIDs
@property (retain, nonatomic) NSMutableArray *packagesInFlight; // ivar: _packagesInFlight
@property (retain, nonatomic) NSMutableDictionary *pluginFieldsForRecordDeletesByID; // ivar: _pluginFieldsForRecordDeletesByID
@property (retain, nonatomic) NSMutableDictionary *recordIDsToDeleteToEtags; // ivar: _recordIDsToDeleteToEtags
@property (retain, nonatomic) NSMutableArray *recordsNeedingNewSharingProtectionInfo; // ivar: _recordsNeedingNewSharingProtectionInfo
@property (retain, nonatomic) NSMutableArray *recordsNeedingUpdatedSharingProtectionInfo; // ivar: _recordsNeedingUpdatedSharingProtectionInfo
@property (retain, nonatomic) NSMutableArray *recordsToSave; // ivar: _recordsToSave
@property (retain, nonatomic) NSMutableDictionary *renamedShareIDsToNames; // ivar: _renamedShareIDsToNames
@property (retain, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (retain, nonatomic) NSString *stageID; // ivar: _stageID
@property (readonly) Class superclass;
@property (copy, nonatomic) id *syncUpCompletionBlock; // ivar: _syncUpCompletionBlock


+(id)syncUpOperationForZone:(id)arg0 maxCost:(float)arg1 retryAfter:(*NSUInteger)arg2 ;
-(BOOL)_performPCSChainOperationIfNecessaryWithCompletion:(id)arg0 ;
-(BOOL)_recordIsIWorkShareable:(id)arg0 ;
-(BOOL)prepareWithMaxCost:(float)arg0 retryAfter:(*NSUInteger)arg1 ;
-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)createActivity;
-(id)initWithZone:(id)arg0 ;
-(void)_performModifyRecordsOrPCSChainOperationWithCompletion:(id)arg0 ;
-(void)_performShareUpdateAndModifyRecordsWithCompletion:(id)arg0 ;
-(void)_performUpdateSharingProtectionDataIfNecessary:(id)arg0 ;
-(void)_scheduleShareUpdateAndModifyRecordsAndZoneCreationOperation;
-(void)_setSharingFieldsOnContentRecord:(id)arg0 withProtectionData:(id)arg1 baseToken:(id)arg2 routingKey:(id)arg3 forceOverwrite:(BOOL)arg4 ;
-(void)dealloc;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)performShareUpdate:(id)arg0 ;


@end


#endif