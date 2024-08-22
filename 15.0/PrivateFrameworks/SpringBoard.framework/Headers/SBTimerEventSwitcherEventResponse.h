// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTIMEREVENTSWITCHEREVENTRESPONSE_H
#define SBTIMEREVENTSWITCHEREVENTRESPONSE_H

@class NSString;


#import "SBSwitcherModifierEventResponse.h"

@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSString *reason; // ivar: _reason


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
// -(id)initWithDelay:(CGFloat)arg0 validator:(id)arg1 reason:(unk)arg2  ;


@end


#endif