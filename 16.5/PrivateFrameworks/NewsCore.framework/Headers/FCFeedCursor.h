// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCFEEDCURSOR_H
#define FCFEEDCURSOR_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FCFeedCursor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) BOOL isBottomOfFeed;
@property (readonly, nonatomic) BOOL isTopOfFeed;
@property (nonatomic) NSUInteger order; // ivar: _order


+(BOOL)supportsSecureCoding;
+(id)cursorForBottomOfFeed;
+(id)cursorForCurrentDate;
+(id)cursorForDate:(id)arg0 ;
+(id)cursorForOrder:(NSUInteger)arg0 ;
+(id)cursorForTimeIntervalBeforeNow:(CGFloat)arg0 ;
+(id)cursorForTopOfFeed;
-(BOOL)hasReachedCursor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCursor:(id)arg0 ;
-(NSInteger)compareToCursor:(id)arg0 ;
-(NSUInteger)hash;
-(id)bottommostCursor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)topmostCursor:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif