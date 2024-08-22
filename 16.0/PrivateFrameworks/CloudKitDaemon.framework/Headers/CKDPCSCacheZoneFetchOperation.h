// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSCACHEZONEFETCHOPERATION_H
#define CKDPCSCACHEZONEFETCHOPERATION_H

@class CKRecordZoneID;


#import "CKDPCSCacheFetchOperation.h"
#import "CKDZonePCSData.h"

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) BOOL needsZoneishPCS;
@property (nonatomic) BOOL shouldCreateZoneishPCS; // ivar: _shouldCreateZoneishPCS
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;


-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_savePCSDataToCache;
-(BOOL)_saveUpdatedPCSToServer;
-(BOOL)hasAllPCSData;
-(id)itemTypeName;
-(void)_decryptZonePCSInSharedDatabase;
-(void)_decryptZonePCSUsingServiceIdentities;
-(void)_fetchDepedentPCSInSharedDatabase;
-(void)_handleDecryptedZonePCSData:(id)arg0 withError:(id)arg1 ;
-(void)_handlePCSDataFetched:(id)arg0 withError:(id)arg1 ;
-(void)_saveNewPCSOnZone:(id)arg0 completion:(id)arg1 ;
-(void)_saveZoneToServer:(id)arg0 completion:(id)arg1 ;
-(void)_saveZoneToServer:(id)arg0 withPCS:(struct _OpaquePCSShareProtection *)arg1 zoneishPCS:(struct _OpaquePCSShareProtection *)arg2 previousEtag:(id)arg3 completion:(id)arg4 ;
-(void)_willRetryFetch;


@end


#endif