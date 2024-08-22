// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUTILITYSMALLIMAGETEMPLATEVIEW_H
#define NTKUTILITYSMALLIMAGETEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKUtilityCircularComplicationView.h"

@interface NTKUtilitySmallImageTemplateView : NTKUtilityCircularComplicationView {
    BOOL _needsLayoutContent;
}


@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // ivar: _imageView


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_setNeedsLayoutContent;
-(void)_updateForTemplateChange;


@end


#endif