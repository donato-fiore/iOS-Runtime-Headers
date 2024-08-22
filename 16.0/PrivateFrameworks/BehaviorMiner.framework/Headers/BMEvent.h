// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMEVENT_H
#define BMEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "BMItem.h"

@interface BMEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) BMItem *item; // ivar: _item
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 item:(id)arg2 ;


@end


#endif