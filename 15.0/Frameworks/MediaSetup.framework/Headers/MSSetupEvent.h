// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSSETUPEVENT_H
#define MSSETUPEVENT_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface MSSetupEvent : NSObject

@property (nonatomic) BOOL didSwitchAccount; // ivar: _didSwitchAccount
@property (retain, nonatomic) NSDate *endTime; // ivar: _endTime
@property (nonatomic) NSUInteger numberOfErrors; // ivar: _numberOfErrors
@property (nonatomic) NSUInteger numberOfHomeAdded; // ivar: _numberOfHomeAdded
@property (nonatomic) NSUInteger numberOfHomesWithVR; // ivar: _numberOfHomesWithVR
@property (nonatomic) int result; // ivar: _result
@property (nonatomic) BOOL sent; // ivar: _sent
@property (retain, nonatomic) NSString *serviceId; // ivar: _serviceId
@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)init;
-(void)addHome:(id)arg0 ;


@end


#endif