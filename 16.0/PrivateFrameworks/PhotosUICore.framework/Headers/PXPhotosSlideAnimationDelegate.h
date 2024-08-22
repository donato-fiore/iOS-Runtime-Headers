// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOSSLIDEANIMATIONDELEGATE_H
#define PXPHOTOSSLIDEANIMATIONDELEGATE_H



#import "PXGDefaultAnimationDelegate.h"

@interface PXPhotosSlideAnimationDelegate : PXGDefaultAnimationDelegate {
    CGPoint _viewportShift;
}




-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 adjustGeometries:(struct ? *)arg1 styles:(struct ? *)arg2 infos:(struct ? *)arg3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange )arg4 ;
-(void)animation:(id)arg0 prepareWithRootLayout:(id)arg1 viewportShift:(struct CGPoint )arg2 ;


@end


#endif