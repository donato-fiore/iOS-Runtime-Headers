// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONENTERPRISEDECLARATION_APPPACKAGE_H
#define CEMAPPLICATIONENTERPRISEDECLARATION_APPPACKAGE_H

@class NSArray, NSString, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMApplicationEnterpriseDeclaration_AppPackage : CEMPayloadBase

@property (copy, nonatomic) NSArray *payloadCertificatePinningIdentifiers; // ivar: _payloadCertificatePinningIdentifiers
@property (copy, nonatomic) NSString *payloadContentType; // ivar: _payloadContentType
@property (copy, nonatomic) NSString *payloadDataURL; // ivar: _payloadDataURL
@property (copy, nonatomic) NSString *payloadHashSHA256; // ivar: _payloadHashSHA256
@property (copy, nonatomic) NSNumber *payloadSize; // ivar: _payloadSize


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithDataURL:(id)arg0 withContentType:(id)arg1 withSize:(id)arg2 withHashSHA256:(id)arg3 ;
+(id)buildWithDataURL:(id)arg0 withContentType:(id)arg1 withSize:(id)arg2 withHashSHA256:(id)arg3 withCertificatePinningIdentifiers:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif