// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITTIMEDRESULT_H
#define AXAUDITTIMEDRESULT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AXAuditTimedResult : NSObject

@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSString *executionTimeString;
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime




@end


#endif