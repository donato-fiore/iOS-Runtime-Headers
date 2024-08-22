// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIZOOMEFFECT_H
#define _UIZOOMEFFECT_H



#import "UIVisualEffect.h"

@interface _UIZoomEffect : UIVisualEffect {
    CGFloat _zoomAmount;
    BOOL _isUnderlay;
}




+(BOOL)supportsSecureCoding;
+(id)_underlayZoomEffectWithMagnitude:(CGFloat)arg0 ;
+(id)zoomEffectWithMagnitude:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_viewEntry;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;


@end


#endif