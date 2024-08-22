// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDJOBSCHEDULERJOBMETADATA_H
#define ASDJOBSCHEDULERJOBMETADATA_H

@class NSNumber, NSString, NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy) NSString *bundleID; // ivar: _bundleID
@property (copy) NSNumber *externalPriority; // ivar: _externalPriority
@property (copy) NSNumber *itemID; // ivar: _itemID
@property (copy) NSString *jobState; // ivar: _jobState
@property (copy) NSString *jobType; // ivar: _jobType
@property (copy) NSError *lastError; // ivar: _lastError
@property (copy) NSNumber *lastSoftFailureTimestamp; // ivar: _lastSoftFailureTimestamp
@property (copy) NSNumber *priority; // ivar: _priority
@property (copy) NSNumber *priorityBucket; // ivar: _priorityBucket
@property (copy) NSString *skippedReason; // ivar: _skippedReason
@property (nonatomic) NSInteger softFailureCount; // ivar: _softFailureCount
@property (copy) NSNumber *softFailureTimeout; // ivar: _softFailureTimeout
@property (copy) NSNumber *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif