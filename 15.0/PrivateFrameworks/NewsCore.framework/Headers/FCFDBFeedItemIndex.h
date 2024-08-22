// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFDBFEEDITEMINDEX_H
#define FCFDBFEEDITEMINDEX_H

@class NSManagedObject, NSNumber;


#import "FCFDBFeedItem.h"

@interface FCFDBFeedItemIndex : NSManagedObject

@property (nonatomic) NSUInteger feature;
@property (retain, nonatomic) FCFDBFeedItem *feedItem;
@property (nonatomic) NSNumber *feedLookupID;
@property (nonatomic) NSUInteger order;




@end


#endif