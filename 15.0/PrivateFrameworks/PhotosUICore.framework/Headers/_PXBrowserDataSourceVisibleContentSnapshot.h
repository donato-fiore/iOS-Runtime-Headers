// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXBROWSERDATASOURCEVISIBLECONTENTSNAPSHOT_H
#define _PXBROWSERDATASOURCEVISIBLECONTENTSNAPSHOT_H

@class NSArray;
@protocol PXDisplayAssetDataSource;


#import "PXBrowserVisibleContentSnapshot.h"

@interface _PXBrowserDataSourceVisibleContentSnapshot : PXBrowserVisibleContentSnapshot

@property (readonly, nonatomic) NSObject<PXDisplayAssetDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSUInteger dateType; // ivar: _dateType
@property (readonly, copy, nonatomic) NSArray *indexPaths; // ivar: _indexPaths


-(id)dateInterval;
-(id)initWithDateIntervalGranularity:(NSUInteger)arg0 ;
-(id)initWithIndexPaths:(id)arg0 dataSource:(id)arg1 dateIntervalGranularity:(NSUInteger)arg2 dateType:(NSUInteger)arg3 ;


@end


#endif