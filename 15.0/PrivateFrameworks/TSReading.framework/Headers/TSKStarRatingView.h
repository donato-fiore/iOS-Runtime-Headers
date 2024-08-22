// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKSTARRATINGVIEW_H
#define TSKSTARRATINGVIEW_H

@class UIControl, TSUColor;


#import "TSKHorizontalDragRecognizer.h"

@interface TSKStarRatingView : UIControl {
    NSInteger mRating;
    NSInteger mRatingOnFingerDown;
    TSKHorizontalDragRecognizer *mDragGesture;
}


@property (copy, nonatomic) TSUColor *color; // ivar: mColor
@property (nonatomic) BOOL showsDots; // ivar: mShowsDots
@property (nonatomic) int style; // ivar: mStyle
@property (nonatomic) NSInteger value;


+(struct CGPath *)newStarPath:(CGFloat)arg0 ;
+(void)renderRating:(NSInteger)arg0 intoContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 style:(int)arg3 showDots:(BOOL)arg4 ;
-(Class)renderClass;
-(NSInteger)p_starRatingForGesture:(id)arg0 ;
-(NSInteger)p_starRatingForLocation:(CGFloat)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)p_horizontalDrag:(id)arg0 ;
-(void)p_setupGestureRecognizers;
-(void)p_tapped:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif