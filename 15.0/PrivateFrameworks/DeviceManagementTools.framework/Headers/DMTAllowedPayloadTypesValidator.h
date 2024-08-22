// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTALLOWEDPAYLOADTYPESVALIDATOR_H
#define DMTALLOWEDPAYLOADTYPESVALIDATOR_H

@class NSSet, NSString;
@protocol DMTConfigurationProfileValidator;

#import <Foundation/Foundation.h>


@interface DMTAllowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator>



@property (copy, nonatomic) NSSet *allowedPayloadTypes; // ivar: _allowedPayloadTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *requireAllPayloadTypes; // ivar: _requireAllPayloadTypes
@property (readonly) Class superclass;


-(BOOL)validateProfile:(id)arg0 error:(*id)arg1 ;


@end


#endif