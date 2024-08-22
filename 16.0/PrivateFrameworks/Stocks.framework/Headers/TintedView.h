// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TINTEDVIEW_H
#define TINTEDVIEW_H

@class UIView, UIImage, UIColor;



@interface TintedView : UIView

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(id)init;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif