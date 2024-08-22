// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRECENTINPUTSVIEW_H
#define UIKBRECENTINPUTSVIEW_H

@class NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate;


#import "UIKBKeyView.h"
#import "UICollectionView.h"
#import "UICollectionViewFlowLayout.h"

@interface UIKBRecentInputsView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    BOOL _verticalLayout;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // ivar: _flowLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *recentInputStrings; // ivar: _recentInputStrings
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)focusableVariantCount;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 keyplane:(id)arg1 key:(id)arg2 ;
-(id)selectedRecentInputString;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)displayLayer:(id)arg0 ;
-(void)refreshSelectedRecent;
-(void)scrollViewDidChangeContentSize:(id)arg0 ;
-(void)setRecentInputs:(id)arg0 ;
-(void)setVerticalLayout:(BOOL)arg0 ;
-(void)setupCollectionView;


@end


#endif