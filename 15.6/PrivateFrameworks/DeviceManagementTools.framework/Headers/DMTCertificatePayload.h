// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMTCERTIFICATEPAYLOAD_H
#define DMTCERTIFICATEPAYLOAD_H

@class NSString, NSData, NSDictionary;
@protocol DMTConfigurationPayload;


#import "DMTConfigurationPayloadBase.h"

@interface DMTCertificatePayload : DMTConfigurationPayloadBase <DMTConfigurationPayload>



@property (readonly, nonatomic) NSString *certificateFileName; // ivar: _certificateFileName
@property (readonly, nonatomic) NSData *content; // ivar: _content
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (readonly, nonatomic) NSDictionary *rawDictionary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *uuid;


+(id)supportedPayloadTypes;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;


@end


#endif