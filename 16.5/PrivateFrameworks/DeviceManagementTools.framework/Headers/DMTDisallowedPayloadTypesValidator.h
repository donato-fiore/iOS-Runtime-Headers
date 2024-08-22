// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTDISALLOWEDPAYLOADTYPESVALIDATOR_H
#define DMTDISALLOWEDPAYLOADTYPESVALIDATOR_H

@class NSString, NSSet;
@protocol DMTConfigurationProfileValidator;

#import <Foundation/Foundation.h>


@interface DMTDisallowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *disallowedPayloadTypes; // ivar: _disallowedPayloadTypes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif