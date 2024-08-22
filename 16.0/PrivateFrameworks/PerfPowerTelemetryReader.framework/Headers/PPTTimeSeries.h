// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTTIMESERIES_H
#define PPTTIMESERIES_H

@class NSData, NSMutableArray, NSArray, NSString;
@protocol NSCopying, NSFastEnumeration, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PPTEvent.h"

@interface PPTTimeSeries : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

 {
    BOOL _isSorted;
    NSData *_sortHint;
    NSMutableArray *_events;
}


@property (readonly) NSArray *allTimestamps;
@property (readonly) NSArray *array;
@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PPTEvent *firstObject;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PPTEvent *lastObject;


+(BOOL)supportsSecureCoding;
-(BOOL)containsEvent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeSeries:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteredTimeSeriesUsingPredicate:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvents:(*id)arg0 count:(NSUInteger)arg1 ;
-(id)initWithEvents:(id)arg0 ;
-(id)metricValuesForKey:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectEnumerator;
-(id)reverseObjectEnumerator;
-(id)sortedArrayUsingComparator:(id)arg0 ;
-(void)_guaranteeSortedness;
-(void)addEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)filterUsingPredicate:(id)arg0 ;
-(void)removeAllEvents;
-(void)removeEvent:(id)arg0 ;


@end


#endif