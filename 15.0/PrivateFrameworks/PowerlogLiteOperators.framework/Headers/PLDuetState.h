// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDUETSTATE_H
#define PLDUETSTATE_H

@class NSDate, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLDuetState : NSObject

@property CGFloat cpuSeconds; // ivar: _cpuSeconds
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDictionary *info; // ivar: _info
@property (retain) NSMutableArray *overlappingStates; // ivar: _overlappingStates
@property (retain) NSDate *startDate; // ivar: _startDate


-(CGFloat)duration;
-(id)description;
-(id)init;


@end


#endif