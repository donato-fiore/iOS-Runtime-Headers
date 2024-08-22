// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERREADERMODEINGESTIONSTEPCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERREADERMODEINGESTIONSTEPCONTEXT_H

@class NSURL, NSString;


#import "NPKPaymentProvisioningFlowStepContext.h"

@interface NPKPaymentProvisioningFlowControllerReaderModeIngestionStepContext : NPKPaymentProvisioningFlowStepContext

@property (nonatomic) CGFloat ingestionProgress; // ivar: _ingestionProgress
@property (nonatomic) NSUInteger ingestionState; // ivar: _ingestionState
@property (retain, nonatomic) NSURL *physicalCardImageURL; // ivar: _physicalCardImageURL
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif