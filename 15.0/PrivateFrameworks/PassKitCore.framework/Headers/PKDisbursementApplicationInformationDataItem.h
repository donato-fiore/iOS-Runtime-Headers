// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDISBURSEMENTAPPLICATIONINFORMATIONDATAITEM_H
#define PKDISBURSEMENTAPPLICATIONINFORMATIONDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKDisbursementApplicationInformation.h"

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem

@property (retain, nonatomic) PKDisbursementApplicationInformation *applicationInformation; // ivar: _applicationInformation


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithModel:(id)arg0 ;


@end


#endif