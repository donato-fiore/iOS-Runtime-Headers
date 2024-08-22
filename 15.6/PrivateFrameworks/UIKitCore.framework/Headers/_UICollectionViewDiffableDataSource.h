// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWDIFFABLEDATASOURCE_H
#define _UICOLLECTIONVIEWDIFFABLEDATASOURCE_H

@class UIDiffableDataSourceSnapshotter;


#import "UICollectionView.h"

@interface _UICollectionViewDiffableDataSource : UIDiffableDataSourceSnapshotter

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) id *supplementaryConfigurationHandler;
@property (copy, nonatomic) id *supplementaryReuseIdentifierProvider;
@property (copy, nonatomic) id *supplementaryViewProvider;


-(id)initWithCollectionView:(id)arg0 cellProvider:(id)arg1 ;
// -(id)initWithCollectionView:(id)arg0 reuseIdentifierProvider:(id)arg1 cellConfigurationHandler:(unk)arg2  ;


@end


#endif