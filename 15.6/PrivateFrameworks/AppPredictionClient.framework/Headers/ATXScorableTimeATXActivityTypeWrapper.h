// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSCORABLETIMEATXACTIVITYTYPEWRAPPER_H
#define ATXSCORABLETIMEATXACTIVITYTYPEWRAPPER_H

@class NSString;
@protocol ATXScorableTimePeriodProtocol;

#import <Foundation/Foundation.h>


@interface ATXScorableTimeATXActivityTypeWrapper : NSObject <ATXScorableTimePeriodProtocol>



@property (readonly, nonatomic) NSUInteger activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *legacyScorableTimeIdentifier;
@property (readonly, nonatomic) NSString *scorableTimeIdentifier;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithActivityType:(NSUInteger)arg0 ;


@end


#endif