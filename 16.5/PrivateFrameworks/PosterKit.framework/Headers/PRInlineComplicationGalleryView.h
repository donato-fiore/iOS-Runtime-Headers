// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRINLINECOMPLICATIONGALLERYVIEW_H
#define PRINLINECOMPLICATIONGALLERYVIEW_H

@class UIView, UICollectionView, NSString;
@protocol UICollectionViewDelegate, PRInlineComplicationGalleryViewDelegate;



@interface PRInlineComplicationGalleryView : UIView <UICollectionViewDelegate>



@property (readonly, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRInlineComplicationGalleryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_makeLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif