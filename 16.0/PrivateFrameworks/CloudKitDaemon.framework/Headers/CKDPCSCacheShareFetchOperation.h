// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSCACHESHAREFETCHOPERATION_H
#define CKDPCSCACHESHAREFETCHOPERATION_H

@class CKRecordID;


#import "CKDPCSCacheFetchOperation.h"
#import "CKDSharePCSData.h"

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (readonly, nonatomic) CKRecordID *shareID;
@property (retain, nonatomic) CKDSharePCSData *sharePCSData;


-(BOOL)_decryptPCS;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_savePCSDataToCache;
-(BOOL)hasAllPCSData;
-(id)itemTypeName;
-(void)_handlePCSDataFetched:(id)arg0 withError:(id)arg1 ;


@end


#endif