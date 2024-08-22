// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHRECORDRULESETREFERENCERULE_H
#define HDHEALTHRECORDRULESETREFERENCERULE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface HDHealthRecordRulesetReferenceRule : NSObject

@property (readonly, copy, nonatomic) NSSet *allowedResourceTypes; // ivar: _allowedResourceTypes
@property (readonly, nonatomic) NSInteger appliesTo; // ivar: _appliesTo
@property (readonly, copy, nonatomic) NSSet *disallowedResourceTypes; // ivar: _disallowedResourceTypes
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath


+(id)referenceRulesetsForRules:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithKeyPath:(id)arg0 allowedTypes:(id)arg1 disallowedTypes:(id)arg2 ;


@end


#endif