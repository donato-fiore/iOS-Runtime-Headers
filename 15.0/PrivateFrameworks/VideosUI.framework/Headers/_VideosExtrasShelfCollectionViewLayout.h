// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VIDEOSEXTRASSHELFCOLLECTIONVIEWLAYOUT_H
#define _VIDEOSEXTRASSHELFCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSDictionary;



@interface _VideosExtrasShelfCollectionViewLayout : UICollectionViewFlowLayout {
    NSDictionary *_rects;
}


@property (readonly, nonatomic) CGSize calculatedContentSize; // ivar: _contentSize


-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_calculateSizes;
-(void)prepareLayout;


@end


#endif