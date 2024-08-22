// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRIMAGEVIEW_H
#define PRIMAGEVIEW_H

@class UIView, UIImage;



@interface PRImageView : UIView

@property (nonatomic, getter=isCircular) BOOL circular; // ivar: _circular
@property (retain, nonatomic) UIImage *image; // ivar: _image


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif