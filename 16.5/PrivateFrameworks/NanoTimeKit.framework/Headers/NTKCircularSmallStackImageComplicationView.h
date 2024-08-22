// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARSMALLSTACKIMAGECOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLSTACKIMAGECOMPLICATIONVIEW_H

@class CLKUIColoringLabel, UIView<CDComplicationImageView>;


#import "NTKCircularComplicationView.h"

@interface NTKCircularSmallStackImageComplicationView : NTKCircularComplicationView {
    CLKUIColoringLabel *_label;
    UIView<CDComplicationImageView> *_imageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(CGFloat)_imageScaleForTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)_updateLabelsForFontChange;
-(void)layoutSubviews;


@end


#endif