// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOPYEFFECT_H
#define _UICOPYEFFECT_H



#import "UIVisualEffect.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UICopyEffect : UIVisualEffect {
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}




+(id)copyEffectWithCaptureGroup:(id)arg0 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(NSInteger)_expectedUsage;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif