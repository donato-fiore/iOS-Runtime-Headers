// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIUPDATEITEM_H
#define UIUPDATEITEM_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UICollectionViewUpdateItem.h"
#import "UITableViewUpdateGap.h"

@interface UIUpdateItem : NSObject {
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
}


@property (readonly, nonatomic) int action; // ivar: _action
@property (nonatomic) NSInteger animation; // ivar: _animation
@property (readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (weak, nonatomic) UITableViewUpdateGap *gap; // ivar: _gap
@property (nonatomic) BOOL headerFooterOnly; // ivar: _headerFooterOnly
@property (readonly, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic) BOOL isDecomposedFromReload;


-(BOOL)isSectionOperation;
-(NSInteger)compareIndexPaths:(id)arg0 ;
-(NSInteger)inverseCompareIndexPaths:(id)arg0 ;
-(id)initWithAction:(int)arg0 forIndexPath:(id)arg1 animation:(NSInteger)arg2 ;


@end


#endif