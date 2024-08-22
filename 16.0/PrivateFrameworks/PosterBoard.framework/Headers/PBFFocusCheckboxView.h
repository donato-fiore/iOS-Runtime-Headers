// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFFOCUSCHECKBOXVIEW_H
#define PBFFOCUSCHECKBOXVIEW_H

@class UIView, UIImageView, NSString;


#import "_TtC11PosterBoard13PBFCircleView.h"

@interface PBFFocusCheckboxView : UIView {
    _TtC11PosterBoard13PBFCircleView *_circleView;
    UIImageView *_imageView;
}


@property (copy, nonatomic) NSString *associatedPosterIdentifier; // ivar: _associatedPosterIdentifier
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on


-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_updateAccessibilityAttributes;
-(void)_updateColors;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif