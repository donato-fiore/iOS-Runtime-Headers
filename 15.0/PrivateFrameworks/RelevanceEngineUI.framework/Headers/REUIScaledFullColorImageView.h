// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUISCALEDFULLCOLORIMAGEVIEW_H
#define REUISCALEDFULLCOLORIMAGEVIEW_H

@class UIView, NSString, UIImageView;
@protocol CLKFullColorImageView, CLKMonochromeFilterProvider;



@interface REUIScaledFullColorImageView : UIView <CLKFullColorImageView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: filterProvider
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (readonly) Class superclass;


-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif