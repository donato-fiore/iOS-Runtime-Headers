// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGDATASOURCECHANGE_H
#define PXGDATASOURCECHANGE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PXSectionedDataSource.h"

@interface PXGDataSourceChange : NSObject

@property (readonly, nonatomic) NSArray *changeDetails; // ivar: _changeDetails
@property (readonly, nonatomic) PXSectionedDataSource *dataSourceAfterChanges; // ivar: _dataSourceAfterChanges
@property (readonly, nonatomic) PXSectionedDataSource *dataSourceBeforeChanges; // ivar: _dataSourceBeforeChanges


-(id)init;
-(id)initWithChangeDetails:(id)arg0 dataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2 ;


@end


#endif