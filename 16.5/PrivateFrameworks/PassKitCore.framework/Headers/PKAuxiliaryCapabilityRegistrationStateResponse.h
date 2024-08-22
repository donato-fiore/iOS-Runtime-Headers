// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUXILIARYCAPABILITYREGISTRATIONSTATERESPONSE_H
#define PKAUXILIARYCAPABILITYREGISTRATIONSTATERESPONSE_H

@class NSArray;


#import "PKAuxiliaryCapabilityWebServiceResponse.h"

@interface PKAuxiliaryCapabilityRegistrationStateResponse : PKAuxiliaryCapabilityWebServiceResponse

@property (retain, nonatomic) NSArray *unregisteredRequirements; // ivar: _unregisteredRequirements


-(id)initWithData:(id)arg0 ;


@end


#endif