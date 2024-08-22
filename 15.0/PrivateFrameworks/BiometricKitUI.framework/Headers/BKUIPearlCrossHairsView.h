// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKUIPEARLCROSSHAIRSVIEW_H
#define BKUIPEARLCROSSHAIRSVIEW_H

@class UIView, UIImageView;


#import "BKUIPearlCrossHairsRenderingView.h"

@interface BKUIPearlCrossHairsView : UIView {
    BKUIPearlCrossHairsRenderingView *_renderingView;
    UIImageView *_arrowView;
}




-(CGFloat)angleFromDirection:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)nudgeCrossHairsAtAngle:(CGFloat)arg0 completion:(id)arg1 ;
// -(void)nudgeInDirection:(NSUInteger)arg0 smallNudgePeak:(id)arg1 largeNudgePeak:(unk)arg2 completion:(id)arg3  ;
-(void)setPitch:(CGFloat)arg0 yaw:(CGFloat)arg1 ;


@end


#endif