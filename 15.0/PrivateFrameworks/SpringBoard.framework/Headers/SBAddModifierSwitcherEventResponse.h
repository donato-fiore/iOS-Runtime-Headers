// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBADDMODIFIERSWITCHEREVENTRESPONSE_H
#define SBADDMODIFIERSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBSwitcherModifier.h"

@interface SBAddModifierSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBSwitcherModifier *modifier; // ivar: _modifier


-(NSInteger)type;
-(id)initWithModifier:(id)arg0 ;


@end


#endif