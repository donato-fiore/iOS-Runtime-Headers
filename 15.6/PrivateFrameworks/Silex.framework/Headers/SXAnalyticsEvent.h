// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXANALYTICSEVENT_H
#define SXANALYTICSEVENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface SXAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)description;
-(id)init;
-(void)determineEndDate;


@end


#endif