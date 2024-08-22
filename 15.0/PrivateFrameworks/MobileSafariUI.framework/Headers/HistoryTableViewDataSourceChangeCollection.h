// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HISTORYTABLEVIEWDATASOURCECHANGECOLLECTION_H
#define HISTORYTABLEVIEWDATASOURCECHANGECOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HistoryTableViewDataSourceChangeCollection : NSObject

@property (copy, nonatomic) NSArray *deleteChanges; // ivar: _deleteChanges
@property (copy, nonatomic) NSArray *insertChanges; // ivar: _insertChanges


-(id)init;


@end


#endif