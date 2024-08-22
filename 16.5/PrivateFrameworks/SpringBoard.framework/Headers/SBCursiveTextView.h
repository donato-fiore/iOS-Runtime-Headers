// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCURSIVETEXTVIEW_H
#define SBCURSIVETEXTVIEW_H

@class UIView, CAShapeLayer;


#import "SBCursiveTextPath.h"

@interface SBCursiveTextView : UIView {
    CAShapeLayer *_textLayer;
    SBCursiveTextPath *_textPath;
    CGAffineTransform _textTransform;
}


@property (readonly, nonatomic) CGFloat duration;


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configure;
-(void)layoutSubviews;
-(void)loadText:(id)arg0 pointSize:(CGFloat)arg1 ;
-(void)setAccessibilityLabel:(id)arg0 ;
-(void)setAccessibilityLanguage:(id)arg0 ;
-(void)setFillColor:(id)arg0 ;
-(void)setTime:(float)arg0 ;


@end


#endif