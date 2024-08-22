// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBADDMODIFIERSWITCHEREVENTRESPONSE_H
#define SBADDMODIFIERSWITCHEREVENTRESPONSE_H

@class NSString;


#import "SBSwitcherModifierEventResponse.h"
#import "SBSwitcherModifier.h"

@interface SBAddModifierSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSInteger level; // ivar: _level
@property (readonly, nonatomic) SBSwitcherModifier *modifier; // ivar: _modifier


-(NSInteger)type;
-(id)initWithModifier:(id)arg0 level:(NSInteger)arg1 ;
-(id)initWithModifier:(id)arg0 level:(NSInteger)arg1 key:(id)arg2 ;


@end


#endif