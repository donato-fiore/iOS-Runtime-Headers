// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDRULESET_H
#define HDHEALTHRECORDRULESET_H

@class NSString, HRSSupportedFHIRRelease, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface HDHealthRecordRuleset : NSObject

@property (readonly, copy, nonatomic) NSString *FHIRRelease; // ivar: _FHIRRelease
@property (readonly, copy, nonatomic) HRSSupportedFHIRRelease *releaseSupport;
@property (copy, nonatomic) NSDictionary *rulesByClinicalType; // ivar: _rulesByClinicalType
@property (copy, nonatomic) NSDictionary *rulesByResourceType; // ivar: _rulesByResourceType
@property (readonly, copy, nonatomic) NSNumber *rulesetVersion; // ivar: _rulesetVersion


+(id)rulesetFromDictionary:(id)arg0 rulesetVersion:(id)arg1 error:(*id)arg2 ;
-(id)initForFHIRRelease:(id)arg0 rulesetVersion:(id)arg1 ;
-(id)rulesetForClinicalType:(NSInteger)arg0 ;
-(id)rulesetForFHIRResourceObject:(id)arg0 ;
-(id)rulesetForFHIRResourceType:(id)arg0 ;


@end


#endif