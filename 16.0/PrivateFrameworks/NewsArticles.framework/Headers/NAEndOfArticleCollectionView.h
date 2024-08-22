// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NAENDOFARTICLECOLLECTIONVIEW_H
#define NAENDOFARTICLECOLLECTIONVIEW_H

@class UICollectionView;



@interface NAEndOfArticleCollectionView : UICollectionView

@property (nonatomic) NSInteger boundsHandling; // ivar: _boundsHandling


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 collectionViewLayout:(id)arg1 ;
-(struct CGRect )_visibleBounds;


@end


#endif