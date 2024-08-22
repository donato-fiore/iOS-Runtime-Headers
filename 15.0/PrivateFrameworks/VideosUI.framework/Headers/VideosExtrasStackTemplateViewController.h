// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASSTACKTEMPLATEVIEWCONTROLLER_H
#define VIDEOSEXTRASSTACKTEMPLATEVIEWCONTROLLER_H

@class UICollectionView, UICollectionViewFlowLayout, NSMutableDictionary, NSString;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate;


#import "VideosExtrasTemplateViewController.h"
#import "VideosExtrasBannerController.h"

@interface VideosExtrasStackTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_sizes;
    VideosExtrasBannerController *_bannerViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)showsPlaceholder;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_viewControllerForIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(id)initWithDocument:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(id)sectionStyle;
-(id)templateElement;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_dynamicTypeDidChange;
-(void)_prepareLayout;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif