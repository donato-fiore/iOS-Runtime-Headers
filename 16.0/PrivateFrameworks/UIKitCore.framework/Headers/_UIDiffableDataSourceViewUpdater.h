// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDIFFABLEDATASOURCEVIEWUPDATER_H
#define _UIDIFFABLEDATASOURCEVIEWUPDATER_H

@class NSString;
@protocol _UICollectionViewUpdateItemApplying, _UIDataSourceSnapshotTranslating;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UITableView.h"

@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying>



@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSObject<_UIDataSourceSnapshotTranslating> *dataSourceSnapshot; // ivar: _dataSourceSnapshot
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasPerformedInitialUpdate; // ivar: _hasPerformedInitialUpdate
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sinkKind; // ivar: _sinkKind
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) NSInteger tableViewRowAnimation; // ivar: _tableViewRowAnimation
@property (weak, nonatomic) NSObject<_UICollectionViewUpdateItemApplying> *updatesSink; // ivar: _updatesSink


-(BOOL)_doesExpectedUpdate:(id)arg0 matchActualUpdates:(id)arg1 allowingEmptyUpdates:(BOOL)arg2 ;
-(id)_sectionIndexesToReloadForTableViewCompatibility:(id)arg0 ;
-(id)initWithCollectionView:(id)arg0 ;
-(id)initWithCollectionViewUpdatesSink:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(id)initWithUpdatesSink:(id)arg0 collectionView:(id)arg1 tableView:(id)arg2 ;
-(id)targetView;
-(void)_deleteAllItems;
-(void)_performMoveUpdate:(id)arg0 onCollectionView:(id)arg1 ;
-(void)_performMoveUpdate:(id)arg0 onTableView:(id)arg1 ;
// -(void)_performUpdateWithCollectionViewUpdateItems:(id)arg0 dataSourceSnapshot:(id)arg1 updateHandler:(id)arg2 completion:(unk)arg3 viewPropertyAnimator:(id)arg4 customAnimationsProvider:(unk)arg5 animated:(id)arg6  ;
-(void)_performViewUpdates:(id)arg0 ;
-(void)_reloadData;
-(void)_willPerformDiff:(BOOL)arg0 ;


@end


#endif