// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCFDBFEEDSEGMENT_H
#define FCFDBFEEDSEGMENT_H

@class NSManagedObject, NSData, NSNumber, NSSet, NSDate;


#import "FCFeedRange.h"

@interface FCFDBFeedSegment : NSManagedObject

@property (nonatomic) NSUInteger bottom;
@property (retain, nonatomic) NSData *ckCursor;
@property (retain, nonatomic) NSNumber *feedItemCount;
@property (retain, nonatomic) NSSet *feedItemIndexes;
@property (readonly, nonatomic) FCFeedRange *feedRange;
@property (retain, nonatomic) NSDate *lastAccessDate;
@property (nonatomic) NSUInteger top;


-(id)description;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;


@end


#endif