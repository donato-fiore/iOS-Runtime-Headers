// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDISAMBIGUATIONCOLLECTIONVIEWCONTROLLER_H
#define SLDISAMBIGUATIONCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSDictionary, UICollectionViewDiffableDataSource, NSDiffableDataSourceSnapshot;


#import "SLHighlight.h"
#import "SLDisambiguationCompositionalLayout.h"

@interface SLDisambiguationCollectionViewController : UICollectionViewController

@property (retain, nonatomic) NSDictionary *attributionMap; // ivar: _attributionMap
@property (nonatomic) CGRect attributionViewFrame; // ivar: _attributionViewFrame
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) SLHighlight *highlight; // ivar: _highlight
@property (nonatomic) BOOL isInitialLoad; // ivar: _isInitialLoad
@property (retain, nonatomic) SLDisambiguationCompositionalLayout *layout; // ivar: _layout
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // ivar: _snapshot


-(id)cellForIndexPath:(id)arg0 inCollectionView:(id)arg1 withItemIdentifier:(id)arg2 ;
-(id)createAttributionMapWithHighlight:(id)arg0 ;
-(id)dataSourceWithCollectionView:(id)arg0 ;
-(id)finalCompositionalLayout;
-(id)finalLayoutGroup:(id)arg0 itemsCount:(NSUInteger)arg1 collectionWidth:(CGFloat)arg2 targetItemHeight:(CGFloat)arg3 ;
-(id)finalLayoutSectionForEnvironment:(id)arg0 ;
-(id)initWithHighlight:(id)arg0 ;
-(id)initialCompositionalLayout;
-(id)initialLayoutGroup:(id)arg0 itemsCount:(NSUInteger)arg1 collectionWidth:(CGFloat)arg2 targetItemHeight:(CGFloat)arg3 ;
-(id)initialLayoutSectionForEnvironment:(id)arg0 ;
-(void)collectionViewBackgroundTapped:(id)arg0 ;
-(void)loadView;
-(void)startAnimation;
-(void)updateDataSourceSnapshot;
-(void)viewDidLayoutSubviews;


@end


#endif