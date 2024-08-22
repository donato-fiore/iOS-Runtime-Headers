// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMATCHMOVETOICONVIEWSWITCHEREVENTRESPONSE_H
#define SBMATCHMOVETOICONVIEWSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBMatchMoveToIconViewSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 active:(BOOL)arg1 ;


@end


#endif