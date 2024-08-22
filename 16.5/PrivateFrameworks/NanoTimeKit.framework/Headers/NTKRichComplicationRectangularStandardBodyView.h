// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARSTANDARDBODYVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARSTANDARDBODYVIEW_H

@class CLKUIColoringLabel;


#import "NTKRichComplicationRectangularLargeHeadlineBaseView.h"

@interface NTKRichComplicationRectangularStandardBodyView : NTKRichComplicationRectangularLargeHeadlineBaseView {
    CLKUIColoringLabel *_line1Label;
    CLKUIColoringLabel *_line2Label;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
-(id)init;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif