// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARSMALLSTACKTEXTCOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLSTACKTEXTCOMPLICATIONVIEW_H

@class CLKUIColoringLabel;


#import "NTKCircularComplicationView.h"

@interface NTKCircularSmallStackTextComplicationView : NTKCircularComplicationView {
    CLKUIColoringLabel *_firstLineLabel;
    CLKUIColoringLabel *_secondLineLabel;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)_updateLabelColors;
-(void)_updateLabelsForFontChange;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg0 ;
-(void)setUsesMultiColor:(BOOL)arg0 ;


@end


#endif