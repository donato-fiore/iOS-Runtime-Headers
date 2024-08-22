// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDISJOINTDATERANGE_H
#define CALDISJOINTDATERANGE_H

@class NSSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CalDisjointDateRange : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSSet *distinctRanges; // ivar: _distinctRanges


+(BOOL)supportsSecureCoding;
+(id)disjointRangeWithDistinctRanges:(id)arg0 ;
+(id)disjointRangeWithSingleRange:(id)arg0 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)containsRange:(id)arg0 ;
-(BOOL)intersectsRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)totalDuration;
-(id)addDisjointRange:(id)arg0 ;
-(id)addRange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistinctRanges:(id)arg0 ;
-(id)intersectionWithDisjointRange:(id)arg0 ;
-(id)intersectionWithRange:(id)arg0 ;
-(id)sortedDistinctRanges;
-(id)subtractDisjointRange:(id)arg0 ;
-(id)subtractRange:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif