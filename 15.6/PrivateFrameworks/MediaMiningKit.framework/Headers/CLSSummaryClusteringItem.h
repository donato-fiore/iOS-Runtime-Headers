// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSUMMARYCLUSTERINGITEM_H
#define CLSSUMMARYCLUSTERINGITEM_H

@class PLDataCluster;

#import <Foundation/Foundation.h>


@interface CLSSummaryClusteringItem : NSObject

@property (readonly) PLDataCluster *cluster; // ivar: _cluster
@property (readonly) NSUInteger numberOfItemsToElect; // ivar: _numberOfItemsToElect


-(id)initWithCluster:(id)arg0 numberOfItemsToElect:(NSUInteger)arg1 ;


@end


#endif