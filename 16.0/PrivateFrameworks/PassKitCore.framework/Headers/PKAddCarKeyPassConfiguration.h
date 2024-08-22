// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKADDCARKEYPASSCONFIGURATION_H
#define PKADDCARKEYPASSCONFIGURATION_H

@class NSString;


#import "PKAddSecureElementPassConfiguration.h"

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration

@property (copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (copy, nonatomic) NSString *manufacturerIdentifier; // ivar: _manufacturerIdentifier
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) NSString *provisioningTemplateIdentifier; // ivar: _provisioningTemplateIdentifier
@property (nonatomic) NSUInteger supportedRadioTechnologies; // ivar: _supportedRadioTechnologies


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif