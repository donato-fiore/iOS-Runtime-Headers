// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTINUOUSEXPOSEIDENTIFIERSCHANGEDMODIFIEREVENT_H
#define SBCONTINUOUSEXPOSEIDENTIFIERSCHANGEDMODIFIEREVENT_H

@class NSOrderedSet;


#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeIdentifiersChangedModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) NSUInteger generationCount; // ivar: _generationCount
@property (readonly, copy, nonatomic) NSOrderedSet *previousContinuousExposeIdentifiers; // ivar: _previousContinuousExposeIdentifiers
@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout; // ivar: _transitioningFromAppLayout
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout; // ivar: _transitioningToAppLayout


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPreviousContinuousExposeIdentifiers:(id)arg0 transitioningFromAppLayout:(id)arg1 transitioningToAppLayout:(id)arg2 generationCount:(NSUInteger)arg3 ;


@end


#endif