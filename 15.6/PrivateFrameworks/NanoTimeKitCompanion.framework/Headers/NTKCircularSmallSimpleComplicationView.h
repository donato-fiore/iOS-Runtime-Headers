// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCIRCULARSMALLSIMPLECOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLSIMPLECOMPLICATIONVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKCircularComplicationView.h"
#import "NTKColoringLabel.h"

@interface NTKCircularSmallSimpleComplicationView : NTKCircularComplicationView

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // ivar: _imageView
@property (retain, nonatomic) NTKColoringLabel *label; // ivar: _label
@property (nonatomic) CGFloat maxDynamicFontSize; // ivar: _maxDynamicFontSize


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(CGFloat)_imageScaleForTemplate:(id)arg0 forDevice:(id)arg1 ;
-(CGFloat)_baselineOffsetForDynamicSize:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)_updateImageViewWithImageProvider:(id)arg0 ;
-(void)_updateLabelWithTextProvider:(id)arg0 ;
-(void)_updateLabelsForFontChange;
-(void)layoutSubviews;
-(void)updateImageViewWithImage:(id)arg0 ;
-(void)updateLabelWithString:(id)arg0 ;


@end


#endif