// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKMODULARLARGECOLUMNSONLYTEMPLATEVIEW_H
#define NTKMODULARLARGECOLUMNSONLYTEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>;


#import "NTKModularLargeColumnTemplateView.h"
#import "NTKColoringLabel.h"

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
    NTKColoringLabel *_row3Column1Label;
    NTKColoringLabel *_row3Column2Label;
    UIView<NTKComplicationImageView> *_row1ImageView;
    UIView<NTKComplicationImageView> *_row2ImageView;
    UIView<NTKComplicationImageView> *_row3ImageView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColumnRowsWithBlock:(id)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;


@end


#endif