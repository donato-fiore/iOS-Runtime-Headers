// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSSERVICEEVENT_H
#define MSSERVICEEVENT_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "MSStopwatch.h"

@interface MSServiceEvent : NSObject

@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (readonly, nonatomic) NSString *eventName;
@property (nonatomic) int eventType; // ivar: _eventType
@property (retain, nonatomic) NSUUID *serviceID; // ivar: _serviceID
@property (retain, nonatomic) MSStopwatch *stopwatch; // ivar: _stopwatch


-(id)initWithEventType:(int)arg0 ;
-(id)initWithEventType:(int)arg0 serviceID:(id)arg1 ;
-(id)initWithEventType:(int)arg0 serviceID:(id)arg1 didSucceed:(BOOL)arg2 ;


@end


#endif