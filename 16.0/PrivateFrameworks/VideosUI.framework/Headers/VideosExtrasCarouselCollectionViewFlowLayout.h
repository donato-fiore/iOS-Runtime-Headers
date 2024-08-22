// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VIDEOSEXTRASCAROUSELCOLLECTIONVIEWFLOWLAYOUT_H
#define VIDEOSEXTRASCAROUSELCOLLECTIONVIEWFLOWLAYOUT_H

@class UICollectionViewFlowLayout;
@protocol VideosExtrasCarouselCollectionViewLayout;



@interface VideosExtrasCarouselCollectionViewFlowLayout : UICollectionViewFlowLayout <VideosExtrasCarouselCollectionViewLayout>





-(CGFloat)itemWidth;
-(NSUInteger)indexOfVisibleItem;
-(void)setIndexOfVisibleItem:(NSUInteger)arg0 ;
-(void)setIndexOfVisibleItem:(NSUInteger)arg0 animated:(BOOL)arg1 ;


@end


#endif