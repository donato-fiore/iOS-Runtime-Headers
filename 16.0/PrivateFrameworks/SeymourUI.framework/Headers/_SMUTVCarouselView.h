// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SMUTVCAROUSELVIEW_H
#define _SMUTVCAROUSELVIEW_H

@class TVCarouselView, UIView, NSArray;
@protocol SMUTVCarouselView, SMUTVCarouselViewDataSource, SMUTVCarouselViewDelegate;



@interface _SMUTVCarouselView : TVCarouselView <SMUTVCarouselView>



@property (nonatomic) CGFloat autoscrollInterval;
@property (nonatomic) CGRect bounds;
@property (weak, nonatomic) NSObject<SMUTVCarouselViewDataSource> *dataSource;
@property (weak, nonatomic) NSObject<SMUTVCarouselViewDelegate> *delegate;
@property (nonatomic) CGPoint focusDirection;
@property (nonatomic) CGRect frame;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) CGFloat interitemSpacing;
@property (nonatomic) CGSize itemSize;
@property (nonatomic) CGFloat pageControlMargin;
@property (nonatomic) NSUInteger scrollMode;
@property (nonatomic) BOOL shouldScaleOnIdleFocus;
@property (readonly, nonatomic) CGFloat showcaseFactor;
@property (nonatomic) BOOL showsPageControl;
@property (nonatomic) CGFloat unitScrollDuration;
@property (readonly, copy, nonatomic) NSArray *visibleCells;




@end


#endif