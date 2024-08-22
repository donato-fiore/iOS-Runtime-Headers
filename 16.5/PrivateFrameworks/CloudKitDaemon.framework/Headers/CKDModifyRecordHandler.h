// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMODIFYRECORDHANDLER_H
#define CKDMODIFYRECORDHANDLER_H

@class NSDictionary, NSError, NSString, CKRecord, CKRecordID, NSMutableDictionary;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKDModifyRecordsOperation.h"
#import "CKDPCSCache.h"
#import "CKDPCSManager.h"
#import "CKDProgressTracker.h"
#import "CKDRecordPCSData.h"
#import "CKDSharePCSData.h"
#import "CKDZonePCSData.h"

@interface CKDModifyRecordHandler : NSObject

@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (nonatomic) NSInteger batchRank; // ivar: _batchRank
@property (nonatomic) BOOL didAttemptZoneWideShareKeyRoll; // ivar: _didAttemptZoneWideShareKeyRoll
@property (nonatomic) BOOL didRollRecordPCSMasterKey; // ivar: _didRollRecordPCSMasterKey
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (nonatomic) BOOL isDelete; // ivar: _isDelete
@property (readonly, nonatomic) BOOL isShare;
@property (nonatomic) BOOL needsRefetch; // ivar: _needsRefetch
@property (weak, nonatomic) CKDModifyRecordsOperation *operation; // ivar: _operation
@property (readonly, nonatomic) CKDPCSCache *pcsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *pcsGroup; // ivar: _pcsGroup
@property (readonly, nonatomic) CKDPCSManager *pcsManager;
@property (retain, nonatomic) CKDProgressTracker *progressTracker; // ivar: _progressTracker
@property (retain, nonatomic) CKRecord *record; // ivar: _record
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData; // ivar: _recordPCSData
@property (retain, nonatomic) NSMutableDictionary *rereferencedAssetArrayByFieldname; // ivar: _rereferencedAssetArrayByFieldname
@property (nonatomic) int saveAttempts; // ivar: _saveAttempts
@property (nonatomic) BOOL saveCompletionBlockCalled; // ivar: _saveCompletionBlockCalled
@property (retain, nonatomic) CKRecord *serverRecord; // ivar: _serverRecord
@property (retain, nonatomic) CKDSharePCSData *sharePCSData; // ivar: _sharePCSData
@property (retain, nonatomic) CKDZonePCSData *sharedZonePCSData; // ivar: _sharedZonePCSData
@property (nonatomic) NSUInteger state; // ivar: _state


+(id)_stringForState:(NSUInteger)arg0 ;
+(id)modifyHandlerForDeleteWithRecordID:(id)arg0 operation:(id)arg1 ;
+(id)modifyHandlerWithRecord:(id)arg0 operation:(id)arg1 ;
-(BOOL)_canSetPreviousProtectionEtag;
-(BOOL)_createPublicSharingKeyWithError:(*id)arg0 ;
-(BOOL)_encryptMergeableDeltasInRecordValueStore:(id)arg0 shareProtection:(struct _OpaquePCSShareProtection *)arg1 ;
-(BOOL)_needsSigningPCS;
-(BOOL)_prepareAsset:(id)arg0 recordKey:(id)arg1 mergeableDeltaID:(id)arg2 record:(id)arg3 error:(*id)arg4 ;
-(BOOL)_useZoneishPCS;
-(BOOL)_wrapEncryptedData:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 forField:(id)arg2 recordID:(id)arg3 ;
-(BOOL)_wrapEncryptedDataForRecordValueStore:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 ;
-(BOOL)_wrapEncryptedDataOnRecord:(id)arg0 ;
-(id)_addParentPCS:(id)arg0 toRecordPCS:(id)arg1 ;
-(id)_initCommonWithOperation:(id)arg0 ;
-(id)_initForDeleteWithRecordID:(id)arg0 operation:(id)arg1 ;
-(id)_initWithRecord:(id)arg0 operation:(id)arg1 ;
-(id)assetsWhichNeedRecordFetch;
-(id)description;
-(id)prepareAssetsForUploadWithError:(*id)arg0 ;
-(id)sideEffectRecordIDs;
-(void)_addShareToPCSData:(id)arg0 withError:(id)arg1 ;
-(void)_clearRecordProtectionDataForRecord;
-(void)_continueCreateAndSavePCSWithZonePCS:(id)arg0 sharePCS:(id)arg1 ;
-(void)_createAndSavePCS;
-(void)_fetchExistingPCSForProvidedPCSData:(id)arg0 ;
-(void)_fetchPCSData;
-(void)_fetchParentPCSForData:(id)arg0 withError:(id)arg1 ;
-(void)_fetchParentPCSForID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_fetchSharePCSForID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_fetchSigningPCSForRecordToDelete;
-(void)_handlePCSData:(id)arg0 withError:(id)arg1 ;
-(void)_keyRollIfNeededForRecordPCSData:(id)arg0 withError:(id)arg1 ;
-(void)_loadPCSData;
-(void)_pretendToWrapEncryptedDataForRecordValueStore:(id)arg0 ;
-(void)_reallyAddShareToPCSData:(id)arg0 withError:(id)arg1 ;
-(void)_reallyFetchPCSDataWithOptions:(NSUInteger)arg0 ;
-(void)_setSigningPCSIdentity:(id)arg0 ;
-(void)_unwrapRecordPCSForParent;
-(void)_unwrapRecordPCSForZone;
-(void)_unwrapRecordPCSWithShareID:(id)arg0 ;
-(void)clearProtectionDataForRecord;
-(void)fetchRecordPCSData;
-(void)fetchSharePCSData;
-(void)noteSideEffectRecordAbsent:(id)arg0 ;
-(void)noteSideEffectRecordPendingDelete:(id)arg0 ;
-(void)noteSideEffectRecordPendingModify:(id)arg0 ;
-(void)prepareForSave;
-(void)prepareStreamingAsset:(id)arg0 forUploadWithRecord:(id)arg1 ;
-(void)savePCSDataToCache;


@end


#endif