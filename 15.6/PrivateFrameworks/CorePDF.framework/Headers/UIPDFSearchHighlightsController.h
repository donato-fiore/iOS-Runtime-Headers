// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPDFSEARCHHIGHLIGHTSCONTROLLER_H
#define UIPDFSEARCHHIGHLIGHTSCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "UIPDFPageView.h"
#import "UIPDFSelection.h"

@interface UIPDFSearchHighlightsController : NSObject {
    NSMutableArray *_searchHighlightLayers;
    UIPDFPageView *_pageView;
    *CGColor _highlightColor;
    *CGColor _borderColor;
    *CGColor _shadowColor;
    BOOL _pageRendered;
    NSMutableArray *_rectangles;
    UIPDFSelection *_selection;
}




-(BOOL)hasSearchHighlights;
-(NSUInteger)indexOfColumnBreakStartingAt:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 ;
-(id)initWithPageView:(id)arg0 ;
-(struct CGRect )unionFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)_addAnimation2:(id)arg0 ;
-(void)_addAnimation:(id)arg0 ;
-(void)addLayer:(struct CGRect )arg0 path:(struct CGPath *)arg1 shadowPath:(struct CGPath *)arg2 animated:(BOOL)arg3 ;
-(void)addSearchHighlightForRotatedSelection:(id)arg0 animated:(BOOL)arg1 ;
-(void)addSearchHighlightForSelection:(id)arg0 animated:(BOOL)arg1 ;
-(void)clearSearchHighlights;
-(void)dealloc;
-(void)drawLayer:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)makeType1Path:(struct CGPath *)arg0 shadowPath:(struct CGPath *)arg1 ;
-(void)makeType1Shadow:(struct CGPath *)arg0 rect:(struct CGRect )arg1 inset:(struct CGPoint )arg2 ;
-(void)makeType2Path:(struct CGPath *)arg0 to:(NSUInteger)arg1 shadowPath:(struct CGPath *)arg2 ;
-(void)makeType2Shadow:(struct CGPath *)arg0 rect:(struct CGRect )arg1 ;
-(void)makeType3Path:(struct CGPath *)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 shadowPath:(struct CGPath *)arg3 ;
-(void)makeType4Path:(struct CGPath *)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 shadowPath:(struct CGPath *)arg3 ;
-(void)pageDidRender:(id)arg0 ;
-(void)setNeedsDisplay;


@end


#endif