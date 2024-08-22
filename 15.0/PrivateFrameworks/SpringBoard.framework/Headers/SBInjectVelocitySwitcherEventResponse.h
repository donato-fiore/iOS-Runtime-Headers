// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBINJECTVELOCITYSWITCHEREVENTRESPONSE_H
#define SBINJECTVELOCITYSWITCHEREVENTRESPONSE_H

@class NSString;


#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBInjectVelocitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) id *velocity; // ivar: _velocity


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithVelocity:(id)arg0 forKey:(id)arg1 appLayout:(id)arg2 ;


@end


#endif