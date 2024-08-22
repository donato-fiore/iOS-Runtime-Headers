// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARSTACKTEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARSTACKTEXTVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"

@interface NTKRichComplicationBaseCircularStackTextView : NTKRichComplicationCircularBaseView

@property (nonatomic) NSUInteger highlightMode; // ivar: _highlightMode
@property (retain, nonatomic) NTKColoringLabel *line1Label; // ivar: _line1Label
@property (retain, nonatomic) NTKColoringLabel *line2Label; // ivar: _line2Label


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)_line1FilterStyle;
-(NSInteger)_line2FilterStyle;
-(id)_createAndAddLabel;
-(id)_desiredFontForLabel:(id)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif