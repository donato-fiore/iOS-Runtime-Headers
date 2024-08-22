// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSESSIONSUMMARYARRAYITEMDATA_H
#define ICASSESSIONSUMMARYARRAYITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASSessionType.h"

@interface ICASSessionSummaryArrayItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *sessionCount; // ivar: _sessionCount
@property (readonly, nonatomic) NSNumber *sessionDuration; // ivar: _sessionDuration
@property (readonly, nonatomic) ICASSessionType *sessionType; // ivar: _sessionType


+(id)dataName;
-(id)initWithSessionType:(id)arg0 sessionDuration:(id)arg1 sessionCount:(id)arg2 ;
-(id)toDict;


@end


#endif