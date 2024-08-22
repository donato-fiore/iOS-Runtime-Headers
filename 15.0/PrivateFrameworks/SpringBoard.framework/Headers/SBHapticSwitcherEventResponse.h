// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHAPTICSWITCHEREVENTRESPONSE_H
#define SBHAPTICSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"

@interface SBHapticSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSInteger hapticType; // ivar: _hapticType
@property (readonly, nonatomic) NSInteger phase; // ivar: _phase


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithHapticType:(NSInteger)arg0 phase:(NSInteger)arg1 ;


@end


#endif