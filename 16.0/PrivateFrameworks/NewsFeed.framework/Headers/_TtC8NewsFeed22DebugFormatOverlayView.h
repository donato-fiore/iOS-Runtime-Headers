// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8NEWSFEED22DEBUGFORMATOVERLAYVIEW_H
#define _TTC8NEWSFEED22DEBUGFORMATOVERLAYVIEW_H

@class UIView;



@interface _TtC8NewsFeed22DebugFormatOverlayView : UIView {
    ? selectionFrame;
    ? selectionContentFrame;
    ? metricSelectionFrame;
    ? contentOffset;
    ? contentFrame;
    ? contentTransformation;
    ? selectionView;
    ? metricSelectionView;
    ? rulerView;
}


@property (nonatomic) BOOL userInteractionEnabled;


-(BOOL)isUserInteractionEnabled;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif