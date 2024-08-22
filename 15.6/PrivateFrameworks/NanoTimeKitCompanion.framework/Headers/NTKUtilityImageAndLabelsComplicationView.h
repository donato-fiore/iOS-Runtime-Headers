// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUTILITYIMAGEANDLABELSCOMPLICATIONVIEW_H
#define NTKUTILITYIMAGEANDLABELSCOMPLICATIONVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKUtilityComplicationView.h"
#import "NTKColoringLabel.h"

@interface NTKUtilityImageAndLabelsComplicationView : NTKUtilityComplicationView

@property (retain, nonatomic) NTKColoringLabel *firstLabel; // ivar: _firstLabel
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // ivar: _imageView
@property (retain, nonatomic) NTKColoringLabel *secondLabel; // ivar: _secondLabel


-(BOOL)_isViewVisible:(id)arg0 ;
-(BOOL)_shouldLayoutWithImageView;
-(CGFloat)_gapBetweenView:(id)arg0 nextView:(id)arg1 ;
-(CGFloat)_widthThatFits;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutSubviewsHorizontally:(id)arg0 ;
-(void)_setLabelAttributedText:(id)arg0 ;
-(void)_setLabelText:(id)arg0 ;
-(void)_setLabelTextProvider:(id)arg0 ;
-(void)_updateContentForMaxSizeChange;
-(void)_updateFirstLabelMaxSize;
-(void)_updateWithImageProvider:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif