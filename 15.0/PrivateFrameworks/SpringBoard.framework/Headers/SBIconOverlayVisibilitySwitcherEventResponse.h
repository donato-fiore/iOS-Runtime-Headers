// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONOVERLAYVISIBILITYSWITCHEREVENTRESPONSE_H
#define SBICONOVERLAYVISIBILITYSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(NSInteger)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppLayout:(id)arg0 visible:(BOOL)arg1 ;


@end


#endif