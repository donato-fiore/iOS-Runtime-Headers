// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLECONTENTVIEW_H
#define ICTABLECONTENTVIEW_H

@class UIView, UIColor, NSMutableDictionary;



@interface ICTableContentView : UIView

@property (retain, nonatomic) UIView *bottomBorder; // ivar: _bottomBorder
@property (nonatomic) CGRect exclusionRect; // ivar: _exclusionRect
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (retain, nonatomic) NSMutableDictionary *horizontalStrokes; // ivar: _horizontalStrokes
@property (readonly, nonatomic) UIColor *innerBorderColor;
@property (readonly, nonatomic) CGFloat innerBorderWidth;
@property (retain, nonatomic) UIView *leftBorder; // ivar: _leftBorder
@property (retain, nonatomic) UIView *rightBorder; // ivar: _rightBorder
@property (retain, nonatomic) UIView *topBorder; // ivar: _topBorder
@property (retain, nonatomic) NSMutableDictionary *verticalStrokes; // ivar: _verticalStrokes


-(BOOL)splitStroke:(id)arg0 atRect:(struct CGRect )arg1 ;
-(CGFloat)alignedPosition:(CGFloat)arg0 ;
-(CGFloat)outerBorderWidth;
-(id)addSubstrokeWithFrame:(struct CGRect )arg0 toStroke:(id)arg1 ;
-(id)createStroke;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)outerBorderColor;
-(void)layoutSubviews;
-(void)recursivelyUpdateLayer:(id)arg0 toColor:(struct CGColor *)arg1 ignoreIfClear:(BOOL)arg2 ;
-(void)setHorizontalLinePosition:(id)arg0 forKey:(id)arg1 ;
-(void)setVerticalLinePosition:(id)arg0 forKey:(id)arg1 ;
-(void)sharedInit;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unsplitStroke:(id)arg0 ;
-(void)updateColors;
-(void)updateLayout;


@end


#endif