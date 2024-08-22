// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCROLLTOAPPLAYOUTSWITCHEREVENTRESPONSE_H
#define SBSCROLLTOAPPLAYOUTSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBScrollToAppLayoutSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSInteger alignment; // ivar: _alignment
@property (readonly, nonatomic) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 alignment:(NSInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif