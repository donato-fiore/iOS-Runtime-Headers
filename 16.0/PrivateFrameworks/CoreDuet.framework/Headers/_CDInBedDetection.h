// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDINBEDDETECTION_H
#define _CDINBEDDETECTION_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _CDInBedDetection : NSObject

@property CGFloat confidence; // ivar: _confidence
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate


-(CGFloat)duration;


@end


#endif