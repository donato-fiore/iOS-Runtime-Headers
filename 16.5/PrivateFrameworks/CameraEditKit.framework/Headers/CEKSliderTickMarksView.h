// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKSLIDERTICKMARKSVIEW_H
#define CEKSLIDERTICKMARKSVIEW_H

@class UIView, NSString, UIColor;
@protocol CEKTickMarksConfiguration, CEKSliderTickMarksDelegate;



@interface CEKSliderTickMarksView : UIView <CEKTickMarksConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CEKSliderTickMarksDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *mainTickMarkColor; // ivar: _mainTickMarkColor
@property (nonatomic) NSInteger mainTickMarkInterval; // ivar: _mainTickMarkInterval
@property (nonatomic) NSInteger mainTickMarkOffset; // ivar: _mainTickMarkOffset
@property (retain, nonatomic) UIColor *secondaryTickMarkColor; // ivar: _secondaryTickMarkColor
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tickMarkSpacing; // ivar: _tickMarkSpacing
@property (nonatomic) CGFloat tickMarkWidth; // ivar: _tickMarkWidth
@property (readonly, nonatomic) NSInteger tickMarksCount;
@property (nonatomic) BOOL useTickMarkLegibilityShadows; // ivar: _useTickMarkLegibilityShadows


-(BOOL)isMainTickMarkIndex:(NSInteger)arg0 ;
-(CGFloat)widthForTickMarkCount:(NSUInteger)arg0 ;
-(CGFloat)xOffsetForTickMarkIndex:(NSInteger)arg0 ;
-(NSInteger)floorTickMarkIndexForXOffset:(CGFloat)arg0 ;
-(id)_colorForMainTickMarks;
-(id)_colorForSecondaryTickMarks;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif