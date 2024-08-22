// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUTILITYSMALLRINGIMAGECOMPLICATIONVIEW_H
#define NTKUTILITYSMALLRINGIMAGECOMPLICATIONVIEW_H

@class UIView<NTKComplicationImageView>, CLKProgressProvider, NSNumber;


#import "NTKUtilitySmallRingComplicationView.h"

@interface NTKUtilitySmallRingImageComplicationView : NTKUtilitySmallRingComplicationView {
    UIView<NTKComplicationImageView> *_imageView;
    CLKProgressProvider *_progressProvider;
    NSNumber *_progressUpdateToken;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)ringColor;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)_updateWithImageProvider:(id)arg0 ;
-(void)layoutSubviews;
-(void)updateRingWithProgressProvider:(id)arg0 ;


@end


#endif