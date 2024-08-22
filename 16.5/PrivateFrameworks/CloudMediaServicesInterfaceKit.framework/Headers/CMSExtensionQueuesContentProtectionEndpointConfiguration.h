// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSEXTENSIONQUEUESCONTENTPROTECTIONENDPOINTCONFIGURATION_H
#define CMSEXTENSIONQUEUESCONTENTPROTECTIONENDPOINTCONFIGURATION_H

@class NSURL, NSString;


#import "CMSExtensionEndpointConfiguration.h"

@interface CMSExtensionQueuesContentProtectionEndpointConfiguration : CMSExtensionEndpointConfiguration

@property (retain, nonatomic) NSURL *fairPlayKeySystemCertificateUrl; // ivar: _fairPlayKeySystemCertificateUrl
@property (retain, nonatomic) NSString *keySystemIdentifier; // ivar: _keySystemIdentifier


-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg0 endpoint:(id)arg1 baseURL:(id)arg2 groupHeaders:(id)arg3 ;


@end


#endif