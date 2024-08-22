// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDMEDICALRECORDDETAILDATAPROVIDER_H
#define WDMEDICALRECORDDETAILDATAPROVIDER_H

@class HKClinicalAccount, HKConceptStore, NSMutableDictionary, HKHealthRecordsStore, HKMedicalRecord;
@protocol OS_dispatch_queue, WDMedicalRecordDetailDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "HRMedicalRecordFormatter.h"
#import "HRSignedClinicalDataGroupContext.h"

@interface WDMedicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) HKConceptStore *conceptStore; // ivar: _conceptStore
@property (weak, nonatomic) NSObject<WDMedicalRecordDetailDataProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableDictionary *displayItemsBySection; // ivar: _displayItemsBySection
@property (retain, nonatomic) HRMedicalRecordFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (retain, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (readonly, nonatomic) NSInteger rowSignedClinicalDataIssuer; // ivar: _rowSignedClinicalDataIssuer
@property (readonly, nonatomic) NSInteger rowSignedClinicalDataMultiRecord; // ivar: _rowSignedClinicalDataMultiRecord
@property (readonly, nonatomic) NSInteger rowSignedClinicalDataQRCode; // ivar: _rowSignedClinicalDataQRCode
@property (readonly, nonatomic) NSInteger sectionFHIRSourceData; // ivar: _sectionFHIRSourceData
@property (retain, nonatomic) NSMutableDictionary *sectionFooter; // ivar: _sectionFooter
@property (readonly, nonatomic) NSInteger sectionSignedClinicalDataDeletion; // ivar: _sectionSignedClinicalDataDeletion
@property (readonly, nonatomic) NSInteger sectionSignedClinicalDataStatus; // ivar: _sectionSignedClinicalDataStatus
@property (retain, nonatomic) NSMutableDictionary *sectionTitles; // ivar: _sectionTitles
@property (readonly, copy, nonatomic) HRSignedClinicalDataGroupContext *signedClinicalDataGroupContext; // ivar: _signedClinicalDataGroupContext


-(NSInteger)numberOfRowsForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_createSignedClinicalDataStoreUsingHealthRecordsStore:(id)arg0 ;
-(id)displayItemForSection:(NSInteger)arg0 row:(NSInteger)arg1 ;
-(id)displayItemsForSection:(NSInteger)arg0 ;
-(id)footerForSection:(NSInteger)arg0 ;
-(id)initWithHealthRecordsStore:(id)arg0 conceptStore:(id)arg1 medicalRecord:(id)arg2 account:(id)arg3 delegate:(id)arg4 ;
-(id)titleForSection:(NSInteger)arg0 ;
-(void)_rqueue_didReceiveSignedClinicalDataGroup:(id)arg0 store:(id)arg1 ;
-(void)_rqueue_didReverifyRecordSignature:(NSInteger)arg0 ;
-(void)_rqueue_fetchSignedRecordIfAvailableAndRecomputeDisplayItems;
-(void)_rqueue_recomputeDisplayItems;
-(void)_rqueue_updateSignedClinicalDataQRCodeIfNecessary;
-(void)_updatePlacementForDisplayItems:(id)arg0 ;


@end


#endif