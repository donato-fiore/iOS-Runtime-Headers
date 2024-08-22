// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKMODULARSMALLCOLUMNTEMPLATEVIEW_H
#define NTKMODULARSMALLCOLUMNTEMPLATEVIEW_H

@class CLKUIColoringLabel, CLKComplicationTemplateModularSmallColumnsText;


#import "NTKModularTemplateView.h"

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {
    CLKUIColoringLabel *_row1Column1Label;
    CLKUIColoringLabel *_row1Column2Label;
    CLKUIColoringLabel *_row2Column1Label;
    CLKUIColoringLabel *_row2Column2Label;
    BOOL _calculatedFontSize;
}


@property (readonly, nonatomic) CLKComplicationTemplateModularSmallColumnsText *complicationTemplate;


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)_bodyFontOfSize:(CGFloat)arg0 ;
-(id)_headerFontOfSize:(CGFloat)arg0 ;
-(id)_newLabelSubview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;


@end


#endif