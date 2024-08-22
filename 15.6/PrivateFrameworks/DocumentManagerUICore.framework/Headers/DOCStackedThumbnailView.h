// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCSTACKEDTHUMBNAILVIEW_H
#define DOCSTACKEDTHUMBNAILVIEW_H

@class UIView, NSArray;



@interface DOCStackedThumbnailView : UIView

@property (copy, nonatomic) NSArray *URLs; // ivar: _URLs
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *thumbnailImageViews; // ivar: _thumbnailImageViews
@property (nonatomic) CGSize topThumbnailSize; // ivar: _topThumbnailSize


-(id)initWithTopThumbnailSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)createThumbnailViewsWithCount:(NSUInteger)arg0 createViewForIndex:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateItems;


@end


#endif