// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTTIMEINTERVALSET_H
#define PPTTIMEINTERVALSET_H

@protocol NSCopying, NSFastEnumeration, PPTTimeIntervalSet;

#import <Foundation/Foundation.h>


@interface PPTTimeIntervalSet : NSObject <NSCopying, NSFastEnumeration, PPTTimeIntervalSet>



@property (readonly) NSUInteger count;
@property (readonly) CGFloat duration;
@property (readonly) CGFloat endTimestamp;
@property (readonly) CGFloat mean;
@property (readonly) CGFloat startTimestamp;
@property (readonly) CGFloat timeWeightedMean;
@property (readonly) CGFloat timeWeightedSum;


-(BOOL)doesIntersect:(id)arg0 ;
-(BOOL)isEqualToTimeIntervalSet:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteredTimeIntervalSetUsingPredicate:(id)arg0 ;
-(id)init;
-(id)initWithTimeInterval:(id)arg0 ;
-(id)initWithTimeIntervalSet:(id)arg0 ;
-(id)intervalSetFromIntersecting:(id)arg0 ;
-(id)intervalSetFromSubtracting:(id)arg0 ;
-(id)intervalSetFromUnionWith:(id)arg0 ;
-(void)addTimeInterval:(id)arg0 ;
-(void)filterUsingPredicate:(id)arg0 ;
-(void)intersect:(id)arg0 ;
-(void)removeAllIntervals;
-(void)subtract:(id)arg0 ;
-(void)unionWith:(id)arg0 ;


@end


#endif