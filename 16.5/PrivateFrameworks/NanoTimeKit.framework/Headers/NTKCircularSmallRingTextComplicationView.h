// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCIRCULARSMALLRINGTEXTCOMPLICATIONVIEW_H
#define NTKCIRCULARSMALLRINGTEXTCOMPLICATIONVIEW_H

@class CLKUIColoringLabel;


#import "NTKCircularSmallRingComplicationView.h"

@interface NTKCircularSmallRingTextComplicationView : NTKCircularSmallRingComplicationView {
    CLKUIColoringLabel *_label;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_updateForTemplateChange;
-(void)_updateLabelWithTextProvider:(id)arg0 ;
-(void)_updateLabelsForFontChange;
-(void)layoutSubviews;
-(void)updateLabelWithString:(id)arg0 ;


@end


#endif