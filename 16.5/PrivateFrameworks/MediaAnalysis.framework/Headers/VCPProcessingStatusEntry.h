// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPPROCESSINGSTATUSENTRY_H
#define VCPPROCESSINGSTATUSENTRY_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface VCPProcessingStatusEntry : NSObject

@property (readonly, nonatomic) NSUInteger attempts; // ivar: _attempts
@property (readonly, nonatomic) NSDate *lastRetryDate; // ivar: _lastRetryDate
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSUInteger taskID; // ivar: _taskID


+(id)entryWithLocalIdentifier:(id)arg0 andTaskID:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andAttempts:(NSUInteger)arg3 andLastRetryDate:(id)arg4 ;
-(id)initWithLocalIdentifier:(id)arg0 andTaskID:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andAttempts:(NSUInteger)arg3 andLastRetryDate:(id)arg4 ;


@end


#endif