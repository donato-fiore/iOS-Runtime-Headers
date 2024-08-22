// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBLURITEMCONTAINERSWITCHEREVENTRESPONSE_H
#define SBBLURITEMCONTAINERSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) BOOL shouldBlur; // ivar: _shouldBlur


-(NSInteger)type;
-(id)description;
-(id)initWithAppLayout:(id)arg0 shouldBlur:(BOOL)arg1 ;


@end


#endif