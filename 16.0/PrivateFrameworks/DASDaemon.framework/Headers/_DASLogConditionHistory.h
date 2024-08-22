// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DASLOGCONDITIONHISTORY_H
#define _DASLOGCONDITIONHISTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _DASLogConditionHistory : NSObject

@property (retain, nonatomic) NSMutableArray *conditions; // ivar: _conditions
@property (retain, nonatomic) NSMutableArray *intervals; // ivar: _intervals


+(id)condition:(id)arg0 fromDate:(id)arg1 ;
-(id)description;
-(id)idealIntervals;
-(id)initWithCondition:(id)arg0 fromDate:(id)arg1 ;
-(void)addCondition:(id)arg0 atDate:(id)arg1 ;


@end


#endif