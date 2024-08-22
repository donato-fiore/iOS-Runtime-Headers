// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPPROCESSINGSTATUSENTRY_H
#define VCPPROCESSINGSTATUSENTRY_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface VCPProcessingStatusEntry : NSObject

@property (readonly, nonatomic) NSUInteger attempts; // ivar: _attempts
@property (readonly, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (readonly, nonatomic) NSDate *nextRetryDate; // ivar: _nextRetryDate
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly, nonatomic) NSUInteger taskID; // ivar: _taskID


+(id)entryWithLocalIdentifier:(id)arg0 andTaskID:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andAttempts:(NSUInteger)arg3 andNextRetryDate:(id)arg4 ;
-(id)initWithLocalIdentifier:(id)arg0 andTaskID:(NSUInteger)arg1 andStatus:(NSUInteger)arg2 andAttempts:(NSUInteger)arg3 andNextRetryDate:(id)arg4 ;


@end


#endif