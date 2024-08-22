// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBASICCOLLECTIONVIEWCONTROLLER_H
#define GKBASICCOLLECTIONVIEWCONTROLLER_H

@class NSArray;


#import "GKCollectionViewController.h"
#import "GKCollectionViewDataSource.h"

@interface GKBasicCollectionViewController : GKCollectionViewController

@property (retain, nonatomic) GKCollectionViewDataSource *initialDataSource; // ivar: _initialDataSource
@property (retain, nonatomic) NSArray *metricsForSections; // ivar: _metricsForSections
@property (retain, nonatomic) id *target; // ivar: _target


-(id)initWithDataSource:(id)arg0 title:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureDataSource;
-(void)setDataSource:(id)arg0 ;


@end


#endif