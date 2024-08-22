// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVRMATCHPOINTARTWORKVIEW_H
#define _TVRMATCHPOINTARTWORKVIEW_H

@class UIView, UIImageView;



@interface _TVRMatchPointArtworkView : UIView {
    UIView *_selectIndicator;
    UIImageView *_upImageView;
    UIImageView *_rightImageView;
    UIImageView *_downImageView;
    UIImageView *_leftImageView;
}




-(BOOL)touchLocationIsConsideredCenter:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)highlightForButtonType:(NSInteger)arg0 enabled:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif