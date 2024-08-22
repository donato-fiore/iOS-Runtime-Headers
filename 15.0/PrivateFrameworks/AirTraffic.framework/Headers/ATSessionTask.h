// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATSESSIONTASK_H
#define ATSESSIONTASK_H

@class NSArray, NSString, NSError, NSDictionary, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "ATSession.h"

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) NSUInteger completedItemCount; // ivar: _completedItemCount
@property (copy, nonatomic) NSArray *currentItemDescriptions; // ivar: _currentItemDescriptions
@property (copy, nonatomic) NSArray *currentItems; // ivar: _currentItems
@property (copy, nonatomic) NSString *dataClass; // ivar: _dataClass
@property (readonly, nonatomic) CGFloat duration;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) CGFloat finishTime; // ivar: _finishTime
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (copy, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (copy, nonatomic) NSDictionary *properties; // ivar: _properties
@property (copy, nonatomic) NSArray *recentlyFailedAssets; // ivar: _recentlyFailedAssets
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (weak, nonatomic) ATSession *session; // ivar: _session
@property (copy, nonatomic) NSString *sessionGroupingKey; // ivar: _sessionGroupingKey
@property (copy, nonatomic) NSString *sessionTaskIdentifier; // ivar: _sessionTaskIdentifier
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended
@property (copy, nonatomic) NSNumber *totalBytesToTransfer; // ivar: _totalBytesToTransfer
@property (copy, nonatomic) NSNumber *totalBytesTransferred; // ivar: _totalBytesTransferred
@property (nonatomic) NSUInteger totalItemCount; // ivar: _totalItemCount


+(BOOL)supportsSecureCoding;
-(id)baseClassRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataClass:(id)arg0 ;
-(void)_start;
-(void)cancel;
-(void)encodeWithCoder:(id)arg0 ;
-(void)start;


@end


#endif