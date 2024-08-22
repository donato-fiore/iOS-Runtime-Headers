// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHLEGENDCELLMETRICS_H
#define TSCHLEGENDCELLMETRICS_H

@class TSWPParagraphStyle;

#import <Foundation/Foundation.h>


@interface TSCHLegendCellMetrics : NSObject

@property (readonly, nonatomic) float badgeSize; // ivar: _badgeSize
@property (readonly, nonatomic) float baseline; // ivar: _baseline
@property (readonly, nonatomic) *__CTFont font; // ivar: _font
@property (readonly, nonatomic) float lineGap; // ivar: _lineGap
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) float symbolGap; // ivar: _legendSymbolGap
@property (readonly, nonatomic) float titleHeight; // ivar: _trueTitleHeight


-(id)initWithParagraphStyle:(id)arg0 ;
-(void)dealloc;


@end


#endif