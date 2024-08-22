// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCFEEDRANGE_H
#define FCFEEDRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "FCFeedCursor.h"
#import "FCDateRange.h"

@interface FCFeedRange : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) FCFeedCursor *bottom; // ivar: _bottom
@property (readonly, copy, nonatomic) FCDateRange *dateRange;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, copy, nonatomic) FCFeedCursor *middle;
@property (readonly, nonatomic) BOOL reachesBottomOfFeed;
@property (readonly, nonatomic) BOOL reachesTopOfFeed;
@property (copy, nonatomic) FCFeedCursor *top; // ivar: _top


+(BOOL)supportsSecureCoding;
+(id)feedRangeByMergingRange:(id)arg0 withRange:(id)arg1 ;
+(id)feedRangeFromDate:(id)arg0 toDate:(id)arg1 ;
+(id)feedRangeFromDateRange:(id)arg0 ;
+(id)feedRangeWithMaxOrder:(NSUInteger)arg0 minOrder:(NSUInteger)arg1 ;
+(id)feedRangeWithTop:(id)arg0 bottom:(id)arg1 ;
-(BOOL)containsCursor:(id)arg0 ;
-(BOOL)containsFeedRange:(id)arg0 ;
-(BOOL)containsOrder:(NSUInteger)arg0 ;
-(BOOL)intersectsOrAdjoinsRange:(id)arg0 ;
-(BOOL)intersectsRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)feedRangeByIntersectingWithRange:(id)arg0 ;
-(id)feedRangeByUnioningWithRange:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif