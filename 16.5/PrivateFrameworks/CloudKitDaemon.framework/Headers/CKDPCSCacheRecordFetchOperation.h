// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSCACHERECORDFETCHOPERATION_H
#define CKDPCSCACHERECORDFETCHOPERATION_H

@class CKRecordID, NSString;


#import "CKDPCSCacheFetchOperation.h"
#import "CKDRecordPCSData.h"

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) CKDRecordPCSData *recordPCSData;
@property (nonatomic) BOOL serverRecordHasNoProtectionData; // ivar: _serverRecordHasNoProtectionData
@property (retain, nonatomic) NSString *serverRecordType; // ivar: _serverRecordType


-(BOOL)_createAdditionalPCS;
-(BOOL)_decryptPCS;
-(BOOL)_decryptRecordPCSInPrivateDatabase;
-(BOOL)_decryptRecordPCSInSharedDatabase;
-(BOOL)_fetchDependentPCS;
-(BOOL)_fetchDependentPCSInSharedDatabase;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_fetchPCSForPrivateZone;
-(BOOL)_savePCSDataToCache;
-(BOOL)hasAllPCSData;
-(BOOL)needsChainPCSCreation;
-(id)itemTypeName;
-(void)_handlePCSDataFetched:(id)arg0 withError:(id)arg1 ;


@end


#endif