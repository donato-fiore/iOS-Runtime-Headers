// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSHEETEXPERIMENT_H
#define PKPAYMENTSHEETEXPERIMENT_H



#import "PKExperiment.h"

@interface PKPaymentSheetExperiment : PKExperiment

@property (readonly, nonatomic) BOOL isAA;
@property (readonly, nonatomic) BOOL isTaggedForCardSetupFromSheet;
@property (readonly, nonatomic) BOOL isTaggedForHideDoubleClickToPay;
@property (readonly, nonatomic) BOOL shouldHideDoubleClickToPay;
@property (readonly, nonatomic) BOOL shouldShowCardSetupFromSheet;
@property (readonly, nonatomic) CGFloat timeIntervalToShowDoubleClickToPay;


-(id)namespaceName;


@end


#endif