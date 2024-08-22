// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLEGRADIENT_H
#define TSDMUTABLEGRADIENT_H

@class NSString, TSUColor, NSArray;
@protocol TSDGradientStopContainer;


#import "TSDGradient.h"

@interface TSDMutableGradient : TSDGradient <TSDGradientStopContainer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TSUColor *firstColor;
@property (retain, nonatomic) NSArray *gradientStops;
@property (nonatomic) NSUInteger gradientType;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAdvancedGradient;
@property (retain, nonatomic) TSUColor *lastColor;
@property (nonatomic) CGFloat opacity;
@property (readonly) Class superclass;


-(id)insertStopAtFraction:(CGFloat)arg0 ;
-(id)insertStopAtFraction:(CGFloat)arg0 withColor:(id)arg1 ;
-(id)removeStopAtIndex:(NSUInteger)arg0 ;
-(void)evenlyDistributeStops;
-(void)insertGradientStop:(id)arg0 ;
-(void)moveStopAtIndex:(NSUInteger)arg0 toFraction:(CGFloat)arg1 ;
-(void)removeStop:(id)arg0 ;
-(void)reverseStopOrder;
-(void)setColorOfStopAtIndex:(NSUInteger)arg0 toColor:(id)arg1 ;
-(void)setFraction:(CGFloat)arg0 ofStopAtIndex:(NSUInteger)arg1 ;
-(void)setInflectionOfStopAtIndex:(NSUInteger)arg0 toInflection:(CGFloat)arg1 ;
-(void)swapStopAtIndex:(NSUInteger)arg0 withStopAtIndex:(NSUInteger)arg1 ;


@end


#endif