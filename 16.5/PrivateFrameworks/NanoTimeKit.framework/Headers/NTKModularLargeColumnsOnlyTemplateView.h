// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMODULARLARGECOLUMNSONLYTEMPLATEVIEW_H
#define NTKMODULARLARGECOLUMNSONLYTEMPLATEVIEW_H

@class CLKUIColoringLabel, UIView<CDComplicationImageView>;


#import "NTKModularLargeColumnTemplateView.h"

@interface NTKModularLargeColumnsOnlyTemplateView : NTKModularLargeColumnTemplateView {
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
    CLKUIColoringLabel *_row3Column1Label;
    CLKUIColoringLabel *_row3Column2Label;
    UIView<CDComplicationImageView> *_row1ImageView;
    UIView<CDComplicationImageView> *_row2ImageView;
    UIView<CDComplicationImageView> *_row3ImageView;
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