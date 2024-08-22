// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINVALIDATECONTINUOUSEXPOSEIDENTIFIERSEVENTRESPONSE_H
#define SBINVALIDATECONTINUOUSEXPOSEIDENTIFIERSEVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBInvalidateContinuousExposeIdentifiersEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) SBAppLayout *transitioningFromAppLayout; // ivar: _transitioningFromAppLayout
@property (readonly, nonatomic) SBAppLayout *transitioningToAppLayout; // ivar: _transitioningToAppLayout


-(NSInteger)type;
-(id)initWithTransitioningFromAppLayout:(id)arg0 transitioningToAppLayout:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif