// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESRECORDSTOREMANAGER_H
#define DESRECORDSTOREMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DESRecordStorePolicyManager.h"
#import "DESDeviceIdentifierStore.h"

@interface DESRecordStoreManager : NSObject {
    DESRecordStorePolicyManager *_policyManager;
    NSObject<OS_dispatch_queue> *_queue;
    DESDeviceIdentifierStore *_identifierStore;
}




-(id)fetchRecordSetSynchronouslyForBundleId:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)recordDirURLsForBundleId:(id)arg0 ;
-(id)saveRecordToDirPath:(id)arg0 data:(id)arg1 recordInfo:(id)arg2 error:(*id)arg3 ;
-(void)deleteAllSavedRecordsForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)deleteSavedRecordForBundleId:(id)arg0 identfier:(id)arg1 completion:(id)arg2 ;
-(void)fetchCoreDuetEventsForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)fetchNativeRecordDataForRecordUUID:(id)arg0 bundleId:(id)arg1 completion:(id)arg2 ;
-(void)fetchRecordSetForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)fetchSavedRecordInfoForBundleId:(id)arg0 completion:(id)arg1 ;
-(void)fetchSavedRecordInfoForRecordType:(id)arg0 completion:(id)arg1 ;
-(void)saveCoreDuetEvent:(id)arg0 completion:(id)arg1 ;
-(void)saveRecordForBundleId:(id)arg0 data:(id)arg1 recordInfo:(id)arg2 completion:(id)arg3 ;


@end


#endif