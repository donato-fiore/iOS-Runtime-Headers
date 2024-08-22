// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDOSIDOSCALEANIMATIONSWITCHEREVENTRESPONSE_H
#define SBDOSIDOSCALEANIMATIONSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBDosidoScaleAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout


-(NSInteger)type;
-(id)initWithAppLayout:(id)arg0 ;


@end


#endif