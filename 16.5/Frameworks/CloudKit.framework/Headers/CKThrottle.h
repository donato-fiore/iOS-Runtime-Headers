// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTHROTTLE_H
#define CKTHROTTLE_H

@class NSNumber, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKThrottle : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *allowedRequestCount; // ivar: _allowedRequestCount
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain) NSNumber *currentRequestWindowIndex; // ivar: _currentRequestWindowIndex
@property (retain, nonatomic) NSNumber *databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) NSNumber *errorCode; // ivar: _errorCode
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (retain, nonatomic) NSNumber *intervalLengthSeconds; // ivar: _intervalLengthSeconds
@property (retain, nonatomic) NSNumber *isServerThrottle; // ivar: _isServerThrottle
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *operationGroupNamePrefix; // ivar: _operationGroupNamePrefix
@property (retain, nonatomic) NSNumber *operationType; // ivar: _operationType
@property (retain, nonatomic) NSNumber *repeatEverySeconds; // ivar: _repeatEverySeconds
@property (retain) NSNumber *sentRequestCount; // ivar: _sentRequestCount
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy) NSNumber *throttleID; // ivar: _throttleID
@property (retain, nonatomic) NSDate *throttleStartDate; // ivar: _throttleStartDate
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(BOOL)appliesToCriteria:(id)arg0 ;
-(BOOL)canTestInClientProcess;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired;
-(CGFloat)delayUntilNextOperationAllowed;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)throttleBlockingUntilNextRequestWindow;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementSentRequestCount;


@end


#endif