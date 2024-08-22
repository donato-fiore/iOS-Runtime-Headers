// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSESSIONDETAILARRAYITEMDATA_H
#define ICASSESSIONDETAILARRAYITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSessionType.h"

@interface ICASSessionDetailArrayItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *endTimestamp; // ivar: _endTimestamp
@property (readonly, nonatomic) NSNumber *sessionDuration; // ivar: _sessionDuration
@property (readonly, nonatomic) ICASSessionType *sessionType; // ivar: _sessionType
@property (readonly, nonatomic) NSNumber *startTimestamp; // ivar: _startTimestamp


+(id)dataName;
-(id)initWithSessionType:(id)arg0 startTimestamp:(id)arg1 endTimestamp:(id)arg2 sessionDuration:(id)arg3 ;
-(id)toDict;


@end


#endif