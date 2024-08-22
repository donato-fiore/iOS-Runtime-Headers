// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCIRCULARSMALLRINGIMAGECOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLRINGIMAGECOMPLICATIONVIEW_H

@class UIView<NTKComplicationImageView>, CLKProgressProvider, NSNumber;


#import "NTKCircularSmallRingComplicationView.h"

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(CGFloat)_imageScaleForTemplate:(id)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)layoutSubviews;
-(void)updateRingWithProgressProvider:(id)arg0 ;


@end


#endif