// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXEXTENSIONPREDICATEBUILDER_H
#define _EXEXTENSIONPREDICATEBUILDER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _EXExtensionPredicateBuilder : NSObject

@property (readonly) *_EXExtensionActivationRules activationRules; // ivar: _activationRules
@property (readonly) NSDictionary *predicateDictionary; // ivar: _predicateDictionary
@property (readonly) BOOL strictMatchingSpecified; // ivar: _strictMatchingSpecified
@property (readonly) BOOL usesStrictMatching; // ivar: _usesStrictMatching
@property (readonly) NSUInteger version; // ivar: _version


-(id)applyRuleWithRuleName:(id)arg0 acceptRule:(id)arg1 rejectRule:(id)arg2 types:(id)arg3 exceptTypes:(id)arg4 parentType:(id)arg5 children:(id)arg6 parentAccepted:(BOOL)arg7 accepted:(*BOOL)arg8 acceptedTypesInSubtree:(*id)arg9 exceptTypesInSubtree:(*id)arg10 ;
-(id)gatherChildrenPredicateWithRuleDictionary:(id)arg0 parentType:(id)arg1 parentAccepted:(BOOL)arg2 acceptedChildTypes:(*id)arg3 exceptChildTypes:(*id)arg4 ;
-(id)initWithActivationRules:(struct _EXExtensionActivationRules *)arg0 predicateDictionary:(id)arg1 ;
-(id)makePredicate;
-(id)predicateForCountingRule:(id)arg0 type:(id)arg1 exceptTypes:(id)arg2 specifiedCount:(int)arg3 ;
-(id)predicateForRejectExceptOtherTypesRule:(id)arg0 type:(id)arg1 otherTypes:(id)arg2 ;


@end


#endif