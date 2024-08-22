// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWDIFFABLEDATASOURCESECTIONSNAPSHOTHANDLERS_H
#define UICOLLECTIONVIEWDIFFABLEDATASOURCESECTIONSNAPSHOTHANDLERS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UICollectionViewDiffableDataSourceSectionSnapshotHandlers : NSObject <NSCopying>



@property (copy, nonatomic) id *shouldCollapseItemHandler; // ivar: _shouldCollapseItemHandler
@property (copy, nonatomic) id *shouldExpandItemHandler; // ivar: _shouldExpandItemHandler
@property (copy, nonatomic) id *snapshotForExpandingParentItemHandler; // ivar: _snapshotForExpandingParentItemHandler
@property (copy, nonatomic) id *willCollapseItemHandler; // ivar: _willCollapseItemHandler
@property (copy, nonatomic) id *willExpandItemHandler; // ivar: _willExpandItemHandler


-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithShouldExpandItemHandler:(id)arg0 willExpandItemHandler:(unk)arg1 shouldCollapseItemHandler:(id)arg2 willCollapseItemHandler:(unk)arg3 snapshotForExpandingParentItemHandler:(id)arg4  ;


@end


#endif