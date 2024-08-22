// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTWIFICERTIFICATEREFERENCESVALIDATOR_H
#define DMTWIFICERTIFICATEREFERENCESVALIDATOR_H

@class NSString;
@protocol DMTConfigurationProfileValidator;

#import <Foundation/Foundation.h>


@interface DMTWiFiCertificateReferencesValidator : NSObject <DMTConfigurationProfileValidator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif