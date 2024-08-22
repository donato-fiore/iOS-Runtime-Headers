// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYVIEW_H
#define PRCOMPLICATIONGALLERYVIEW_H

@class UIView, UICollectionView;
@protocol PRComplicationGalleryViewDelegate;



@interface PRComplicationGalleryView : UIView

@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (weak, nonatomic) NSObject<PRComplicationGalleryViewDelegate> *delegate; // ivar: _delegate


-(id)_makeLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif