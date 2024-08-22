// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLETSUBCREDENTIALACCOUNTATTESTATIONREQUEST_H
#define PKAPPLETSUBCREDENTIALACCOUNTATTESTATIONREQUEST_H

@class NSData;


#import "PKAccountAttestationRequest.h"

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest

@property (copy, nonatomic) NSData *sharingTokenHash; // ivar: _sharingTokenHash
@property (copy, nonatomic) NSData *subCASEResidencyAttestation; // ivar: _subCASEResidencyAttestation


-(id)initWithRequestData:(id)arg0 ;


@end


#endif