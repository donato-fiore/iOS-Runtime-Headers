// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGTITLESPECPEOPLEARGUMENT_H
#define PGTITLESPECPEOPLEARGUMENT_H

@class NSSet;


#import "PGTitleSpecArgument.h"

@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument

@property (readonly) NSSet *personNodes; // ivar: _personNodes
@property (readonly) NSUInteger type; // ivar: _type


+(id)argumentWithPeopleType:(NSUInteger)arg0 ;
+(id)argumentWithPeopleType:(NSUInteger)arg0 personNodes:(id)arg1 ;
-(id)_birthdayTitleWithMomentNodes:(id)arg0 ;
-(id)_groupTitleWithFeature:(id)arg0 graph:(id)arg1 allowedGroupsFormat:(NSUInteger)arg2 ;
-(id)_groupTitleWithMomentNodes:(id)arg0 allowedGroupsFormat:(NSUInteger)arg1 ;
-(id)_initWithPeopleType:(NSUInteger)arg0 personNodes:(id)arg1 ;
-(id)_personNodesWithMomentNodes:(id)arg0 ;
-(id)_personTitleWithFeature:(id)arg0 graph:(id)arg1 ;
-(id)_personTitleWithMomentNodes:(id)arg0 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)_resolvedStringWithMomentNodes:(id)arg0 features:(id)arg1 argumentEvaluationContext:(id)arg2 ;
-(id)initWithPeopleType:(NSUInteger)arg0 ;


@end


#endif