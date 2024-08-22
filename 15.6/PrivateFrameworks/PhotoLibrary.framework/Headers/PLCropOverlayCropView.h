// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCROPOVERLAYCROPVIEW_H
#define PLCROPOVERLAYCROPVIEW_H

@class UIView;



@interface PLCropOverlayCropView : UIView {
    CGRect _cropRect;
    UIView *_aboveCropView;
    UIView *_cropRectView;
    UIView *_belowCropView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )cropRect;
-(void)_removeCropViews;
-(void)_updateCropRectIfNeeded;
-(void)dealloc;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setCropRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif