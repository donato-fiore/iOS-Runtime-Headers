// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMODULARLARGESTACKTEMPLATEVIEW_H
#define NTKMODULARLARGESTACKTEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKModularTemplateView.h"
#import "NTKColoringLabel.h"

@interface NTKModularLargeStackTemplateView : NTKModularTemplateView {
    NTKColoringLabel *_headerLeadingLabel;
    NTKColoringLabel *_headerTrailingLabel;
    BOOL _shouldTruncateHeaderLeadingLabelFirst;
    NTKColoringLabel *_body1Label;
    NTKColoringLabel *_body2Label;
    UIView<NTKComplicationImageView> *_headerGlyph;
    UIView<NTKComplicationImageView> *_body1Glyph;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)_newLabelSubview;
-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;
-(void)_updateForStandardBodyTemplate:(id)arg0 ;
-(void)_updateForTallBodyTemplate:(id)arg0 ;
-(void)_updateLabelsMaxWidths;


@end


#endif