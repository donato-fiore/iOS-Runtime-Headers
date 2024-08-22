// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARHEADLINELARGEBODYVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARHEADLINELARGEBODYVIEW_H

@class UIView;


#import "NTKRichComplicationRectangularBaseView.h"
#import "NTKColoringLabel.h"

@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {
    UIView *_body;
}


@property (retain, nonatomic) NTKColoringLabel *headerLabel; // ivar: _headerLabel


-(id)body;
-(id)headerTextProviderFromTemplate:(id)arg0 ;
-(id)init;
-(struct CGSize )_bodySize;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif