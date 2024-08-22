// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDRULESETRESOURCE_H
#define HDHEALTHRECORDRULESETRESOURCE_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "HDHealthRecordClinicalType.h"
#import "HDHRConditionRule.h"

@interface HDHealthRecordRulesetResource : NSObject

@property (readonly, copy, nonatomic) NSArray *APIReferenceRules; // ivar: _APIReferenceRules
@property (readonly, copy, nonatomic) HDHealthRecordClinicalType *clinicalType; // ivar: _clinicalType
@property (readonly, copy, nonatomic) HDHRConditionRule *condition; // ivar: _condition
@property (readonly, copy, nonatomic) NSArray *containReferences; // ivar: _containReferences
@property (readonly, copy, nonatomic) NSArray *displayNameKeyPaths; // ivar: _displayNameKeyPaths
@property (readonly, copy, nonatomic) NSDictionary *medicalRecordProperties; // ivar: _medicalRecordProperties
@property (readonly, copy, nonatomic) NSDictionary *redactionRules; // ivar: _redactionRules
@property (readonly, copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (readonly, copy, nonatomic) NSString *resourceType; // ivar: _resourceType
@property (readonly, copy, nonatomic) NSArray *retrieveReferences; // ivar: _retrieveReferences


+(id)resourceFromDictionary:(id)arg0 resourceName:(id)arg1 error:(*id)arg2 ;
-(BOOL)evaluateWithObject:(id)arg0 ;


@end


#endif