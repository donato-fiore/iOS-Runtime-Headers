// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTIMEBALLLOCATIONREQUEST_H
#define MNTIMEBALLLOCATIONREQUEST_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MNTimeballLocationRequest : NSObject

@property (nonatomic) NSUInteger attemptCount; // ivar: _attemptCount
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) CGFloat desiredAccuracy; // ivar: _desiredAccuracy
@property (nonatomic) NSUInteger maxAttempts; // ivar: _maxAttempts
@property (retain, nonatomic) NSDate *requestDate; // ivar: _requestDate
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(id)requestWithAccuracy:(CGFloat)arg0 maxAttempts:(NSUInteger)arg1 timeoutInterval:(CGFloat)arg2 completionBlock:(id)arg3 ;
-(id)init;


@end


#endif