// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIDEOSEXTRASCAROUSELCOLLECTIONVIEW_H
#define VIDEOSEXTRASCAROUSELCOLLECTIONVIEW_H

@class UICollectionView;
@protocol VideosExtrasCarouselCollectionViewDelegate;



@interface VideosExtrasCarouselCollectionView : UICollectionView

@property (weak, nonatomic) NSObject<VideosExtrasCarouselCollectionViewDelegate> *carouselCollectionViewDelegate; // ivar: _carouselCollectionViewDelegate


-(void)didAddSubview:(id)arg0 ;


@end


#endif