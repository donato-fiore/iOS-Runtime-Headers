// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKMODULARSMALLDATETEMPLATEVIEW_H
#define NTKMODULARSMALLDATETEMPLATEVIEW_H



#import "NTKModularTemplateView.h"
#import "NTKColoringLabel.h"

@interface NTKModularSmallDateTemplateView : NTKModularTemplateView {
    NTKColoringLabel *_weekdayLabel;
    NTKColoringLabel *_dayLabel;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)_newLabelSubviewWithFont:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureContentSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(id)arg0 ;
-(void)_layoutContentView;
-(void)_update;
-(void)setIsXL:(BOOL)arg0 ;


@end


#endif