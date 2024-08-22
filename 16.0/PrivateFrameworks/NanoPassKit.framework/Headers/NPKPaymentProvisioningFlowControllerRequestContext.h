// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPAYMENTPROVISIONINGFLOWCONTROLLERREQUESTCONTEXT_H
#define NPKPAYMENTPROVISIONINGFLOWCONTROLLERREQUESTCONTEXT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NPKProtoStandaloneRequestHeader.h"

@interface NPKPaymentProvisioningFlowControllerRequestContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *currentStepIdentifier; // ivar: _currentStepIdentifier
@property (readonly) NPKProtoStandaloneRequestHeader *requestHeader; // ivar: _requestHeader


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestHeader:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif