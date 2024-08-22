// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKBRTFINGERDETECTIONFINGERFEEDBACKVIEW_H
#define _UIKBRTFINGERDETECTIONFINGERFEEDBACKVIEW_H



#import "UIView.h"
#import "_UIKBRTFingerDetectionFingerCircleView.h"
#import "UILabel.h"

@interface _UIKBRTFingerDetectionFingerFeedbackView : UIView {
    CGPoint _framelocation;
    CGFloat _radiusInt;
}


@property (retain, nonatomic) _UIKBRTFingerDetectionFingerCircleView *fingerDot; // ivar: _fingerDot
@property (retain, nonatomic) UILabel *fingerLabel; // ivar: _fingerLabel
@property (nonatomic) BOOL unknownSeen; // ivar: _unknownSeen


-(CGFloat)radius;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)centerOn:(struct CGPoint )arg0 withRadius:(CGFloat)arg1 andIdentifier:(NSUInteger)arg2 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;


@end


#endif