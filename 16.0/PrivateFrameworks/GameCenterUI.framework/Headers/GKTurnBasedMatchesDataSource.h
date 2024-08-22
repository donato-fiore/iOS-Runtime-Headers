// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDMATCHESDATASOURCE_H
#define GKTURNBASEDMATCHESDATASOURCE_H

@class GKGame;
@protocol GKTurnBasedMatchesDataSourceDelegate;


#import "GKSplittingDataSource.h"

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource

@property (nonatomic) UIEdgeInsets cellMarginInsets; // ivar: _cellMarginInsets
@property (weak, nonatomic) NSObject<GKTurnBasedMatchesDataSourceDelegate> *delegate; // ivar: _delegateWeak
@property (nonatomic) SEL detailPressedAction; // ivar: _detailPressedAction
@property (retain, nonatomic) GKGame *game; // ivar: _game


-(NSUInteger)numberOfMatches;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewWillBecomeActive:(id)arg0 ;
-(void)configureCollectionView:(id)arg0 ;
-(void)configureDataSource;
-(void)removeItemAtIndexPath:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif