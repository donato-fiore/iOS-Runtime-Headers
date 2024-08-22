// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKMODULARSMALLSIMPLETEMPLATEVIEW_H
#define NTKMODULARSMALLSIMPLETEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKModularTemplateView.h"
#import "NTKColoringLabel.h"

@interface NTKModularSmallSimpleTemplateView : NTKModularTemplateView {
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    NSInteger _maxDynamicFontSize;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(id)supportedTemplateClasses;
-(CGFloat)_maxTextWidthForDynamicFontSize:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureWithImageTemplate:(id)arg0 ;
-(void)_configureWithTextTemplate:(id)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;


@end


#endif