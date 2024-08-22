// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLCOREDUETEVENTINTERVAL_H
#define PLCOREDUETEVENTINTERVAL_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PLCoreDuetEventInterval : NSObject

@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSDate *startDate; // ivar: _startDate


-(BOOL)intersects:(id)arg0 ;
-(id)description;
-(id)joinWithInterval:(id)arg0 ;


@end


#endif