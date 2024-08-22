// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3PURCHASEHISTORYIMPORTOPERATION_H
#define ML3PURCHASEHISTORYIMPORTOPERATION_H



#import "ML3DAAPImportOperation.h"

@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation



-(BOOL)_performPurchaseHistoryImportWithTransaction:(id)arg0 ;
-(NSUInteger)importSource;
-(struct shared_ptr<ML3DAAPImportItem> )importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> )arg0 ;
-(void)main;
-(void)updateImportProgress:(float)arg0 ;


@end


#endif