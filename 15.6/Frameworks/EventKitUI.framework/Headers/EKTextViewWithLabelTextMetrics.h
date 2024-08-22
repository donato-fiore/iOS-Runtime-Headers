// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKTEXTVIEWWITHLABELTEXTMETRICS_H
#define EKTEXTVIEWWITHLABELTEXTMETRICS_H

@class UITextView, UIFont, NSString, UIColor;
@protocol CalendarLabelTextMetrics;



@interface EKTextViewWithLabelTextMetrics : UITextView <CalendarLabelTextMetrics>



@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode; // ivar: lineBreakMode
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


-(id)accessibilityValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 limitedToNumberOfLines:(NSInteger)arg1 ;
-(void)setURL:(id)arg0 ;


@end


#endif