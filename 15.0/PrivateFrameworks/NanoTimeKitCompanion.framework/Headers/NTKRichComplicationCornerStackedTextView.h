// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCORNERSTACKEDTEXTVIEW_H
#define NTKRICHCOMPLICATIONCORNERSTACKEDTEXTVIEW_H



#import "NTKRichComplicationCornerBaseTextView.h"
#import "NTKCurvedColoringLabel.h"

@interface NTKRichComplicationCornerStackedTextView : NTKRichComplicationCornerBaseTextView {
    NTKCurvedColoringLabel *_outerLabel;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)init;
-(id)outerLabel;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif