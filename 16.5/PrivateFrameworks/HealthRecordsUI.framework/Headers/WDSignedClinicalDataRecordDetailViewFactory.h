// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSIGNEDCLINICALDATARECORDDETAILVIEWFACTORY_H
#define WDSIGNEDCLINICALDATARECORDDETAILVIEWFACTORY_H


#import <Foundation/Foundation.h>


@interface WDSignedClinicalDataRecordDetailViewFactory : NSObject



+(id)QRCodeViewControllerForSignedClinicalDataGroup:(id)arg0 ;
+(id)issuerDetailViewControllerForSignedClinicalDataGroup:(id)arg0 ;
+(id)multiRecordViewControllerForMedicalRecords:(id)arg0 profile:(id)arg1 ;
-(id)init;


@end


#endif