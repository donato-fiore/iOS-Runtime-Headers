// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCONTINUOUSEXPOSEIDENTIFIERSCHANGEDMODIFIEREVENT_H
#define SBCONTINUOUSEXPOSEIDENTIFIERSCHANGEDMODIFIEREVENT_H

@class NSArray;


#import "SBSwitcherModifierEvent.h"
#import "SBAppLayout.h"

@interface SBContinuousExposeIdentifiersChangedModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInStrip; // ivar: _previousContinuousExposeIdentifiersInStrip
@property (readonly, copy, nonatomic) NSArray *previousContinuousExposeIdentifiersInSwitcher; // ivar: _previousContinuousExposeIdentifiersInSwitcher
@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout; // ivar: _transitioningFromAppLayout
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout; // ivar: _transitioningToAppLayout


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithPreviousContinuousExposeIdentifiersInSwitcher:(id)arg0 previousContinuousExposeIdentifiersInStrip:(id)arg1 transitioningFromAppLayout:(id)arg2 transitioningToAppLayout:(id)arg3 animated:(BOOL)arg4 ;


@end


#endif