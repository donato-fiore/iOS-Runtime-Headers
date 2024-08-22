// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKZOOMSEGMENTEDCONTROL_H
#define MKZOOMSEGMENTEDCONTROL_H

@class UIView, CALayer, CABackdropLayer;



@interface MKZoomSegmentedControl : UIView {
    *CGImage _backgroundUnselectedImage;
    *CGImage _backgroundMinusSelectedImage;
    *CGImage _backgroundPlusSelectedImage;
    *CGImage _maskImage;
    CALayer *_displayLayer;
    CABackdropLayer *_blurLayer;
    CALayer *_maskLayer;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_unloadResources;
-(void)dealloc;
-(void)minusPressed:(id)arg0 ;
-(void)plusPressed:(id)arg0 ;
-(void)touchEnded:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAppearance;


@end


#endif