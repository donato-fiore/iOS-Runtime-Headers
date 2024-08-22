// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCMATERIALBACKGROUNDVIEW_H
#define ASCMATERIALBACKGROUNDVIEW_H

@class UIView, NSString, UIImageView, UIVisualEffectView;
@protocol ASCLockupMediaPresenterBackgroundView;



@interface ASCMaterialBackgroundView : UIView <ASCLockupMediaPresenterBackgroundView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;


@end


#endif