// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DASLOGVALUEINTERVAL_H
#define _DASLOGVALUEINTERVAL_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface _DASLogValueInterval : NSObject

@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSObject *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)duration;
-(id)description;
-(id)durationString;
-(id)intervalString;


@end


#endif