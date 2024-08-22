// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBORDERLINEVIEW_H
#define HKBORDERLINEVIEW_H

@class UIView, UIColor, NSArray;



@interface HKBorderLineView : UIView

@property (nonatomic) UIEdgeInsets borderInsets; // ivar: _borderInsets
@property (retain, nonatomic) UIColor *borderLineColor; // ivar: _borderLineColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) NSInteger edges; // ivar: _edges
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) CGFloat minimumWidth; // ivar: _minimumWidth
@property (retain, nonatomic) NSArray *verticalDrawRanges; // ivar: _verticalDrawRanges


+(void)drawBorderLinesInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 verticalDrawRanges:(id)arg2 borderEdges:(NSInteger)arg3 borderLineWidth:(CGFloat)arg4 borderLineColor:(id)arg5 borderInsets:(struct UIEdgeInsets )arg6 ;
-(id)_adjustedVerticalDrawRanges;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_initFields;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif