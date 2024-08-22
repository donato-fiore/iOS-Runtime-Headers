// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKOFFICEHOUR_H
#define EKOFFICEHOUR_H

@class NSDate, NSTimeZone;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKOfficeHour : NSObject <NSCopying>



@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) NSInteger weekday; // ivar: _weekday


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 weekday:(NSInteger)arg1 startTime:(id)arg2 endTime:(id)arg3 timeZone:(id)arg4 ;


@end


#endif