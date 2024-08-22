// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVALERTTEMPLATECONTROLLER_H
#define _TVALERTTEMPLATECONTROLLER_H

@class TVBgImageLoadingViewController, IKViewElement, NSArray, IKImageElement, NSIndexPath, NSString;
@protocol UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource;


#import "_TVCollectionView.h"

@interface _TVAlertTemplateController : TVBgImageLoadingViewController <UICollectionViewDelegateFlowLayout, _TVCollectionViewDelegate, UICollectionViewDataSource>

 {
    IKViewElement *_templateElement;
    _TVCollectionView *_collectionView;
    NSArray *_collectionViewElements;
    IKImageElement *_bgImageElement;
    IKImageElement *_bgHeroImageElement;
    NSIndexPath *_lastFocusedIndexPath;
    BOOL _updateAutoHighlight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)_blurEffectStyle;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_backgroundImageProxy;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(struct CGSize )_backgroundImageProxySize;
-(void)_configureWithBgImage:(id)arg0 backdropImage:(id)arg1 ;
-(void)_scrollToPreferredFocusView;
-(void)collectionView:(id)arg0 didReceivePhysicalPlayForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)loadView;
-(void)updateWithTemplateElement:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif