// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCC11ASSETVIEWER12SCRUBBERVIEW12CUSTOMBUTTON_H
#define _TTCC11ASSETVIEWER12SCRUBBERVIEW12CUSTOMBUTTON_H

@class UIButton;



@interface _TtCC11AssetViewer12ScrubberView12CustomButton : UIButton {
    ? highlightAnimator;
}


@property (nonatomic) BOOL highlighted;


-(BOOL)isHighlighted;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif