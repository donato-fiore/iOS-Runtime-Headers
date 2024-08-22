// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSOLARRICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKSOLARRICHCOMPLICATIONBASECIRCULARVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKSolarRichComplicationFullColorImageView.h"

@interface NTKSolarRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKSolarRichComplicationFullColorImageView *_solarImageView;
}




-(BOOL)_shouldAnimateWithTemplateUpdateReason:(NSInteger)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_updateWithLocation:(id)arg0 useIdealizedTime:(BOOL)arg1 forceUpdate:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)setTimeTravelDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif