// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIGALLERYSWOOSHVIEWCONTROLLER_H
#define SKUIGALLERYSWOOSHVIEWCONTROLLER_H

@class UICollectionView, NSString;
@protocol SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SKUIGallerySwooshViewControllerDelegate;


#import "SKUISwooshViewController.h"
#import "SKUISwooshView.h"
#import "SKUISwooshPageComponent.h"

@interface SKUIGallerySwooshViewController : SKUISwooshViewController <SKUIEmbeddedMediaViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

 {
    UICollectionView *_collectionView;
    BOOL _delegateWantsWillDisplay;
    CGFloat _itemHeight;
    SKUISwooshView *_swooshView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIGallerySwooshViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SKUISwooshPageComponent *gallerySwoosh; // ivar: _gallerySwoosh
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_newViewWithMediaComponent:(id)arg0 ;
-(id)artworkForItemAtIndex:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathsForVisibleItems;
-(id)initWithGallerySwoosh:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)mediaView:(id)arg0 playbackStateDidChange:(NSInteger)arg1 ;
-(void)performActionForItemAtIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)setColorScheme:(id)arg0 ;
-(void)setImage:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif