// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AATIMEDDATA_H
#define AATIMEDDATA_H

@class NSDate;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface AATimedData : NSObject <AADataEventType>

 {
    ? startDate;
    ? endDate;
}


@property (nonatomic, readonly) CGFloat duration; // ivar: duration
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;


+(id)dataName;
-(id)init;
-(id)toDict;


@end


#endif