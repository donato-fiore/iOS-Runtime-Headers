// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUTILINGVIEWUPDATEITEM_H
#define PUTILINGVIEWUPDATEITEM_H

@class NSIndexPath;

#import <Foundation/Foundation.h>

#import "PUTilingDataSource.h"

@interface PUTilingViewUpdateItem : NSObject

@property (readonly, nonatomic) NSInteger action; // ivar: _action
@property (readonly, nonatomic) PUTilingDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate; // ivar: _indexPathAfterUpdate
@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate; // ivar: _indexPathBeforeUpdate


-(id)initWithAction:(NSInteger)arg0 indexPathBeforeUpdate:(id)arg1 indexPathAfterUpdate:(id)arg2 dataSource:(id)arg3 ;
-(id)transformedIndexPath:(id)arg0 withDataSource:(id)arg1 ;


@end


#endif