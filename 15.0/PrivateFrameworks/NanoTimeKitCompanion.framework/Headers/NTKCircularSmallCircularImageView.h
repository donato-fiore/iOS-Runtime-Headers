// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCIRCULARSMALLCIRCULARIMAGEVIEW_H
#define NTKCIRCULARSMALLCIRCULARIMAGEVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKCircularComplicationView.h"

@interface NTKCircularSmallCircularImageView : NTKCircularComplicationView

@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // ivar: _imageView


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)layoutSubviews;
-(void)setUsesMediumLayout:(BOOL)arg0 ;


@end


#endif