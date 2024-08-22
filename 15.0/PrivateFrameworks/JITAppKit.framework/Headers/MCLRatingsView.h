// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCLRATINGSVIEW_H
#define MCLRATINGSVIEW_H

@class UIView, NSLayoutConstraint, UIImage;



@interface MCLRatingsView : UIView {
    CGFloat _imageaspect;
    NSLayoutConstraint *_widthConstraint;
}


@property (nonatomic) BOOL actionVariant; // ivar: _actionVariant
@property (retain, nonatomic) UIImage *emptyImage; // ivar: _emptyImage
@property (retain, nonatomic) UIImage *fullImage; // ivar: _fullImage
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (nonatomic) CGFloat value; // ivar: _value


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif