// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RETIMELINE_H
#define RETIMELINE_H

@class NSArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RETimeline : NSObject <NSCopying>

 {
    NSArray *_transitionDates;
    NSArray *_values;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSArray *transitionDates;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeline:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStartDate:(id)arg0 values:(id)arg1 durations:(id)arg2 ;
-(id)initWithTimeline:(id)arg0 ;
-(id)valueForDate:(id)arg0 ;


@end


#endif