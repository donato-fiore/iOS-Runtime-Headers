// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCCERTIFICATEWRAPPERPROFILE_H
#define MCCERTIFICATEWRAPPERPROFILE_H



#import "MCConfigurationProfile.h"

@interface MCCertificateWrapperProfile : MCConfigurationProfile



+(id)_basicWrapperProfileDictForCertificateName:(id)arg0 fileName:(id)arg1 identifier:(id)arg2 ;
+(id)_identifierHashFromData:(id)arg0 ;
+(id)_wrapperPayloadDictWithCertData:(id)arg0 fileName:(id)arg1 name:(id)arg2 identifier:(id)arg3 type:(id)arg4 ;
+(id)_wrapperProfileDictForCertificate:(struct __SecCertificate *)arg0 fileName:(id)arg1 certData:(id)arg2 type:(id)arg3 ;
+(id)_wrapperProfileForWAPICertificate:(struct __SecCertificate *)arg0 fileName:(id)arg1 PEMData:(id)arg2 ;
+(id)_wrapperWAPIPayloadDictWithPEMData:(id)arg0 fileName:(id)arg1 name:(id)arg2 identifier:(id)arg3 ;
+(id)wrapperProfileDictionaryWithCertificateData:(id)arg0 fileName:(id)arg1 outSignerCerts:(*id)arg2 ;
-(BOOL)isSigned;
-(id)_certificatePayload;
-(id)earliestCertificateExpiryDate;
-(id)initWithDictionary:(id)arg0 signerCerts:(id)arg1 allowEmptyPayload:(BOOL)arg2 outError:(*id)arg3 ;
-(id)stubDictionary;
-(int)trustLevel;


@end


#endif