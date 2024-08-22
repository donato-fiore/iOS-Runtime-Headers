// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMODULARLARGETABLETEMPLATEVIEW_H
#define NTKMODULARLARGETABLETEMPLATEVIEW_H

@class UIView<NTKComplicationImageView>, CLKComplicationTemplateModularLargeTable;


#import "NTKModularLargeColumnTemplateView.h"
#import "NTKColoringLabel.h"

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {
    UIView<NTKComplicationImageView> *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_row1Column1Label;
    NTKColoringLabel *_row1Column2Label;
    NTKColoringLabel *_row2Column1Label;
    NTKColoringLabel *_row2Column2Label;
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