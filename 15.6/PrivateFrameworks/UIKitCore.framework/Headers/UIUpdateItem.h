// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIUPDATEITEM_H
#define UIUPDATEITEM_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "UICollectionViewUpdateItem.h"
#import "UITableViewUpdateGap.h"

@interface UIUpdateItem : NSObject {
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    BOOL _headerFooterOnly;
    int _action;
    NSIndexPath *_indexPath;
    NSInteger _animation;
}


@property (readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (weak, nonatomic) UITableViewUpdateGap *gap; // ivar: _gap
@property (readonly, nonatomic) BOOL isDecomposedFromReload;


-(NSInteger)compareIndexPaths:(id)arg0 ;
-(NSInteger)inverseCompareIndexPaths:(id)arg0 ;


@end


#endif