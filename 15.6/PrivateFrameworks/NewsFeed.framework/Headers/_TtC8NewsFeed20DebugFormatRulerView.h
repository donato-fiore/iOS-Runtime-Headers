// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8NEWSFEED20DEBUGFORMATRULERVIEW_H
#define _TTC8NEWSFEED20DEBUGFORMATRULERVIEW_H

@class UIView;



@interface _TtC8NewsFeed20DebugFormatRulerView : UIView {
    ? scale;
    ? contentSize;
    ? contentBounds;
    ? canvasOffset;
    ? selectionFrame;
    ? metricSelectionFrame;
    ? rulersHidden;
    ? rulerSize;
    ? verticalRulerEdgeView;
    ? horizontalRulerEdgeView;
    ? gridView;
    ? cornerView;
    ? borderLayer;
}




-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif