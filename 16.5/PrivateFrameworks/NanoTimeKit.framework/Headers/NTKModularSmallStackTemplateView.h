// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMODULARSMALLSTACKTEMPLATEVIEW_H
#define NTKMODULARSMALLSTACKTEMPLATEVIEW_H

@class UIView<CDComplicationImageView>, CLKUIColoringLabel;


#import "NTKModularTemplateView.h"
#import "NTKOneColumnModularSmallLayoutAttributes.h"

@interface NTKModularSmallStackTemplateView : NTKModularTemplateView {
    NTKOneColumnModularSmallLayoutAttributes *_layoutAttributes;
}


@property (retain, nonatomic) UIView<CDComplicationImageView> *imageView; // ivar: _imageView
@property (retain, nonatomic) CLKUIColoringLabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) CLKUIColoringLabel *titleLabel; // ivar: _titleLabel


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;
-(void)_updateLayoutForLabel:(id)arg0 baselineOffset:(CGFloat)arg1 ;


@end


#endif