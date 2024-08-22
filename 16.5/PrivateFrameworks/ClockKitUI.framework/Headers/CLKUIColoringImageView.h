// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUICOLORINGIMAGEVIEW_H
#define CLKUICOLORINGIMAGEVIEW_H

@class UIImageView, UIColor, NSString, CLKImageProvider;
@protocol CLKUIColoringView;



@interface CLKUIColoringImageView : UIImageView <CLKUIColoringView>



@property (retain, nonatomic) UIColor *color;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (nonatomic) CGSize maxSize; // ivar: _maxSize
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) NSInteger symbolImageType; // ivar: _symbolImageType
@property (nonatomic) BOOL usesLegibility;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_commonInit;
-(void)setImage:(id)arg0 ;
-(void)sizeToFit;


@end


#endif