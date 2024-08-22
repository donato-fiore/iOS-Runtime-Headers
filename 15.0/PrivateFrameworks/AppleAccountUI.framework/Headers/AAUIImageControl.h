// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIIMAGECONTROL_H
#define AAUIIMAGECONTROL_H

@class UIControl, UIView, UIImageView;


#import "AAUILabel.h"

@interface AAUIImageControl : UIControl {
    UIView *_overlayView;
}


@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) AAUILabel *label; // ivar: _label


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateLabelVisibility;
-(void)_updateOverlayViewVisibility;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif