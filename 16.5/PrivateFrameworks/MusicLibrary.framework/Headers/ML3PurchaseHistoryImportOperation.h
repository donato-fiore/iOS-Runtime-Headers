// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3PURCHASEHISTORYIMPORTOPERATION_H
#define ML3PURCHASEHISTORYIMPORTOPERATION_H



#import "ML3DAAPImportOperation.h"

@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation



-(?)importItemFromDAAPElement;
-(BOOL)_performPurchaseHistoryImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(void)main;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif