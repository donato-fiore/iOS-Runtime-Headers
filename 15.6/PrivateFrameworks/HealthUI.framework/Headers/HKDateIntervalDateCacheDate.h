// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATEINTERVALDATECACHEDATE_H
#define HKDATEINTERVALDATECACHEDATE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface HKDateIntervalDateCacheDate : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger dateType; // ivar: _dateType


-(id)description;
-(id)initWithDate:(id)arg0 dateType:(NSInteger)arg1 ;


@end


#endif