// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDATERANGE_H
#define DBDATERANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface DBDateRange : NSObject

@property (retain, nonatomic) NSDate *end; // ivar: _end
@property (readonly, nonatomic) CGFloat endTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasEnd;
@property (readonly, nonatomic) BOOL hasStart;
@property (retain, nonatomic) NSDate *start; // ivar: _start
@property (readonly, nonatomic) CGFloat startTimeIntervalSinceReferenceDate;
@property (readonly, nonatomic) BOOL validRange;


+(BOOL)_validDate:(id)arg0 ;
-(BOOL)containsDate:(id)arg0 ;
-(id)description;
-(id)initWithStart:(id)arg0 end:(id)arg1 ;


@end


#endif