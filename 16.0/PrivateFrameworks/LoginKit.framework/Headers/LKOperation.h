// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LKOPERATION_H
#define LKOPERATION_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface LKOperation : NSObject

@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *endTime; // ivar: _endTime
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)dictionary;
-(id)init;


@end


#endif