// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBLURITEMCONTAINERSWITCHEREVENTRESPONSE_H
#define SBBLURITEMCONTAINERSWITCHEREVENTRESPONSE_H



#import "SBSwitcherModifierEventResponse.h"
#import "SBAppLayout.h"
#import "SBBlurItemContainerParameters.h"

@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSInteger animationUpdateMode; // ivar: _animationUpdateMode
@property (readonly, nonatomic) SBAppLayout *appLayout; // ivar: _appLayout
@property (readonly, nonatomic) SBBlurItemContainerParameters *blurParameters; // ivar: _blurParameters
@property (readonly, nonatomic) BOOL shouldBlur; // ivar: _shouldBlur


-(NSInteger)type;
-(id)description;
-(id)initWithAppLayout:(id)arg0 shouldBlur:(BOOL)arg1 animationUpdateMode:(NSInteger)arg2 ;
-(id)initWithAppLayout:(id)arg0 shouldBlur:(BOOL)arg1 blurParameters:(id)arg2 animationUpdateMode:(NSInteger)arg3 ;


@end


#endif