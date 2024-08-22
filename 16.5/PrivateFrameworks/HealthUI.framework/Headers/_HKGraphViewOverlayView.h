// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKGRAPHVIEWOVERLAYVIEW_H
#define _HKGRAPHVIEWOVERLAYVIEW_H

@class UIImageView, UIGraphicsImageRenderer;



@interface _HKGraphViewOverlayView : UIImageView

@property (retain, nonatomic) UIGraphicsImageRenderer *imageRenderer; // ivar: _imageRenderer


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateRendererSize:(struct CGSize )arg0 ;
-(void)drawContentUsingBlock:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif