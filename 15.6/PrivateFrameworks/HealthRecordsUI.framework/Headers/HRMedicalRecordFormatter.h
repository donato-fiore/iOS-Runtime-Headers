// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRMEDICALRECORDFORMATTER_H
#define HRMEDICALRECORDFORMATTER_H


#import <Foundation/Foundation.h>


@interface HRMedicalRecordFormatter : NSObject {
    ? store;
    ? context;
}




-(BOOL)passExistsInWalletRepresentingGroup:(id)arg0 ;
-(id)attachmentItemsFromRecord:(id)arg0 ;
-(id)attachmentItemsTitleFromRecord:(id)arg0 ;
-(id)displayItemsFromRecord:(id)arg0 ;
-(id)init;
-(id)initWithConceptStore:(id)arg0 context:(NSInteger)arg1 ;
-(id)signedClinicalDataStatusDisplayItemsFromGroupContext:(id)arg0 ;
-(id)signedClinicalDataWalletIntegrationDisplayItemsFromGroup:(id)arg0 ;
-(id)structuredItemsFromRecord:(id)arg0 ;
-(void)addSignedClinicalDataPassToWalletRepresentingGroup:(id)arg0 responseDelay:(CGFloat)arg1 completion:(id)arg2 ;
-(void)fetchQRCodeImageFromGroup:(id)arg0 completion:(id)arg1 ;


@end


#endif