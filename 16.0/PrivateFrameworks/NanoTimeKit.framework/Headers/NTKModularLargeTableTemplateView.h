// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKMODULARLARGETABLETEMPLATEVIEW_H
#define NTKMODULARLARGETABLETEMPLATEVIEW_H

@class UIView<CDComplicationImageView>, CLKUIColoringLabel, CLKComplicationTemplateModularLargeTable;


#import "NTKModularLargeColumnTemplateView.h"

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {
    UIView<CDComplicationImageView> *_headerImageView;
    CLKUIColoringLabel *_headerLabel;
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
}


@property (retain, nonatomic) CLKComplicationTemplateModularLargeTable *complicationTemplate;


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateColumnRowsWithBlock:(id)arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;


@end


#endif