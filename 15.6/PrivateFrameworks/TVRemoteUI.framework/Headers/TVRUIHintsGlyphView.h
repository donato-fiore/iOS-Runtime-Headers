// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRUIHINTSGLYPHVIEW_H
#define TVRUIHINTSGLYPHVIEW_H

@class UIView, UIImageView;
@protocol TVRUIHintsStyleProvider;



@interface TVRUIHintsGlyphView : UIView

@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly, nonatomic) NSObject<TVRUIHintsStyleProvider> *styleProvider; // ivar: _styleProvider


-(id)initWithImage:(id)arg0 styleProvider:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif