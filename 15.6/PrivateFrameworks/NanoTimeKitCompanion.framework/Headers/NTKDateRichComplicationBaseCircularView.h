// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDATERICHCOMPLICATIONBASECIRCULARVIEW_H
#define NTKDATERICHCOMPLICATIONBASECIRCULARVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKDateRichComplicationFullColorImageView.h"

@interface NTKDateRichComplicationBaseCircularView : NTKRichComplicationCircularBaseView {
    NTKDateRichComplicationFullColorImageView *_dateView;
}




-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif