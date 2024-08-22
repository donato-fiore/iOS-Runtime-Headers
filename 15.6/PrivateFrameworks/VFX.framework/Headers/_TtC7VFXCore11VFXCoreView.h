// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7VFXCORE11VFXCOREVIEW_H
#define _TTC7VFXCORE11VFXCOREVIEW_H

@class UIView, UIColor;



@interface _TtC7VFXCore11VFXCoreView : UIView {
    ? delegate;
    ? renderTargetHandle;
    ? metalLayer;
    ? sampleCount;
    ? preferredFramesPerSecond;
    ? scaleFactor;
    ? entityManager;
    ? renderer;
    ? paused;
    ? effectID;
    ? sizeDirty;
    ? drawableSize;
    ? resizingMode;
}


@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) CGRect frame;
@property (nonatomic) BOOL hidden;


+(Class)layerClass;
-(BOOL)isHidden;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif